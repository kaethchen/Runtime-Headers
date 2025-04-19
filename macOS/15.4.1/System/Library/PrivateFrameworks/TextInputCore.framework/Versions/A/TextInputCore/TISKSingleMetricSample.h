@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *samples;

+ (id)makeMetric;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)size;
- (void)addSample:(id)a0;
- (void)merge:(id)a0;
- (double)variance;
- (double)average;
- (double)sum;
- (id)generateDataForSR:(id)a0 dropSampleSize:(BOOL)a1;

@end
