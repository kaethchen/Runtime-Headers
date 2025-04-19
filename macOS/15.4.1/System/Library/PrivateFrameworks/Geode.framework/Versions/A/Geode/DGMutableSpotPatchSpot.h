@interface DGMutableSpotPatchSpot : DGSpotPatchSpot <NSCopying, NSMutableCopying>

+ (id)spotWithCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 softness:(double)a2 opacity:(double)a3 detail:(double)a4 angle:(double)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setOpacity:(double)a0;
- (void)setAngle:(double)a0;
- (void)setRadius:(double)a0;
- (void)setSoftness:(double)a0;
- (void)setDetail:(double)a0;
- (void)setHasPatch:(BOOL)a0;
- (void)setPatchCenter:(struct CGPoint { double x0; double x1; })a0;

@end
