@class CAFilter, CAShapeLayer;

@interface PKPaymentButton : NSButton {
    CAShapeLayer *_layer;
    CAFilter *_highlightFilter;
    BOOL _highlighted;
}

@property (nonatomic) long long type;
@property (nonatomic) long long style;
@property (nonatomic) double cornerRadius;

+ (Class)layerClass;
+ (id)buttonWithType:(long long)a0 style:(long long)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)clipsToBounds;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)_createHighlightFilterIfNecessary;
- (id)initWithPaymentButtonType:(long long)a0 paymentButtonStyle:(long long)a1;
- (long long)_effectiveButtonStyle;
- (void)applyAccessibilityValues;

@end
