@class HKQuantityType;

@interface HDPassiveQuantityDataAggregator : HDPassiveDataAggregator

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;

- (void).cxx_destruct;
- (id)objectType;
- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;
- (id)initForQuantityType:(id)a0 dataCollectionManager:(id)a1;
- (Class)sensorDatumClass;

@end
