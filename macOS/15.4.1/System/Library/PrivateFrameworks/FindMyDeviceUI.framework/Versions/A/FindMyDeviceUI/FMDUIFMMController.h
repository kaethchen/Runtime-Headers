@class NSString, NSImage, NSError, AKInlineSignInViewController;

@interface FMDUIFMMController : NSObject <AKSignInViewControllerDelegate, AKAppleIDAuthenticationDelegate>

@property (retain) AKInlineSignInViewController *inlineSignInViewController;
@property (nonatomic) unsigned long long disableContext;
@property (retain, nonatomic) NSError *disableFMMError;
@property (retain, nonatomic) NSImage *displayImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)authenticationController:(id)a0 shouldContinueWithAuthenticationResults:(id)a1 error:(id)a2 forContext:(id)a3 completion:(id /* block */)a4;
- (void)disableFMMOnHostWindow:(id)a0 usingCallback:(id /* block */)a1;
- (id)basicAuthHeaderValueForUsername:(id)a0 password:(id)a1;
- (void)disableFMMForAccount:(id)a0 abortConditions:(unsigned long long)a1 hostWindow:(id)a2 hostView:(id)a3 usingCallback:(id /* block */)a4;
- (void)disableFMMForAccount:(id)a0 abortConditions:(unsigned long long)a1 hostWindow:(id)a2 usingCallback:(id /* block */)a3;
- (void)disableFMMForRemoveDiskVolue:(id)a0 hostWindow:(id)a1 usingCallback:(id /* block */)a2;
- (void)disableFMMForRemoveDiskVolumes:(id)a0 hostWindow:(id)a1 usingCallback:(id /* block */)a2;
- (void)disableFMMForRemoveUser:(id)a0 hostWindow:(id)a1 usingCallback:(id /* block */)a2;
- (void)disableFMMOnHostWindow:(id)a0 abortConditions:(unsigned long long)a1 usingCallback:(id /* block */)a2;
- (void)disableFMMOnHostWindow:(id)a0 orHostView:(id)a1 abortConditions:(unsigned long long)a2 usingCallback:(id /* block */)a3;
- (void)disableFMMWithAuthResults:(id)a0 adminContext:(id)a1 usingCallback:(id /* block */)a2;
- (id)fmmManager;
- (void)getWipeTokenForAccount:(id)a0 passwordToken:(id)a1 completion:(id /* block */)a2;

@end
