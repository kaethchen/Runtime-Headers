@class HDWorkoutManager;

@interface HDCyclingDistanceDataAggregator : HDActiveQuantityDataAggregator {
    HDWorkoutManager *_workoutManager;
}

- (void).cxx_destruct;
- (id)additionalMetadataForCollector:(id)a0;
- (id)initWithDataCollectionManager:(id)a0;

@end
