@interface SLSWindowManagerDragContext : NSObject

@property unsigned int windowID;
@property struct CGPoint { double x; double y; } mouseLocation;
@property struct CGPoint { double x; double y; } dragOffset;
@property unsigned long long timestamp;
@property struct CGPoint { double x; double y; } proposedWindowOrigin;
@property unsigned long long accessibilityState;
@property (readonly) struct CGPoint { double x0; double x1; } defaultWindowOrigin;

@end
