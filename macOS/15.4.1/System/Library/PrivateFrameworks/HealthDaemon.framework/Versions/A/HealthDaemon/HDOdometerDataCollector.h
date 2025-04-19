@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector {
    HKQuantityType *_distanceType;
}

- (void).cxx_destruct;
- (id)persistentIdentifier;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (id)collectedTypes;
- (Class)coreMotionDatumClass;
- (id)initWithProfile:(id)a0 collectedDistanceType:(id)a1;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (id)queue_newDataSource;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;

@end
