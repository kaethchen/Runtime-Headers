@class AMSAuthenticateRequest, AMSDialogResult, NSURLSessionTask, AMSAuthenticateResult, NSError, AMSDialogRequest, AMSURLSession;

@interface AppleMediaServicesUI.ReviewDialogCoordinator : NSObject <AMSURLProtocolDelegate, NSURLSessionDelegate> {
    void /* unknown type, empty encoding */ _authenticateRequest;
    void /* unknown type, empty encoding */ _authenticateContinuation;
    void /* unknown type, empty encoding */ _dialogRequest;
    void /* unknown type, empty encoding */ _dialogContinuation;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void).cxx_destruct;
- (void)AMSURLSession:(AMSURLSession *)a0 task:(NSURLSessionTask *)a1 handleDialogRequest:(AMSDialogRequest *)a2 completion:(void (^)(AMSDialogResult *, NSError *))a3;
- (void)AMSURLSession:(AMSURLSession *)a0 task:(NSURLSessionTask *)a1 handleAuthenticateRequest:(AMSAuthenticateRequest *)a2 completion:(void (^)(AMSAuthenticateResult *, NSError *))a3;

@end
