@class NSMutableArray, NSArray, NSView, SiriSharedUIAnimationContext, SiriSharedUINotificationCenterPlatterView, SiriSharedUIViewStackConstraints;
@protocol SiriSharedUICompactAdditionalContentViewDelegate, SiriSharedUIStackableContentDelegate;

@interface SiriSharedUICompactAdditionalContentView : SiriSharedUIStandardView <SiriSharedUICompactAdditionalContentViewHosting> {
    long long _platterCategory;
    SiriSharedUINotificationCenterPlatterView *_platterView;
    NSView *_containerView;
    BOOL _requestedAppearanceAnimation;
    BOOL _runningAnimatedFadeOut;
    BOOL _runningPrepareForUpdates;
    NSMutableArray *_prepareForUpdatesPendingCompletionBlocks;
}

@property (retain, nonatomic) NSView *snippetContainerView;
@property (weak, nonatomic) id<SiriSharedUICompactAdditionalContentViewDelegate> delegate;
@property (copy, nonatomic) NSArray *snippetViews;
@property (nonatomic) BOOL isInAmbient;
@property (weak, nonatomic) id<SiriSharedUIStackableContentDelegate> stackContainerDelegate;
@property (nonatomic) long long attachmentType;
@property (nonatomic) double attachmentYOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } portraitContentSize;
@property (retain, nonatomic) SiriSharedUIViewStackConstraints *stackConstraints;
@property (nonatomic) BOOL useLowerPriorityHeightConstraint;
@property (retain, nonatomic) NSArray *customAttachmentConstraints;
@property (retain, nonatomic) SiriSharedUIAnimationContext *animationContextForFrameAndLayoutUpdate;

- (void).cxx_destruct;
- (void)layout;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupSubviews;
- (id)hostingView;
- (void)animateAppearanceIfNeeded;
- (id)preferredAccessibilityElementToFocus;
- (void)snippetContentDidUpdate;
- (BOOL)layerHasOpacity;
- (id)_conversationDisappearAnimation;
- (void)updateContentSizeWithAnimation:(BOOL)a0;
- (void)_adjustCornerRadiusForSnippetView:(id)a0;
- (long long)_animatedPresentationType;
- (id)_conversationAppearAnimation;
- (struct CGSize { double x0; double x1; })_fittingSize;
- (struct CGSize { double x0; double x1; })_sizeThatFits:(struct CGSize { double x0; double x1; })a0 forSnippet:(id)a1;
- (struct CGSize { double x0; double x1; })_sizeThatFitsAllSnippets:(struct CGSize { double x0; double x1; })a0;
- (void)animateFadeOutWithCompletion:(id /* block */)a0;
- (void)didCompleteAnimatedFadeOut;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 platterCategory:(long long)a1;
- (id)prepareForUpdatesPendingCompletionBlocks;
- (void)prepareForUpdatesToSnippetViews:(BOOL)a0;
- (void)relayout;

@end
