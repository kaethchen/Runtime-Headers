@class TLKStackView, TLKTextView, NSBezierPath, NSView, TLKImage, NUIContainerBoxView, TLKMultilineText, TLKImageView, TLKLabel, NSString, TLKTextButton;
@protocol TLKDescriptionViewDelegate;

@interface TLKDescriptionView : TLKView <NUIContainerViewDelegate>

@property (retain, nonatomic) TLKStackView *stackView;
@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) TLKTextView *detailsTextView;
@property (retain, nonatomic) TLKTextButton *moreButton;
@property (retain, nonatomic) TLKImageView *imageView;
@property (retain, nonatomic) NUIContainerBoxView *imageAndDescriptionBoxView;
@property (retain, nonatomic) NSBezierPath *imageViewExclusionPath;
@property (retain, nonatomic) NSBezierPath *moreButtonExclusionPath;
@property (retain, nonatomic) TLKTextButton *footnoteButton;
@property (retain, nonatomic) TLKTextButton *trailingFootnoteButton;
@property (retain, nonatomic) TLKStackView *footnoteButtonStackView;
@property (retain, nonatomic) NSView *footnoteButtonStackDummyView;
@property (retain, nonatomic) TLKImage *image;
@property (retain, nonatomic) TLKMultilineText *text;
@property (retain, nonatomic) TLKMultilineText *title;
@property (retain, nonatomic) NSString *footnoteButtonText;
@property (retain, nonatomic) NSString *trailingFootnoteButtonText;
@property (retain, nonatomic) NSString *moreButtonText;
@property (weak) id<TLKDescriptionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (long long)numberOfLines;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (id)viewForFirstBaselineLayout;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })defaultBaselineRelativeLayoutMargins;
- (id)detailTextViewText;
- (id)exclusionPathsForTextView;
- (void)footnoteButtonPressed;
- (id)imageExclusionPath;
- (BOOL)moreButtonIsHidden;
- (void)moreButtonPressed;
- (void)observedPropertiesChanged;
- (void)setExclusionPathInContainer:(id)a0 includeMoreButton:(BOOL)a1;
- (id)setupContentView;
- (BOOL)shouldHideMoreButtonForTextView:(id)a0;
- (void)simulateMoreButtonPress;
- (struct CGSize { double x0; double x1; })textSizeForTextView:(id)a0 width:(double)a1 lineCount:(unsigned long long)a2;
- (void)tlk_updateForAppearance:(id)a0;
- (void)trailingFootnoteButtonPressed:(id)a0;

@end
