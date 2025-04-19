@class NSString, NSProgress, PHPhotoLibrary, NSObject, PLCPLSettingsObserver;
@protocol OS_dispatch_queue;

@interface PXCPLPhotoLibrarySource : PXObservable <PLCPLSettingsObserverDelegate> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    long long _percentCompletedForRebuild;
}

@property (retain) NSObject<OS_dispatch_queue> *sharedQueue;
@property (retain) NSProgress *postOpenProgress;
@property (nonatomic) BOOL isCloudPhotosEnabled;
@property (nonatomic) BOOL isLocalModeEnabled;
@property (nonatomic) float fractionCompletedForRebuild;
@property (nonatomic) BOOL isRebuildingThumbnails;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PLCPLSettingsObserver *cplSettingsObserver;
@property (readonly, nonatomic) BOOL isKeepOriginalsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithPhotoLibrary:(id)a0;
- (void)cplSettingsDidChange:(id)a0;
- (void)_logChanges;
- (void)_queue_resolveSettings;
- (void)_queue_subscribeToPostOpenProgressForPhotoLibrary:(id)a0;
- (void)_removePostOpenProgressObserverIfNeeded;
- (void)_updateFractionCompletedForRebuild;
- (void)_updateIsCloudPhotosEnabled:(BOOL)a0;
- (void)_updateIsKeepOriginalsEnabled:(BOOL)a0;
- (void)_updateIsLocalModeEnabled;
- (void)_updateIsRebuildingThumbnails;
- (void)setIsKeepOriginalsEnabled:(BOOL)a0;

@end
