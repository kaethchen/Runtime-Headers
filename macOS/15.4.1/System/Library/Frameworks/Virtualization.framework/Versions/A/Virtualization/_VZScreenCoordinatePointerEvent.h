@interface _VZScreenCoordinatePointerEvent : NSObject

@property (readonly) struct CGPoint { double x; double y; } location;
@property (readonly) long long pressedButtons;

- (id)initWithEvent:(id)a0 view:(id)a1;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0 pressedButtons:(long long)a1;

@end
