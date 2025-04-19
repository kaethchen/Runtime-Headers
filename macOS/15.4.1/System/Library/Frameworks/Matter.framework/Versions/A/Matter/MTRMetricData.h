@class NSNumber;

@interface MTRMetricData : NSObject {
    struct duration<unsigned long long, std::ratio<1, 1000000>> { unsigned long long __rep_; } _timePoint;
    int _type;
}

@property (readonly, copy, nonatomic) NSNumber *value;
@property (readonly, copy, nonatomic) NSNumber *errorCode;
@property (readonly, copy, nonatomic) NSNumber *duration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMetricEvent:(const struct MetricEvent { int x0; char *x1; struct Value { union Store { int x0; unsigned int x1; } x0; unsigned char x1; } x2; } *)a0;
- (void)setDurationFromMetricData:(id)a0;

@end
