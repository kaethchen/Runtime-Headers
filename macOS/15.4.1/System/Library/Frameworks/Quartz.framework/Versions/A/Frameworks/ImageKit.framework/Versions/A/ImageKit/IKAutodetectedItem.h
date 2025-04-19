@interface IKAutodetectedItem : NSObject {
    struct CGPath { } *_path;
}

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly) struct CGPoint { double x; double y; } position;
@property (readonly) struct CGPoint { double x; double y; } anchor;
@property (readonly) double rotationAngle;
@property (readonly) struct CGPoint { double x; double y; } bottomLeft;
@property (readonly) struct CGPoint { double x; double y; } bottomRight;
@property (readonly) struct CGPoint { double x; double y; } topLeft;
@property (readonly) struct CGPoint { double x; double y; } topRight;

- (void)dealloc;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithScanArea:(id)a0;
- (void)setupWithScanArea:(id)a0;

@end
