@class AVThumbnailGenerationRequest, NSArray, NSMutableDictionary, NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface AVThumbnailGenerator : NSObject {
    NSObject<OS_dispatch_queue> *_thumbnailGenerationQueue;
    AVThumbnailGenerationRequest *_activeRequest;
    NSMutableDictionary *_pendingRequestsForRequestType;
    NSTimer *_thumbnailGenerationTimer;
}

@property (readonly) NSArray *thumbnails;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_processRequest:(id)a0;
- (void)cancelThumbnailGenerationForRequestType:(long long)a0;
- (void)generateThumbnailsForAsset:(id)a0 startTime:(double)a1 duration:(double)a2 thumbnailTimes:(id)a3 tolerance:(double)a4 size:(struct CGSize { double x0; double x1; })a5 requestType:(long long)a6 thumbnailHandler:(id /* block */)a7;
- (void)_cancelThumbnailGenerationTimer;
- (void)_cancelActiveRequest;
- (void)_didCompleteRequest:(id)a0;

@end
