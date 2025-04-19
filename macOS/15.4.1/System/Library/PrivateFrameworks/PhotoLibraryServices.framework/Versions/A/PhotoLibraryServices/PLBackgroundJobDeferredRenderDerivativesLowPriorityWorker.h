@interface PLBackgroundJobDeferredRenderDerivativesLowPriorityWorker : PLBackgroundJobDeferredRenderDerivativesBaseWorker

+ (id)_criteriaToUse;

- (id)taskIdentifier;
- (id)_predicateToFetchDeferredAssets;
- (id)deferredProcessingStatesHandled;

@end
