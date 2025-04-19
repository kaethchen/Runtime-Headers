@class PHVideoResult, PHImageDisplaySpec, PHVideoRequestBehaviorSpec;

@interface PHVideoRequest : PHMediaRequest {
    PHVideoResult *_videoResult;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) PHImageDisplaySpec *displaySpec;
@property (readonly, nonatomic) PHVideoRequestBehaviorSpec *behaviorSpec;

- (void).cxx_destruct;
- (BOOL)isSynchronous;
- (BOOL)isNetworkAccessAllowed;
- (void)startRequest;
- (void)_finish;
- (void)_handleResultVideoURL:(id)a0 mediaItemMakerData:(id)a1 fingerPrint:(id)a2 info:(id)a3 error:(id)a4;
- (void)configureWithError:(id)a0;
- (long long)downloadIntent;
- (long long)downloadPriority;
- (id)initWithRequestID:(int)a0 requestIndex:(unsigned long long)a1 contextType:(long long)a2 managerID:(unsigned long long)a3 asset:(id)a4 displaySpec:(id)a5 behaviorSpec:(id)a6 delegate:(id)a7;

@end
