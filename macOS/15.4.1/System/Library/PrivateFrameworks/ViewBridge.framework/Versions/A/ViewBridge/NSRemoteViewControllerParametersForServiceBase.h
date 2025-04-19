@interface NSRemoteViewControllerParametersForServiceBase : NSObject

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewFrameInScreenCoords;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property BOOL declineNonKeyboardEvents;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
