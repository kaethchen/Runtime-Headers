@class SpringAnimationEvaluator, CompletionWindow, NSView, NSString, NSArray, NSLayoutConstraint, NSWindow;
@protocol CompletionUIPresentationControllerDelegate;

@interface CompletionUIPresentationController : NSObject <NSAnimationDelegate> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRectInParentWindowCoordinates;
    NSArray *_insetConstraints;
    NSLayoutConstraint *_contentWidthConstraint;
    NSLayoutConstraint *_contentHeightConstraint;
    SpringAnimationEvaluator *_presentationSpringAnimationEvaluator;
    BOOL _includeTopContentInset;
    BOOL _includeBottomContentInset;
}

@property (weak, nonatomic) id<CompletionUIPresentationControllerDelegate> delegate;
@property (readonly, nonatomic) CompletionWindow *completionWindow;
@property (retain, nonatomic) NSView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL presentsCentered;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceRectInScreenCoordinates;
@property (readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (readonly, nonatomic) NSWindow *parentWindow;
@property (readonly, nonatomic, getter=isShowingCompletionUI) BOOL showingCompletionUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateConstraints;
- (void)_updateContentSizeConstraints;
- (id)initWithParentWindow:(id)a0;
- (void)_createCompletionWindowIfNeeded;
- (struct CGPoint { double x0; double x1; })_completionWindowOrigin;
- (struct CGPoint { double x0; double x1; })_completionWindowOriginForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_ensureFinalAnimationState;
- (void)_parentWindowWillMove:(id)a0;
- (void)_resetConstraintsWithContentView:(id)a0;
- (void)_setContentViewWithoutAnimation:(id)a0 contentSize:(struct CGSize { double x0; double x1; })a1 includeTopContentInset:(BOOL)a2 includeBottomContentInset:(BOOL)a3;
- (void)_startContentViewFadeInAnimation;
- (void)_startPresentationAnimation;
- (void)_startWindowResizeAnimationWithContentSize:(struct CGSize { double x0; double x1; })a0 includeTopContentInset:(BOOL)a1 includeBottomContentInset:(BOOL)a2;
- (void)_updateCompletionWindowAppearanceForAnimationProgress:(double)a0;
- (void)_updateCompletionWindowAppearanceForAnimationProgress:(double)a0 shouldStop:(BOOL *)a1;
- (void)_updateCompletionWindowOrigin;
- (void)_updateInsetConstraints;
- (void)_updateWindowSizeAndPositionDuringAnimation;
- (void)dismissCompletionUI;
- (void)presentCompletionUIRelativeToRectInScreenCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0 animate:(BOOL)a1;
- (void)setContentView:(id)a0 contentSize:(struct CGSize { double x0; double x1; })a1 includeTopContentInset:(BOOL)a2 includeBottomContentInset:(BOOL)a3 animated:(BOOL)a4;
- (void)setContentView:(id)a0 includeTopContentInset:(BOOL)a1 includeBottomContentInset:(BOOL)a2;

@end
