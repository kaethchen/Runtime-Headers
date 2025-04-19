@class NSFont, NSString, SearchUIButtonBackgroundView, SFImage, NUIContainerBoxView, SFButtonItemAppearance, NUIContainerStackView, SearchUICommandHandler, TLKLabel, SearchUIImageView;
@protocol SearchUIButtonItemViewDelegate;

@interface SearchUIButtonItemView : NSButton

@property (retain) NUIContainerBoxView *buttonContentBoxView;
@property (retain) SearchUIButtonBackgroundView *backgroundView;
@property (retain) TLKLabel *tlkTitleLabel;
@property (retain) SearchUIImageView *iconView;
@property (retain) SearchUIButtonBackgroundView *iconBackgroundView;
@property (retain) NUIContainerBoxView *iconBoxView;
@property (retain) SearchUICommandHandler *commandHandler;
@property (retain) NUIContainerStackView *imageViewAndLabelStackView;
@property (nonatomic) BOOL isHovered;
@property (retain, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) SFButtonItemAppearance *buttonAppearance;
@property (retain, nonatomic) SFImage *sfImage;
@property (weak, nonatomic) id<SearchUIButtonItemViewDelegate> delegate;
@property (retain, nonatomic) NSFont *iconFont;
@property (retain, nonatomic) NSFont *buttonFont;
@property (nonatomic) BOOL isCompact;
@property (nonatomic) BOOL allowsAnimation;
@property (readonly) BOOL drawsBackgroundPlatter;
@property (readonly) BOOL drawsIconBackgroundPlatter;
@property (readonly) BOOL shouldAvoidBackgroundView;
@property (readonly) BOOL drawsTitle;
@property (readonly) double cornerRadius;
@property (readonly) BOOL useContinuousCorners;
@property (readonly) double horizontalPadding;
@property (readonly) double verticalPaddingFontMultipler;
@property (readonly) NSFont *defaultIconFont;
@property (readonly) NSFont *defaultButtonFont;
@property (readonly) long long symbolScale;
@property (readonly) double spacingBetweenImageAndText;

+ (Class)cellClass;

- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)layout;
- (void)setHighlighted:(BOOL)a0;
- (id)accessibilityIdentifier;
- (void)cursorUpdate:(id)a0;
- (void)didCloseMenu:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)menuForEvent:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateTrackingAreas;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)willOpenMenu:(id)a0 withEvent:(id)a1;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (void)updateFonts;
- (id)createContentView;
- (void)tlk_updateForAppearance:(id)a0;
- (struct CGSize { double x0; double x1; })iconBackgroundViewSize;
- (BOOL)isHoverEffectSupported;
- (double)minimumIconPadding;
- (id)resolvedButtonFont;
- (id)resolvedIconFont;
- (void)setSfImage:(id)a0 animateTransition:(BOOL)a1;
- (void)updateProminences;
- (void)updateUnderlineState;
- (BOOL)useHierarchicalColorRendering;

@end
