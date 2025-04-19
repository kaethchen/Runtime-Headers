@class NSString, NSError, _TtC25CloudSubscriptionFeatures14WaitlistResult;

@interface CSFTicketManager : NSObject {
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ getCachedFeature;
    void /* unknown type, empty encoding */ getCachedTicket;
    void /* unknown type, empty encoding */ getTicketMock;
    void /* unknown type, empty encoding */ signposter;
}

+ (void)getWaitlistStatusWithFeatureID:(NSString *)a0 completionHandler:(void (^)(_TtC25CloudSubscriptionFeatures14WaitlistResult *, NSError *))a1;
+ (void)signupForWaitlistWithFeatureID:(NSString *)a0 completionHandler:(void (^)(_TtC25CloudSubscriptionFeatures14WaitlistResult *, NSError *))a1;

- (id)init;
- (void).cxx_destruct;
- (void)getWaitlistStatusWithFeatureID:(NSString *)a0 completionHandler:(void (^)(_TtC25CloudSubscriptionFeatures14WaitlistResult *, NSError *))a1;
- (void)signupForWaitlistWithFeatureID:(NSString *)a0 completionHandler:(void (^)(_TtC25CloudSubscriptionFeatures14WaitlistResult *, NSError *))a1;

@end
