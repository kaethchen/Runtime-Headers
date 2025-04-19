@class AKAuthorizationNavigationController, NSString, AKAppleIDAuthenticationInAppContext, AKPrivateEmailContext;
@protocol AKPrivateEmailViewControllerDelegate;

@interface AKPrivateEmailViewController : NSViewController <AKAuthorizationPaneDelegate, AKAuthorizationViewControllerDelegate> {
    AKAppleIDAuthenticationInAppContext *_authenticationContext;
}

@property (readonly, nonatomic) AKAuthorizationNavigationController *navigationController;
@property (nonatomic) BOOL resizePending;
@property (nonatomic) unsigned long long automaticResizeDisableCount;
@property (nonatomic) struct CGSize { double width; double height; } lastResize;
@property (retain, nonatomic) AKPrivateEmailContext *context;
@property (weak, nonatomic) id<AKPrivateEmailViewControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isAutomaticResizeDisabled) BOOL automaticResizeDisabled;
@property (nonatomic) double automaticResizeDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)_callCompletionWithPrivateEmail:(id)a0 error:(id)a1;
- (void)_doResize:(struct CGSize { double x0; double x1; })a0;
- (void)_runPrivateEmailFlow;
- (void)ak_windowDidResize:(struct CGSize { double x0; double x1; })a0;
- (void)beginAutomaticResizeDisabled;
- (void)endAutomaticResizeDisabled;
- (id)initWithPrivateEmailContext:(id)a0;

@end
