@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface PKDrawingOverlayCache : NSObject

@property (retain, nonatomic) NSCache *memoryCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (id)cacheDirectory;
- (id)cachePathForDrawingUUID:(id)a0;
- (void)clearMemoryCache;
- (void)overlayDrawingForDrawingUUID:(id)a0 tintColor:(id)a1 completion:(id /* block */)a2;
- (void)setOverlayDrawing:(id)a0 forDrawingUUID:(id)a1;

@end
