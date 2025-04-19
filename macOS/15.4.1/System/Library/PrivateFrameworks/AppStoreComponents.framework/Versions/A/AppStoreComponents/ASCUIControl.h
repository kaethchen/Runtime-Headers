@class NSSet, NSMutableArray;

@interface ASCUIControl : ASCUIView

@property (nonatomic, getter=isTracking) BOOL tracking;
@property (nonatomic, getter=isTouchInside) BOOL touchInside;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } trackingBounds;
@property (readonly, nonatomic) NSMutableArray *targetActions;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) NSSet *allTargets;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (void)removeTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (id)actionsForTarget:(id)a0 forControlEvent:(unsigned long long)a1;
- (void)sendAction:(SEL)a0 to:(id)a1 forEvent:(id)a2;
- (void)sendActionsForControlEvents:(unsigned long long)a0;

@end
