@class NSTextField, NSArray, NSView, NSStackView, NSButton;
@protocol ScribbleUnifiedFieldOverlayControllerDelegate;

@interface ScribbleUnifiedFieldOverlayController : NSViewController {
    NSView *_animationClipView;
    NSArray *_animationClipViewConstraints;
    NSView *_backgroundView;
    NSStackView *_contentStackView;
    NSTextField *_statusLabel;
    NSButton *_cancelButton;
    NSButton *_doneButton;
    NSView *_unifiedFieldContainerView;
    unsigned long long _hiddenElementCount;
}

@property (weak, nonatomic) id<ScribbleUnifiedFieldOverlayControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_animateViews:(id)a0 alphaFrom:(double)a1 to:(double)a2 duration:(double)a3 staggedOverTime:(double)a4;
- (void)_didClickCancel:(id)a0;
- (void)_didClickDone:(id)a0;
- (void)addToUnifiedFieldContainerView:(id)a0 animated:(BOOL)a1;
- (void)removeFromSuperviewAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateViewForHiddenElementCount:(unsigned long long)a0;

@end
