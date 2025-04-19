@class NSURLAuthenticationChallenge, AuthenticationDialog;
@protocol AuthenticationSheetRequestDelegate;

@interface AuthenticationSheetRequest : SheetRequest {
    id /* block */ _completionHandler;
    AuthenticationDialog *_dialog;
}

@property (readonly, nonatomic) NSURLAuthenticationChallenge *challenge;
@property (readonly, nonatomic, getter=isRememberThisPasswordCheckboxVisible) BOOL rememberThisPasswordCheckboxVisible;
@property (weak, nonatomic) id<AuthenticationSheetRequestDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)requestCompleted;
- (void)callCompletionHandlerWithDisposition:(long long)a0 credential:(id)a1;
- (void)displaySheet;
- (id)initWithChallenge:(id)a0 rememberThisPasswordCheckboxVisible:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)isAuthenticationSheetRequest;

@end
