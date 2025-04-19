@class NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetDownloadStorageManager : NSObject {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
}

+ (id)sharedDownloadStorageManager;

- (void)dealloc;
- (id)init;
- (void)setStorageManagementPolicy:(id)a0 forURL:(id)a1;
- (id)storageManagementPolicyForURL:(id)a0;

@end
