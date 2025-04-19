@interface QLMediaUIControl : NSView {
    id _target;
    SEL _action;
    unsigned char _enabled : 1;
    unsigned char _highlighted : 1;
    unsigned char _tracking : 1;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;
@property (nonatomic, getter=isTracking) BOOL tracking;

+ (void)initialize;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;

@end
