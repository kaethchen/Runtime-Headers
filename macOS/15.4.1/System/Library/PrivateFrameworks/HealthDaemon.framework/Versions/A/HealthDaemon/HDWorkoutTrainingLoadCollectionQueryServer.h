@class _HKWorkoutTrainingLoadCollectionQueryServerConfiguration;

@interface HDWorkoutTrainingLoadCollectionQueryServer : HDQueryServer

@property (readonly, copy, nonatomic) _HKWorkoutTrainingLoadCollectionQueryServerConfiguration *trainingLoadCollectionQueryServerConfiguration;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void).cxx_destruct;
- (id)_queue_fetchTrainingLoadCollectionWithError:(id *)a0;
- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;

@end
