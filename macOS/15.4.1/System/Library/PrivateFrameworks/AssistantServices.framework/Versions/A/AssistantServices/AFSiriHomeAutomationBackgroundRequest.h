@class AFSiriHomeAutomationRequestInfo, AFInstanceContext;

@interface AFSiriHomeAutomationBackgroundRequest : NSObject <AFSiriExternalRequest> {
    AFSiriHomeAutomationRequestInfo *_requestInfo;
    AFInstanceContext *_instanceContext;
}

- (void).cxx_destruct;
- (id)initWithRequestInfo:(id)a0;
- (void)performRequestWithCompletion:(id /* block */)a0;
- (id)initWithRequestInfo:(id)a0 instanceContext:(id)a1;

@end
