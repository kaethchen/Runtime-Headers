@interface NSFloatRange : NSObject

@property (readonly, nonatomic) double location;
@property (readonly, nonatomic) double length;

+ (id)rangeWithLocation:(double)a0 length:(double)a1;

- (id)CA_interpolateValue:(id)a0 byFraction:(float)a1;
- (id)CA_addValue:(id)a0 multipliedBy:(int)a1;
- (double)CA_distanceToValue:(id)a0;
- (id)initWithLocation:(double)a0 length:(double)a1;

@end
