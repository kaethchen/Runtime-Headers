@class NSObject, MADService;
@protocol OS_dispatch_queue;

@interface VKCRemoveBackgroundRequestHandler : NSObject {
    MADService *_service;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) BOOL isSupported;
@property (class, readonly, nonatomic) double maxResolution;
@property (class, readonly, nonatomic) double maxLength;
@property (class, readonly, nonatomic) double minAspectRatio;
@property (class, readonly, nonatomic) double maxAspectRatio;

- (id)init;
- (void).cxx_destruct;
- (void)cancelRequest:(id)a0;
- (void)cancelAllRequests;
- (void)performRequest:(id)a0 completion:(id /* block */)a1;
- (void)_didEndForRequest:(id)a0;
- (void)_willBeginForRequest:(id)a0;
- (BOOL)isValidRequest:(id)a0 error:(id *)a1;

@end
