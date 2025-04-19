@class NSString, LAUIAuthenticationSheetController, NSObject, AKCredentialRequestContext;
@protocol _ASAuthenticationProviderLoginRowData, _ASAuthenticationPresentationProvider, OS_dispatch_queue;

@interface AKASAuthorizationProvider : NSObject <AKAuthorizationPasswordAuthenticationDelegate, AKAlertHandlerUIProvider, _ASAuthenticationProvider> {
    AKCredentialRequestContext *_requestContext;
    NSObject<OS_dispatch_queue> *_requestQueue;
    id /* block */ _completionHandlerForCurrentRequest;
    NSString *_appName;
    BOOL _didFailWithErrorRequiringPasswordAuth;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<_ASAuthenticationPresentationProvider> presentationProvider;
@property (readonly, nonatomic) id<_ASAuthenticationProviderLoginRowData> loginRowData;
@property (readonly, nonatomic) LAUIAuthenticationSheetController *loginAuthenticationSheet;

- (void).cxx_destruct;
- (BOOL)alertHandlerShowAlert:(id)a0 primaryAction:(id /* block */)a1 altAction:(id /* block */)a2;
- (id)_accountNameForLoginChoice:(id)a0;
- (id)_detailTextForLoginChoice:(id)a0;
- (void)_handleAuthorizationError:(id)a0;
- (id)_iconImageForLoginChoice:(id)a0;
- (id)_paneTitleForLoginChoice:(id)a0;
- (void)_performAuthorizationWithCompletionHandler:(id /* block */)a0;
- (BOOL)_shouldContinueWithPasswordForError:(id)a0;
- (void)_showPasswordAuthenticationViewController;
- (id)initWithAppName:(id)a0 teamIdentifier:(id)a1 bundleIdentifier:(id)a2 authorizationRequest:(id)a3;
- (id)loginRowDataForLoginChoice:(id)a0;
- (void)passwordAuthenticationCompletedWithResults:(id)a0 error:(id)a1;
- (void)performAuthorizationWithCompletionHandler:(id /* block */)a0;
- (void)performAuthorizationWithLoginChoice:(id)a0 completionHandler:(id /* block */)a1;

@end
