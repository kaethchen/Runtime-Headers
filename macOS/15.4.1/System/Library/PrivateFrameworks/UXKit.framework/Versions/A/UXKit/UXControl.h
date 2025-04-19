@interface UXControl : UXView

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL ignoresMultiClick;
@property (nonatomic) BOOL sendsActionOnMouseDown;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (BOOL)_locationInsideForEvent:(id)a0;

@end
