@class ASAuthorizationController, ASAuthorizationSingleSignOnProvider, NSString, NSError;

@interface AmberAppleConnectSSOAuthenticator : NSObject <ASAuthorizationControllerDelegate>

@property (retain, nonatomic) ASAuthorizationSingleSignOnProvider *provider;
@property (retain, nonatomic) ASAuthorizationController *controller;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *token;
@property BOOL done;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;
- (void)perform;

@end
