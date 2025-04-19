@interface PLBackgroundJobEditRenderingVideoWorker : PLBackgroundJobEditRenderingWorker

+ (BOOL)shouldUseExpectedDurationCriteria;

- (id)_predicateToFetchDeferredAdjustmentNeededAssets;

@end
