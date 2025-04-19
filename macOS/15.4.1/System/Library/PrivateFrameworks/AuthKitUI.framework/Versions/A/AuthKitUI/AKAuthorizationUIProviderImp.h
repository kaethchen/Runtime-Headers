@class AKAuthorizationRVSWindowController, NSWindow, NSString;

@interface AKAuthorizationUIProviderImp : NSObject <AKAuthorizationUIProvider>

@property (retain, nonatomic) AKAuthorizationRVSWindowController *authorizationWindowController;
@property (weak, nonatomic) NSWindow *hostWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)presentAuthorizationUIForContext:(id)a0 completion:(id /* block */)a1;

@end
