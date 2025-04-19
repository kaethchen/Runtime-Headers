@interface ICCloudThrottlingLevel : NSObject

@property (readonly, nonatomic) double batchInterval;
@property (readonly, nonatomic) double maximumBatchIntervalFactor;
@property (readonly, nonatomic) unsigned long long numberOfBatches;

- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithBatchInterval:(double)a0 maximumBatchIntervalFactor:(double)a1 numberOfBatches:(unsigned long long)a2;

@end
