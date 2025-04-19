@class RPBroadcastActivityHostRemoteNSViewController, NSMutableDictionary, NSView, RPRemoteViewContainerWindow, RPRemoteWindowController;
@protocol RPBroadcastActivityViewControllerDelegate;

@interface RPBroadcastActivityViewController : NSViewController <RPBroadcastActivityHostRemoteNSViewControllerDelegate>

@property (retain, nonatomic) NSMutableDictionary *hostInfo;
@property (nonatomic) NSView *view;
@property (retain, nonatomic) RPBroadcastActivityHostRemoteNSViewController *hostViewController;
@property (retain, nonatomic) RPRemoteWindowController *controller;
@property (retain, nonatomic) RPRemoteViewContainerWindow *remoteWindow;
@property double pickerSourceX;
@property double pickerSourcey;
@property (weak, nonatomic) id<RPBroadcastActivityViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ didFinishHandler;

+ (void)loadBroacastActivityViewControllerWithPreferredExtension:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 fromWindow:(id)a2 withHandler:(id /* block */)a3;
+ (void)loadBroadcastActivityViewControllerWithHandler:(id /* block */)a0;
+ (void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)a0 handler:(id /* block */)a1;
+ (void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)a0 handler:(id /* block */)a1 broadcastActivitiesNotInstalledAlertTitle:(id)a2 broadcastActivitiesNotInstalledAlertMessage:(id)a3 atPoint:(struct CGPoint { double x0; double x1; })a4 fromWindow:(id)a5;
+ (void)setUpBroadcastActivityViewController:(id)a0 sourceWindow:(id)a1 hostInfo:(id)a2 pickerSourceX:(double)a3 pickerSourceY:(double)a4 completion:(id /* block */)a5;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })CGRectCenteredInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)extensionDidFinishWithLaunchURL:(id)a0 broadcastURL:(id)a1 extensionBundleID:(id)a2 cancelled:(BOOL)a3;
- (void)presentBroadcastActivitySheet;

@end
