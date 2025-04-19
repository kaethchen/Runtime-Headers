@class SecureBackup, OTConfigurationContext, NSDictionary, CDPContext, NSError, NSArray, AKAppleIDAuthenticationContext;

@interface CoreCDPInternal.CDPExponentialRetryScheduler : NSObject

- (id)init;
- (void)retryFetchAccountInfo:(SecureBackup *)a0 cdpContext:(CDPContext *)a1 completionHandler:(void (^)(NSDictionary *, NSError *))a2;
- (void)retryFetchAllEscrowRecord:(OTConfigurationContext *)a0 cdpContext:(CDPContext *)a1 completionHandler:(void (^)(NSArray *, NSError *))a2;
- (void)retryFetchEscrowRecord:(OTConfigurationContext *)a0 cdpContext:(CDPContext *)a1 completionHandler:(void (^)(NSArray *, NSError *))a2;
- (void)retrySilentAuthWithAuthContext:(AKAppleIDAuthenticationContext *)a0 completionHandler:(void (^)(NSDictionary *, NSError *))a1;

@end
