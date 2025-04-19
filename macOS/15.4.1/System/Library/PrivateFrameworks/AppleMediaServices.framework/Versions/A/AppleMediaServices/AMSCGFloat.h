@interface AMSCGFloat : NSObject

@property (readonly) double value;

+ (id)cgFloatWithCGFloat:(double)a0;

- (BOOL)isEqual:(id)a0;
- (id)initWithCGFloat:(double)a0;
- (BOOL)isEqualToCGFloat:(id)a0;

@end
