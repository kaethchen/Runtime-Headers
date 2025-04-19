@class NSString, NSMutableDictionary, NSArray, ISWrappedAVAudioSession, NSObject, PXMediaProvider;
@protocol OS_dispatch_queue, PXAVResourceReclamationController, PXDisplayAsset;

@interface PXDisplayAssetVideoContentProvider : PXVideoContentProvider <PXDisplayAssetVideoContentProviderRequestDelegate, PXAVResourceReclamationObserver> {
    long long _videoRequestID;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    NSObject<OS_dispatch_queue> *_postprocessingQueue;
    NSMutableDictionary *_loadingQueue_requestsByPriority;
    long long _loadingQueue_lastRequestedPriority;
    id<PXDisplayAsset> _loadingQueue_asset;
    double _videoAspectRatio;
    NSArray *_strategies;
    BOOL _requestURLOnly;
    BOOL _mayContainAudio;
    NSString *_contentIdentifier;
    ISWrappedAVAudioSession *_audioSession;
}

@property (readonly, nonatomic) id<PXAVResourceReclamationController> resourceReclamationController;
@property (retain, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) BOOL needsPostprocessing;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)contentIdentifier;
- (id)audioSession;
- (void)cancelLoading;
- (id)analyticsPayload;
- (void)resourceReclamationEventDidOccur:(id)a0;
- (void)_loadingQueue_cancelAllRequests;
- (BOOL)mayContainAudio;
- (void)_postprocessingQueue_performPostprocessingOfItem:(id)a0 info:(id)a1 priority:(long long)a2;
- (void)_handlePostprocessedPlayerItem:(id)a0 priority:(long long)a1 description:(id)a2;
- (void)_loadingQueueBeginLoadingWithPriority:(long long)a0;
- (void)_loadingQueue_beginRequestForPriorityIfNeeded:(long long)a0;
- (BOOL)_loadingQueue_needsNewRequestForPriority:(long long)a0;
- (void)_loadingQueue_reloadContent;
- (void)_loadingQueue_setAsset:(id)a0;
- (void)_reloadAVObjects;
- (void)beginLoadingWithPriority:(long long)a0;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 deliveryStrategies:(id)a2 audioSession:(id)a3 requestURLOnly:(BOOL)a4;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 deliveryStrategies:(id)a2 audioSession:(id)a3 requestURLOnly:(BOOL)a4 resourceReclamationController:(id)a5;
- (void)makeUniqueContentIdentifier;
- (void)postprocessPlayerItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)reloadContent;
- (void)request:(id)a0 didFinishWithPlayerItem:(id)a1 videoURL:(id)a2 downloadedTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 info:(id)a4;
- (void)requestLoadingProgressDidChange:(id)a0;
- (id)videoAspectRatio;

@end
