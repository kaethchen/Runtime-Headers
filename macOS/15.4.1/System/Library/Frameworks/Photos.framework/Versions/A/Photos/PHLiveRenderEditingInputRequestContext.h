@class PLPhotoEditRenderer, PHVideoRequest, NSProgress;
@protocol PHMediaRequestLiveRenderingOptions;

@interface PHLiveRenderEditingInputRequestContext : PHContentEditingInputRequestContext {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _renderLock;
    PLPhotoEditRenderer *_renderer;
    id /* block */ _renderedVideoHandler;
    id<PHMediaRequestLiveRenderingOptions> _liveRenderOptions;
    PHVideoRequest *_onDemandRenderRequest;
    NSProgress *_onDemandRenderProgress;
}

+ (id)videoLiveRenderContextWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 options:(id)a3 targetSize:(struct CGSize { double x0; double x1; })a4 contentMode:(long long)a5 renderedVideoHandler:(id /* block */)a6;
+ (id)videoLiveRenderContextWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 options:(id)a3 targetSize:(struct CGSize { double x0; double x1; })a4 renderedVideoHandler:(id /* block */)a5;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)progressHandler;
- (id)initialRequests;
- (void)_handleRenderVideoFinishedWithRequest:(id)a0 avAsset:(id)a1 videoComposition:(id)a2 audioMix:(id)a3 error:(id)a4 mutableInfo:(id)a5;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 options:(id)a3 useRAWAsUnadjustedBase:(BOOL)a4 resultHandler:(id /* block */)a5;
- (void)processAndReturnResultsWithRequest:(id)a0;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (id)produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(BOOL)a1 isDegraded:(BOOL)a2 result:(id)a3;
- (id)progresses;

@end
