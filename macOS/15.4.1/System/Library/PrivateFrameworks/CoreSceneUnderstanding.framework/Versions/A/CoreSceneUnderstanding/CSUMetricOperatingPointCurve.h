@class NSData;

@interface CSUMetricOperatingPointCurve : NSObject {
    NSData *_operatingPoints;
    int _metricPattern;
    unsigned long long _nanCount;
}

@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (void)enumerateUsingBlock:(id /* block */)a0;
- (id)initWithOperatingPointsData:(id)a0 metricPattern:(int)a1 error:(id *)a2;

@end
