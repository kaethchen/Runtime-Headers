@class NSArray;
@protocol UXToolbarDelegate;

@interface UXToolbar : UXBar

@property (weak, nonatomic) id<UXToolbarDelegate> delegate;
@property (copy, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (void)otherMouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (id)nextResponder;
- (void)otherMouseDragged:(id)a0;
- (void)otherMouseUp:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (long long)barPosition;
- (void)setItems:(id)a0 animated:(BOOL)a1;
- (void)_beginInteractiveTransitionForItems:(id)a0;
- (void)_setItems:(id)a0 animated:(BOOL)a1 duration:(double)a2;

@end
