@interface VFXBoundingBox : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ min;
@property (nonatomic) void /* unknown type, empty encoding */ max;

- (id)description;
- (id)maxValue;
- (id)minValue;
- (void)setMaxValue:(id)a0;
- (void)setMinValue:(id)a0;

@end
