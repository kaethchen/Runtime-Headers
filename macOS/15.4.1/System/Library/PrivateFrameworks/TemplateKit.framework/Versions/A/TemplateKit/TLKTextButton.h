@class TLKImageView, NSTrackingArea, TLKRichText, TLKImage;

@interface TLKTextButton : TLKSButton

@property BOOL attributedTitleExplicitlySet;
@property (retain, nonatomic) TLKImageView *tlkImageView;
@property (nonatomic) BOOL inHoverState;
@property (retain) NSTrackingArea *hoverTrackingArea;
@property (nonatomic) unsigned long long prominence;
@property (copy, nonatomic) TLKRichText *richTitle;
@property (copy, nonatomic) TLKImage *tlkImage;
@property (nonatomic) BOOL alwaysShowPlaceholderView;
@property BOOL matchesHeightForAlignmentRectWithIntrinsicContentSize;
@property (nonatomic) BOOL shadowDisabled;

- (id)init;
- (void).cxx_destruct;
- (void)setAlignment:(long long)a0;
- (void)setAttributedTitle:(id)a0;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (void)layout;
- (BOOL)allowsVibrancy;
- (id)font;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setFont:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateTrackingAreas;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (struct CGSize { double x0; double x1; })maximumLayoutSize;
- (struct CGSize { double x0; double x1; })minimumLayoutSize;
- (void)setMaximumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMinimumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)hasTemplateUIImage;
- (BOOL)isImageMode;
- (void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;
- (void)tlk_updateForAppearance:(id)a0;
- (void)updateAttributedTitle;
- (void)updateImageViewAlignment;

@end
