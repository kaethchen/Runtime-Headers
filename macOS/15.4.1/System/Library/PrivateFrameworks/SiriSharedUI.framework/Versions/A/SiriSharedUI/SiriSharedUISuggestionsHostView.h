@class NSArray, NSView, SiriSharedUIAnimationContext, SiriSharedUIViewStackConstraints;
@protocol SiriSharedUIStackableContentDelegate;

@interface SiriSharedUISuggestionsHostView : NSView <SiriSharedUIStackableContent, SiriSharedUIStackableContentActionOffering>

@property (retain, nonatomic) NSView *suggestionsView;
@property (weak, nonatomic) id<SiriSharedUIStackableContentDelegate> stackContainerDelegate;
@property (nonatomic) long long attachmentType;
@property (nonatomic) double attachmentYOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } portraitContentSize;
@property (retain, nonatomic) SiriSharedUIViewStackConstraints *stackConstraints;
@property (nonatomic) BOOL useLowerPriorityHeightConstraint;
@property (retain, nonatomic) NSArray *customAttachmentConstraints;
@property (retain, nonatomic) SiriSharedUIAnimationContext *animationContextForFrameAndLayoutUpdate;

- (void).cxx_destruct;
- (void)_configureConstraints;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (id)preferredAccessibilityElementToFocus;
- (id)initWithSuggestionsView:(id)a0;

@end
