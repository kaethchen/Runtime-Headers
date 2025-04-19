@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
    int _countOfDeferredPhotosProcessed;
}

+ (BOOL)allowWorkerToRunDuringCPLInitialSync;
+ (BOOL)avoidCheckingOtherWorkersIfThisWorkerHasPendingWork;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (void).cxx_destruct;
- (BOOL)isInterruptible;
- (id)initWithLibraryBundle:(id)a0;
- (void)_performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)imageConversionClient;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)stopWorkingOnItem:(id)a0;
- (id)videoConversionClient;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (void)workerDidFinishWithDatabaseContext:(id)a0;

@end
