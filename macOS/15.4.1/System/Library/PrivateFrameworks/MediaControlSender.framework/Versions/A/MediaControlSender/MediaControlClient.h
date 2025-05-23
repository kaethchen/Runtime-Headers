@class NSObject;
@protocol OS_dispatch_queue;

@interface MediaControlClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct MediaControlClientImp { } *_client;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    id /* block */ _eventHandlerBlock;
}

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)setHost:(id)a0;
- (void)setPassword:(id)a0;
- (void)ensureConnected;
- (void)performRemoteAction:(id)a0 withParams:(id)a1 completionQueue:(id)a2 completionBlock:(id /* block */)a3;
- (void)ensureDisconnected;
- (void)getProperty:(id)a0 qualifier:(id)a1 completionQueue:(id)a2 completionBlock:(id /* block */)a3;
- (void)getSlideshowFeaturesWithOptions:(unsigned int)a0 completionQueue:(id)a1 completionBlock:(id /* block */)a2;
- (void)getSlideshowInfoWithOptions:(unsigned int)a0 completionQueue:(id)a1 completionBlock:(id /* block */)a2;
- (void)sendPhotoData:(id)a0 completionQueue:(id)a1 completionBlock:(id /* block */)a2;
- (void)sendPhotoData:(id)a0 options:(id)a1 completionQueue:(id)a2 completionBlock:(id /* block */)a3;
- (void)setEventHandlerQueue:(id)a0 eventHandlerBlock:(id /* block */)a1;
- (void)setProperty:(id)a0 qualifier:(id)a1 value:(id)a2 completionQueue:(id)a3 completionBlock:(id /* block */)a4;
- (void)setSlideshowInfo:(id)a0 completionQueue:(id)a1 completionBlock:(id /* block */)a2;
- (void)startPresentation:(id)a0 completionQueue:(id)a1 completionBlock:(id /* block */)a2;

@end
