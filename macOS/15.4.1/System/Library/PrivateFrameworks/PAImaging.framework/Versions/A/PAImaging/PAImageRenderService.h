@class NSObject, PATimer, NSMutableSet, PAImageRenderRequestHandler, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PAImageRenderService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_requestHandlers;
    PAImageRenderRequestHandler *_currentRequestHandler;
    NSMutableSet *_completingRequestHandlers;
    PATimer *_timer;
}

+ (id)imageRenderService;

- (id)init;
- (void).cxx_destruct;
- (void)_processNextRequest;
- (id)_popRequestHandler;
- (void)_processNextRequestIfNeeded;
- (void)_pushRequestHandler:(id)a0;
- (void)_requestHandlerDidComplete:(id)a0;
- (void)_requestHandlerWillComplete:(id)a0;
- (void)_submitRequestWithHandler:(id)a0;
- (void)requestHandlerDidComplete:(id)a0;
- (void)requestHandlerWillComplete:(id)a0;
- (void)submitRequest:(id)a0 queue:(id)a1 handler:(id /* block */)a2;

@end
