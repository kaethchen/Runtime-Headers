@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, PLAssetDownloadManagerDelegate;

@interface PLAssetDownloadManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requestsById;
    NSMutableDictionary *_progressById;
    _Atomic int _currentRequestId;
}

@property (weak, nonatomic) id<PLAssetDownloadManagerDelegate> delegate;

+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (void)cancelRequest:(int)a0;
- (int)requestRequiredResourcesForManagedAssetObjectUUID:(id)a0 library:(id)a1 completionHandler:(id /* block */)a2;
- (void)_onQueueAsync:(id /* block */)a0;

@end
