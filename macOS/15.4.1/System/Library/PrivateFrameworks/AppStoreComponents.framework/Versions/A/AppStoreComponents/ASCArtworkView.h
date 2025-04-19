@class ASCScreenshotDisplayConfiguration, NSString, NSImage, NSColor, ASCUIView, ASCUIImageView, ASCBorderView;

@interface ASCArtworkView : ASCUIView

@property (readonly, nonatomic) ASCUIImageView *imageView;
@property (readonly, nonatomic) ASCBorderView *borderView;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (retain, nonatomic) NSString *decoration;
@property (copy, nonatomic) ASCScreenshotDisplayConfiguration *screenshotDisplayConfiguration;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSColor *placeholderColor;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) ASCUIView *overlayView;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (id)cornerCurveForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)cornerMaskForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)cornerRadiusForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDataChanged;

@end
