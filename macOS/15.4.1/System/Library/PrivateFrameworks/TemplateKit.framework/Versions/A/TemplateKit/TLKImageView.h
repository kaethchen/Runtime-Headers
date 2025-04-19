@class NSImageView, NSView, TLKProminenceView, TLKImage, NSFont, NSColor;
@protocol TLKImageViewDelegate;

@interface TLKImageView : TLKView

@property (retain, nonatomic) NSView *shadowContainer;
@property (retain, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) TLKProminenceView *placeholderView;
@property (retain, nonatomic) TLKImage *lastTlkImage;
@property (retain, nonatomic) TLKImageView *badgeImageView;
@property (nonatomic) double lastBaselineOffset;
@property (nonatomic) BOOL animateNextImageTransition;
@property (retain, nonatomic) TLKImage *tlkImage;
@property (nonatomic) unsigned long long prominence;
@property (nonatomic) BOOL useButtonColoring;
@property (retain, nonatomic) NSColor *overrideColor;
@property (nonatomic) unsigned long long placeholderVisibility;
@property (retain, nonatomic) NSFont *symbolFont;
@property (nonatomic) long long symbolScale;
@property (nonatomic) double symbolWeight;
@property (weak, nonatomic) id<TLKImageViewDelegate> delegate;
@property (nonatomic) BOOL disableCornerRounding;
@property (nonatomic) unsigned long long alignment;
@property (nonatomic) BOOL shadowDisabled;
@property (nonatomic) BOOL ignoreImageAlignmentRectInsets;

+ (BOOL)imageIsProbablyOpaque:(id)a0 tlkImage:(id)a1;
+ (BOOL)checkTransparencyForImageAtCorners:(struct CGImage { } *)a0 shouldCropToCircle:(BOOL)a1;
+ (unsigned long long)defaultCornerMask;
+ (BOOL)hasTransparencyAtPoint:(struct CGPoint { double x0; double x1; })a0 forCGImage:(struct CGImage { } *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (void)_setBackgroundStyleForSubtree:(long long)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateSizeAndLayout;
- (void)viewDidChangeBackingProperties;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)updateShadow;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })effectiveAlignmentRectInsets;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (BOOL)alignmentIsAspectFill;
- (void)animateTransitionToImage:(id)a0;
- (void)applyCornerRoundingStyle:(unsigned long long)a0 toView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })aspectRatioPreservedFrameForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })constrainedSizeForImageSize:(struct CGSize { double x0; double x1; })a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
- (double)cornerRadiusForSize:(struct CGSize { double x0; double x1; })a0 roundingStyle:(unsigned long long)a1;
- (void)invalidateIntrinsicContentSizeIfNecessary;
- (struct CGSize { double x0; double x1; })naturalSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)observedPropertiesChanged;
- (double)sizeScale;
- (void)tlk_updateForAppearance:(id)a0;
- (void)updateSymbolConfiguration;
- (void)updateWithUIImage:(id)a0 animateFadeIn:(BOOL)a1 appearance:(id)a2 isTemplate:(BOOL)a3;

@end
