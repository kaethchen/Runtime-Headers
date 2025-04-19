@class NSViewController, NSString, NSVisualEffectView;
@protocol ASCredentialRequestPaneViewControllerDelegate;

@interface ASCredentialRequestContainerViewController : NSViewController <ASNavigationControllerDelegate>

@property (retain, nonatomic) NSVisualEffectView *blurBackgroundView;
@property (readonly, nonatomic) NSViewController *rootViewController;
@property (weak, nonatomic) id<ASCredentialRequestPaneViewControllerDelegate> paneDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)_clearPaneDelegateForViewController:(id)a0;
- (void)_setPaneDelegate:(id)a0 forViewController:(id)a1;
- (void)_setPaneDelegateForTopViewController;
- (void)_setPaneDelegateForViewController:(id)a0;

@end
