@class SHKSharingService, NSString, NSProgress, NSImage, PFDispatchQueue, NSObject, NSURL;
@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface SBLShareKitShareableItem : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _prepareLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _progressLock;
    BOOL _didPrepare;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) double lastFractionCompleted;
@property (nonatomic) BOOL canceled;
@property (retain) NSObject<OS_dispatch_semaphore> *prepareCompletionSemaphore;
@property (readonly, nonatomic) NSString *sessionGroup;
@property (readonly, nonatomic) NSImage *placeholderImage;
@property (readonly, nonatomic) PFDispatchQueue *providerWorkerQueue;
@property (readonly, nonatomic) PFDispatchQueue *dispatchLoaderQueue;
@property (retain, nonatomic) NSURL *fullSizeAssetURL;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *prepareGroup;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (weak, nonatomic) SHKSharingService *sharingService;
@property (readonly, nonatomic) NSURL *exportHintPath;
@property (readonly, nonatomic) BOOL canProvideImage;
@property (readonly, nonatomic) BOOL canProvideMovie;
@property (readonly, nonatomic) BOOL shouldDelayShowingPrepareProgressUntilNonZeroProgress;

+ (id)exportRootDirectoryForSessionGroup:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cleanUp;
- (void)download:(id /* block */)a0;
- (BOOL)needsDownload;
- (void)prepare:(id /* block */)a0;
- (void)cleanupRequests;
- (void)_updateProgressWithFractionCompleted:(double)a0;
- (void)cancelRequestsInProgress;
- (void)cleanupFiles;
- (id)exportWithCompletionHandler:(id /* block */)a0;
- (id)initWithSessionGroup:(id)a0 workerQueue:(id)a1 replyQueue:(id)a2;
- (BOOL)waitUntilPrepared;

@end
