@interface TSDMutableCurvedShadow : TSDCurvedShadow <TSDMutableShadow>

@property (nonatomic) double curve;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setOffset:(double)a0;
- (void)setColor:(id)a0;
- (void)setOpacity:(double)a0;
- (void)setAngle:(double)a0;
- (void)setRadius:(double)a0;
- (void)setCurve:(double)a0;

@end
