@class NSString, QLMediaUIValueTiming, QLAccessibilityUIElement;
@protocol QLMediaUIScrubberDelegate;

@interface QLMediaUIScrubber : QLMediaUIControl <QLAccessibilityUIElementDelegate> {
    double _minValue;
    double _maxValue;
    QLMediaUIValueTiming *_valueTiming;
}

@property (retain) QLAccessibilityUIElement *scrubberAXElement;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (nonatomic) double currentValue;
@property (copy) QLMediaUIValueTiming *valueTiming;
@property (weak, nonatomic) id<QLMediaUIScrubberDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)accessibilityActionDescription:(id)a0;
- (void)pageUp:(id)a0;
- (void)setNeedsDisplay;
- (id)exposedBindings;
- (void)moveUp:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildren;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)pageDown:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForUIElementInParentSpace:(id)a0;
- (id)_QLQTUIDrawingOptions;
- (BOOL)accessibilityPerformDecrement:(id)a0;
- (BOOL)accessibilityPerformIncrement:(id)a0;
- (id)accessibilityValueFor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForUIElement:(id)a0;
- (void)getKnobRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (double)lowerBoundForValue:(double)a0;
- (void)setAccessibilityValue:(id)a0 for:(id)a1;
- (double)upperBoundForValue:(double)a0;

@end
