@class NSView, NSTimer, NSAttributedString, VUIVisualEffectView, VUIRentalExpirationLabel, NSOperationQueue, NSArray, NSColor, NSImage, NSOperation;
@protocol VUITextBadgeViewDelegate;

@interface VUITextBadgeView : VUIBaseView

@property (nonatomic) struct CGSize { double width; double height; } glyphSize;
@property (retain, nonatomic) NSTimer *expiryUpdateTimer;
@property (retain, nonatomic) NSOperation *pendingOperation;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL backgroundImageForMaterialRenderingHasChanged;
@property (retain, nonatomic) VUIVisualEffectView *materialBackgroundView;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic) double strokeSize;
@property (retain, nonatomic) NSImage *backgroundImage;
@property (retain, nonatomic) NSView *imageView;
@property (retain, nonatomic) NSView *label;
@property (retain, nonatomic) VUIRentalExpirationLabel *rentalExpirationLabel;
@property (weak, nonatomic) id<VUITextBadgeViewDelegate> delegate;
@property (retain, nonatomic) NSImage *backgroundImageForMaterialRendering;
@property (nonatomic) unsigned long long badgeKind;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double minHeight;
@property (retain, nonatomic) NSArray *gradientBgColors;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (nonatomic) BOOL isUppercased;
@property (nonatomic) int blendMode;
@property (retain, nonatomic) NSColor *tintColor;
@property (nonatomic) double layerCornerRadius;

+ (BOOL)_viewBackgroundImageNeedsUpdatingWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 currentBackgroundImage:(id)a1;
+ (id)badgeWithLayout:(id)a0 existing:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_invalidateTimer;
- (id)accessibilityLabel;
- (id)accessibilityTitle;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_textSize;
- (void)_cancelPendingOperation;
- (void)_configureWithLayout:(id)a0;
- (void)_imageLoaded;
- (void)_redrawTextBadgeWithDuration:(double)a0;
- (void)_redrawView:(id)a0 withDuration:(double)a1;
- (BOOL)_textBadgeBackgroundImageNeedsUpdating;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
