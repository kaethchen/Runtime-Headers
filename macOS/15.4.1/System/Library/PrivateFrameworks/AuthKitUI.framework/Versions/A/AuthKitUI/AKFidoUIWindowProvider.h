@class NSString, NSWindow;

@interface AKFidoUIWindowProvider : NSObject <ASAuthorizationControllerPresentationContextProviding, AKFidoUIProvider>

@property (retain, nonatomic) NSWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)presentationAnchorForAuthorizationController:(id)a0;
- (id)initWithWindow:(id)a0;

@end
