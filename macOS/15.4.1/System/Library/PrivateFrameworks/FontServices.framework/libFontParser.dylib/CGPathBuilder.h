@interface CGPathBuilder : NSObject {
    struct CGPath { } *path;
}

@property BOOL overlaps;

- (void)dealloc;
- (id)init;
- (struct CGPath { } *)copyPath;
- (void)endPath;
- (void)moveTo:(struct CGPoint { double x0; double x1; })a0;
- (void)cubicCurveTo:(struct CGPoint { double x0; double x1; })a0 control1:(struct CGPoint { double x0; double x1; })a1 control2:(struct CGPoint { double x0; double x1; })a2;
- (void)lineTo:(struct CGPoint { double x0; double x1; })a0;
- (void)quadCurveTo:(struct CGPoint { double x0; double x1; })a0 control:(struct CGPoint { double x0; double x1; })a1;

@end
