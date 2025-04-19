@interface CNTimestamped : NSObject

@property (readonly) id value;
@property (readonly) double timestamp;

+ (id)timestampedWithValue:(id)a0 timestamp:(double)a1;
+ (id /* block */)wrapTransformWithScheduler:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 timestamp:(double)a1;

@end
