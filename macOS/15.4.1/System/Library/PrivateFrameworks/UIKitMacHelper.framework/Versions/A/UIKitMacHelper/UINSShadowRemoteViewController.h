@class UIWindow, NSString, UINSWindowProxy, UINSShadowRemoteViewControllerDebugView, UIView, UIViewController;

@interface UINSShadowRemoteViewController : NSRemoteViewController <UINSShadowRemoteViewController> {
    UIViewController *_trackedViewController;
    UIView *_trackedView;
    UIWindow *_trackedUIWindow;
    UINSWindowProxy *_hostWindowProxy;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastSetViewFrame;
    UINSShadowRemoteViewControllerDebugView *_debugView;
}

@property (nonatomic) BOOL showsDebugOverlay;
@property (weak, nonatomic) UIViewController *trackedViewController;
@property (weak, nonatomic) UIView *trackedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)remoteViewShouldHaveAccessibilityChildren:(id)a0;
+ (void)divertFirstResponderToApplicableShadowRemoteViewIfNecessary;

- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (BOOL)shouldLayerBackRemoteView:(id)a0;
- (void)startTrackingView;
- (void)updateTrackedViewPosition:(id)a0;

@end
