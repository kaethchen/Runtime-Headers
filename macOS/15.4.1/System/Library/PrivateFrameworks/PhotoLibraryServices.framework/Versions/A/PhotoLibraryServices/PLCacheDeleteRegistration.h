@class PFCameraViewfinderSessionWatcher, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLCacheDeleteRegistration : NSObject <PFCameraViewfinderSessionWatcherDelegate> {
    NSMutableDictionary *_cacheDeleteSupportByLibraryURL;
    NSMutableDictionary *_notificationIDsByLibraryURL;
    NSObject<OS_dispatch_queue> *_queue;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    NSMutableDictionary *_fileIDsAndPurgedPathsReceivedWhileCameraIsStreamingPerLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheDeleteUrgencySpecialCasePhotoLibrary;
+ (void)registerDefaultHandlers;
+ (void)registerSpecialCaseHandler;

- (id)init;
- (void).cxx_destruct;
- (id)_getInternalQueue;
- (void)_processRemovedFiles:(id)a0 withCacheDeleteSupport:(id)a1 forLibraryURL:(id)a2;
- (void)_registerResourceDirectories;
- (void)_replaceCameraWatcherWith:(id)a0;
- (void)_setCacheDeleteSupport:(id)a0 forLibrary:(id)a1;
- (void)cameraWatcherDidChangeState:(id)a0;
- (void)registerCacheDeleteSupport:(id)a0 withLibraryServicesManager:(id)a1;
- (void)unregisterCacheDeleteSupport:(id)a0 withLibraryServicesManager:(id)a1;

@end
