@class NSString, PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityIndicatorLock;
    NSString *_resourceHoldingDirectoryPath;
}

+ (void)setSystemLibraryAvailableIndicatorState:(BOOL)a0;
+ (BOOL)systemLibraryAvailableIndicatorState;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPathManager:(id)a0;
- (id)initWithResourceHoldingDirectoryPath:(id)a0;
- (void)setCreatingAssetIsBusy:(BOOL)a0 uuid:(id)a1;
- (BOOL)isStreamsLibraryUpdatingExpired;
- (BOOL)isWipeCPLOnOpen;
- (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)a0 onPauseData:(id)a1;
- (void)_createPauseMarkerForReason:(short)a0 withUnpauseTime:(id)a1 withPath:(id)a2;
- (id)_pauseDataOnPath:(id)a0;
- (id)_readPListWithFilename:(id)a0;
- (id)_rebuildingPersonsIndicatorFilePath;
- (id)_rebuildingSocialGroupsIndicatorFilePath;
- (void)_setActivityIndicatorWithPath:(id)a0 flag:(BOOL)a1 uuid:(id)a2 crashRecovery:(id /* block */)a3;
- (void)_writeDict:(id)a0 withFilename:(id)a1;
- (BOOL)clearPauseMarkerForReason:(short)a0;
- (void)clearWipeCPLOnOpen;
- (void)createPauseMarkerWithUnpauseTime:(id)a0 reason:(short)a1;
- (short)currentPauseReason;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (void)forceSoftResetSync;
- (void)getDownloadPhotoCount:(unsigned long long *)a0 downloadVideoCount:(unsigned long long *)a1;
- (BOOL)hasItemToDownload;
- (BOOL)isDisableICloudPhotos;
- (BOOL)isEnableICloudPhotos;
- (BOOL)isForceSoftResetSync;
- (BOOL)isICloudPhotosPaused;
- (BOOL)isRebuildingPersons;
- (BOOL)isRebuildingSocialGroups;
- (BOOL)isUserPause;
- (void)logCloudServiceEnableEvent:(BOOL)a0 serviceName:(id)a1 reason:(id)a2;
- (BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)a0;
- (void)setDownloadCountsForImages:(unsigned long long)a0 videos:(unsigned long long)a1;
- (void)setImageWriter:(id)a0 isBusy:(BOOL)a1 crashRecoverySupport:(id)a2;
- (void)setIsRebuildingPersons:(BOOL)a0;
- (void)setIsRebuildingSocialGroups:(BOOL)a0;
- (void)setStreamsLibraryUpdatingExpired:(BOOL)a0;
- (void)setWipeCPLOnOpen;
- (id)unpauseTime;
- (void)updateICloudPhotosMarkerForEnable:(BOOL)a0;
- (void)writeDisableICloudPhotosMarker;
- (void)writeEnableICloudPhotosMarker;

@end
