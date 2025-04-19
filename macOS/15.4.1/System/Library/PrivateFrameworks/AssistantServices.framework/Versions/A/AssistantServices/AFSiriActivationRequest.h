@class AFSiriActivationContext;

@interface AFSiriActivationRequest : NSObject <AFSiriExternalRequest> {
    AFSiriActivationContext *_context;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)performRequestWithCompletion:(id /* block */)a0;
- (void)performRequestWithResultHandler:(id /* block */)a0;

@end
