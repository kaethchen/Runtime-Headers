@interface PLBackgroundJobLowPriorityBatterySearchIndexingWorker : PLBackgroundJobSearchIndexingWorker

+ (id)_criteriaToUse;

- (short)_jobType;
- (BOOL)_supportsIndexRebuild;

@end
