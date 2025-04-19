@interface PLBackgroundJobSyndicationResourceDownloadWorker : PLBackgroundJobSyndicationResourceSanitizationWorker

+ (id)syndicationWorkerCriteria;

- (unsigned long long)batchSize;
- (BOOL)isNetworkAccessAllowed;
- (id)resourceIDsForPrefetchWithLibrary:(id)a0;

@end
