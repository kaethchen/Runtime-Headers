@class ASCLockupViewGroup, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AKMediaServicesController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeLockupGroupLock;
    NSMutableDictionary *_activeLockupGroupForBundleID;
    NSObject<OS_dispatch_queue> *_imageDownloadQueue;
    ASCLockupViewGroup *_group;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isRequestCancelledForBundleID:(id)a0;
- (void)_appMetadataForBundleID:(id)a0 completion:(id /* block */)a1;
- (void)appIconForBundleID:(id)a0 size:(id)a1 completion:(id /* block */)a2;
- (void)appMetadataForBundleIDs:(id)a0 completion:(id /* block */)a1;
- (void)cancelAppIconRequestForBundleID:(id)a0 completion:(id /* block */)a1;

@end
