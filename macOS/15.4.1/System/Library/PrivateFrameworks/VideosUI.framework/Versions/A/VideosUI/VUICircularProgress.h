@class VUIImageView, VUIActivityIndicatorView, CAShapeLayer, NSImage, NSColor;

@interface VUICircularProgress : VUIBaseView

@property (retain, nonatomic) CAShapeLayer *indeterminateLayer;
@property (retain, nonatomic) CAShapeLayer *centerLayer;
@property (retain, nonatomic) VUIImageView *centerImageView;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) CAShapeLayer *progressBackgroundLayer;
@property (retain, nonatomic) VUIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) double indeterminateWidth;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (nonatomic) unsigned long long indeterminateType;
@property (retain, nonatomic) NSColor *progressFillColor;
@property (retain, nonatomic) NSColor *progressBgColor;
@property (nonatomic) BOOL progressBgHidden;
@property (nonatomic) double progressWidth;
@property (nonatomic) double progress;
@property (nonatomic) double centerSquareWidth;
@property (nonatomic) double centerSquareCornerRadius;
@property (retain, nonatomic) NSImage *centerImage;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)_updateColors;
- (void)_startIndeterminateAnimation;
- (void)tintColorDidChange;
- (void)_addActivityIndicatorView;
- (void)_addIndeterminateLayer;
- (void)_addProgressLayer;
- (void)_configureProgress:(BOOL)a0;
- (id)_indeterminatePath;
- (id)_progressPath;
- (void)_removeActivityIndicatorView;
- (void)_removeIndeterminateLayer;
- (void)_removeProgressLayer;
- (void)_startActivityIndicatorViewAnimation;
- (void)vui_didMoveToWindow;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
