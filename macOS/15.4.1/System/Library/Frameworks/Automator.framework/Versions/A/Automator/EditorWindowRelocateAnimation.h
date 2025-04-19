@interface EditorWindowRelocateAnimation : NSAnimation

@property struct CGPoint { double x; double y; } startPoint;
@property struct CGPoint { double x; double y; } endPoint;

- (id)init;
- (void)setCurrentProgress:(float)a0;

@end
