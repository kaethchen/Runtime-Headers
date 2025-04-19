@interface DFRAccessibilityRemoteUIElement : NSObject

@property (class) BOOL enableNotifications;

@property (readonly) id accessibilityElement;
@property (readonly) long long uniqueIdentifier;
@property (readonly) int processIdentifier;
@property (readonly) long long placement;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

+ (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
+ (id)copyElements;
+ (id)elementWithBuffer:(const void **)a0 size:(unsigned long long *)a1;

- (void).cxx_destruct;

@end
