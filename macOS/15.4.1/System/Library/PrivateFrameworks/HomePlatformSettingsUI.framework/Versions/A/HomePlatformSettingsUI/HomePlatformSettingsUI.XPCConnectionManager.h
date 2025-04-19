@class NSUUID, NSError, NSSet;

@interface HomePlatformSettingsUI.XPCConnectionManager : _TtCs12_SwiftObject <HomePlatformSettingsUI.BetaEnrollmentXPCServerInterface, HomePlatformSettingsUI.CarrySettingsXPCServerInterface> {
    void /* unknown type, empty encoding */ maker;
    void /* unknown type, empty encoding */ retryPolicy;
    void /* unknown type, empty encoding */ internalCnx;
    void /* unknown type, empty encoding */ delayedRetryTask;
    void /* unknown type, empty encoding */ retries;
}

- (void)receiveWithBetaEnrollmentHomeID:(NSUUID *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)receiveWithBetaEnrollmentHomeID:(NSUUID *)a0 identifiers:(NSSet *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)receiveWithCarrySettingsHomeID:(NSUUID *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)receiveWithCarrySettingsHomeID:(NSUUID *)a0 identifiers:(NSSet *)a1 completionHandler:(void (^)(NSError *))a2;

@end
