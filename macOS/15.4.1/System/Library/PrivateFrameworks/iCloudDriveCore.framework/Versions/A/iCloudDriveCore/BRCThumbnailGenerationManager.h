@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCThumbnailGenerationManager : NSObject {
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    NSObject<OS_dispatch_queue> *_thumbnailPrivateQueue;
    BOOL _prepareReachedMax;
    NSMutableDictionary *_thumbnailsOperations;
}

@property (copy, nonatomic) id /* block */ reachedThumbnailMaximumCapacity;
@property (copy, nonatomic) id /* block */ hasThumbnailAvailableSlot;

+ (id)defaultManager;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)_addThumbnailGenerationJobAtURL:(id)a0 targetURL:(id)a1 thumbnailID:(id)a2 timeout:(id)a3 syncContext:(id)a4 completionHandler:(id /* block */)a5;
- (void)_addThumbnailOperation:(id)a0 thumbnailID:(id)a1;
- (id)_generateThumbnailOperationAtURL:(id)a0 targetURL:(id)a1 timeout:(id)a2 sessionContext:(id)a3;
- (void)_removeThumbnailOperationForThumbnailID:(id)a0;
- (unsigned long long)_thumbnailOperationsMax;
- (void)addOutOfBandThumbnailGenerationJobAtURL:(id)a0 targetURL:(id)a1 syncContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)addOutOfBandThumbnailGenerationJobAtURL:(id)a0 targetURL:(id)a1 timeout:(double)a2 syncContext:(id)a3 completionHandler:(id /* block */)a4;
- (void)addThumbnailGenerationJobAtURL:(id)a0 targetURL:(id)a1 thumbnailID:(id)a2 syncContext:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)canScheduleMoreJobs;
- (id)operationForThumbnailID:(id)a0;

@end
