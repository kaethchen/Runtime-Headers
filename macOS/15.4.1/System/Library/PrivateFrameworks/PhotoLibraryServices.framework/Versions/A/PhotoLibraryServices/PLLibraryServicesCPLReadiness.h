@class NSString, PLLibraryServicesManager, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface PLLibraryServicesCPLReadiness : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_source> *_photoLibraryCPLReadinessTimer;
    NSMutableArray *_photoLibraryCPLReadinessBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    NSString *_statusMessage;
    BOOL _isReadyForCPL;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithLibraryServicesManager:(id)a0;
- (id)libraryServicesManager;
- (void)_callOutstandingCPLReadinessBlocks;
- (BOOL)_checkForCPLReadinessAndCallBlocks;
- (void)_checkIsReadyForCloudPhotoLibrary;
- (BOOL)_isAssetsdReadyForCPLManagerWithStatus:(id *)a0;
- (BOOL)_isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (void)_setupCPLReadinessTimerAndEventHandlerIfNeeded;
- (void)_stopWaitingForCPLReadiness;
- (void)_updateIsReady:(BOOL)a0 statusMessage:(id)a1;
- (void)cancelCPLReadinessBlocksAndStopWaiting;
- (BOOL)isReadyForCloudPhotoLibraryWithStatus:(id *)a0;
- (void)pauseCloudPhotos:(BOOL)a0 reason:(short)a1;
- (void)performOnceLibraryIsReadyForCPLManager:(id /* block */)a0;
- (void)processCloudPhotosLibraryStateChange:(BOOL)a0;

@end
