@class NSString, CAShapeLayer, CALayer, CATextLayer;
@protocol AXVMenuItemDelegate;

@interface AXVStyledMenuItem : AXVProgressIndicatorView

@property (retain, nonatomic) CAShapeLayer *_backgroundLayer;
@property (retain, nonatomic) CAShapeLayer *_borderLayer;
@property (retain, nonatomic) CALayer *_imageLayer;
@property (retain, nonatomic) CATextLayer *_titleLayer;
@property (weak, nonatomic) id<AXVMenuItemDelegate> delegate;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *imageSymbolName;
@property (copy, nonatomic) NSString *title;

- (id)description;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_updateBackgroundLayerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateBorderLayerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateImageLayerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTextLayerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animateProgressForDuration:(double)a0;
- (void)cancelProgressAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayStyle:(long long)a1 quadrant:(long long)a2;

@end
