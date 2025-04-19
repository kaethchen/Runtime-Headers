@class NSTextField, NSClickGestureRecognizer, CADisplayLink, NSTrackingArea, ICAttributedStringRippler, NSColor, NSDictionary, NSString, NSImage, ICSearchResultRegexMatchFinder, ICInlineTextAttachment;
@protocol ICInlineAttachmentViewAnimationDelegate;

@interface ICInlineAttachmentView : NSView <NSGestureRecognizerDelegate, ICAttachmentViewInitializing>

@property (retain, nonatomic) NSTextField *textField;
@property (retain, nonatomic) CADisplayLink *rippleAnimationDisplayLink;
@property (retain, nonatomic) ICAttributedStringRippler *rippler;
@property (readonly, nonatomic) NSColor *searchHighlightColor;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (readonly, nonatomic) NSClickGestureRecognizer *clickGestureRecognizer;
@property (weak, nonatomic) ICInlineTextAttachment *textAttachment;
@property (nonatomic) double textContainerWidth;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) BOOL isLinkAttachmentView;
@property (readonly, nonatomic) BOOL isCalculateResultAttachmentView;
@property (copy, nonatomic) NSDictionary *surroundingAttributes;
@property (readonly, nonatomic) double baselineOffsetFromBottom;
@property (readonly, nonatomic) NSImage *imageForPrinting;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;
@property (weak, nonatomic) id<ICInlineAttachmentViewAnimationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (void)cursorUpdate:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateTrackingAreas;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)updateLabel;
- (void)updateHighlightsWithAttributes:(id)a0;
- (void)animateInsertionIfNecessary;
- (void)attachmentDataChanged:(id)a0;
- (void)beginRippleAnimation;
- (void)didClick:(id)a0;
- (void)endRippleAnimation;
- (id)imageForTextPreviewInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithTextAttachment:(id)a0 textContainer:(id)a1 forManualRendering:(BOOL)a2;
- (void)updateRippleAnimation;
- (void)updateStyleWithAttributes:(id)a0;

@end
