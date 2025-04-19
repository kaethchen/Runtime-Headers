@interface FI_TAirDropProgressLayer : FI_TLayer

@property double endAngle;
@property (nonatomic) double percentComplete;
@property (nonatomic) BOOL indeterminate;

+ (BOOL)needsDisplayForKey:(id)a0;

- (id)init;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithLayer:(id)a0;
- (void)drawProgressRing:(double)a0;
- (void)setEndAngleAnimated:(double)a0;

@end
