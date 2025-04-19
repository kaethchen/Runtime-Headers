@interface __NSCFBackgroundAVAggregateAssetDownloadTaskNoChildTask : __NSCFBackgroundAVAssetDownloadTask

- (BOOL)isKindOfClass:(Class)a0;
- (id)response;
- (id)originalRequest;
- (void)_onqueue_didFinishDownloadforMediaSelectionPropertyList:(id)a0;
- (void)_onqueue_didFinishDownloadingToURL:(id)a0;
- (void)_onqueue_didLoadTimeRange:(id)a0 totalTimeRangesLoaded:(id)a1 timeRangeExpectedToLoad:(id)a2 forMediaSelectionPropertyList:(id)a3;
- (void)_onqueue_didResolveMediaSelectionPropertyList:(id)a0;
- (void)_onqueue_willDownloadToURL:(id)a0;
- (id)currentRequest;

@end
