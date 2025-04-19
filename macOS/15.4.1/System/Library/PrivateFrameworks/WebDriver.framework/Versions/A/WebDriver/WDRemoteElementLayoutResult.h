@class WDRemoteElement;

@interface WDRemoteElementLayoutResult : NSObject

@property (copy, nonatomic) WDRemoteElement *element;
@property (nonatomic, getter=isObscured) BOOL obscured;
@property (nonatomic, getter=isPointerInteractable) BOOL pointerInteractable;
@property (nonatomic, getter=isKeyboardInteractable) BOOL keyboardInteractable;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) struct CGPoint { double x; double y; } inViewCenterPoint;
@property (nonatomic) long long coordinateSystem;

- (id)description;
- (void).cxx_destruct;

@end
