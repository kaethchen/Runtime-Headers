@class PHImageRequestOptions, PHImageRequest, NSProgress, PHCompositeMediaResult;

@interface PHImageRequestContext : PHMediaRequestContext {
    NSProgress *_progress;
    PHImageRequest *_initialRequest;
    PHImageRequest *_intermediateRequest;
    PHImageRequest *_finalRequest;
    PHCompositeMediaResult *_delayedFinalInvalidDataResult;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _lock_highestResultPhaseDelivered;
}

@property (readonly, nonatomic) PHImageRequestOptions *imageOptions;

- (void).cxx_destruct;
- (long long)type;
- (id /* block */)progressHandler;
- (BOOL)isSynchronous;
- (BOOL)isNetworkAccessAllowed;
- (id)initialRequests;
- (BOOL)_isVideoFrameRequest;
- (id)_lazyProgress;
- (id)_produceFinalImageRequestForRequest:(id)a0;
- (id)_produceIntermediateImageRequestForRequest:(id)a0;
- (id)_videoBehavior;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 displaySpec:(id)a3 options:(id)a4 resultHandler:(id /* block */)a5;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (id)produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(BOOL)a1 isDegraded:(BOOL)a2 result:(id)a3;
- (id)progresses;
- (BOOL)representsShareableHighQualityResource;
- (BOOL)shouldLimitRepairRequestsPerProcess;
- (BOOL)shouldReportProgress;

@end
