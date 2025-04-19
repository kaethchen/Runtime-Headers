@interface PAKeyFrame : NSObject

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clip;

- (id)debugDescription;

@end
