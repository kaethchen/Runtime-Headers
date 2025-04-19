@class NSError, FAChildAccountCutOffAgeResponse;

@interface FAChildAccountCutOffAgeRequest : NSObject {
    void /* unknown type, empty encoding */ urlProvider;
    void /* unknown type, empty encoding */ urlSession;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithUrlProvider:(id)a0 urlSession:(id)a1;
- (void)fetchWithCompletionHandler:(void (^)(FAChildAccountCutOffAgeResponse *, NSError *))a0;

@end
