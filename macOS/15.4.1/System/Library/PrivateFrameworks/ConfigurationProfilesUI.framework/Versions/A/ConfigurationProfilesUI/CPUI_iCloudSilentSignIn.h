@class NSDictionary, NSWindow, NSString;

@interface CPUI_iCloudSilentSignIn : NSObject

@property (weak) NSWindow *hostWindow;
@property (retain) NSDictionary *authResults;
@property (retain) NSString *personaID;

- (void).cxx_destruct;
- (void)_startSignInWithCompletion:(id /* block */)a0;
- (void)startSignInWithWindow:(id)a0 completion:(id /* block */)a1;

@end
