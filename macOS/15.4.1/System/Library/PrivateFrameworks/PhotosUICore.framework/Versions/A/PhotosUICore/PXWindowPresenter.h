@class NSViewController, NSResponder, NSString, NSWindow;

@interface PXWindowPresenter : NSWindowController <PXPresentationEnvironment>

@property (retain, nonatomic) NSResponder *sender;
@property (readonly, nonatomic) NSWindow *alertWindow;
@property (readonly, nonatomic) NSViewController *presentingViewController;
@property (readonly, nonatomic) BOOL canPushViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presenterWithSender:(id)a0;
+ (id)presenterWithSender:(id)a0 tokenIdentifier:(id)a1;

- (void).cxx_destruct;
- (void)dismissAlert:(id)a0;
- (BOOL)pushViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)presentAlert:(id)a0 completionHandler:(id /* block */)a1;
- (id)createOrActivatePresentationEnvironment;
- (void)dismissAlertWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissAlertWithToken:(id)a0 withDelay:(double)a1 message:(id)a2 completionHandler:(id /* block */)a3;
- (void)dismissViewController:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)presentAlertWithConfigurationHandler:(id /* block */)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
