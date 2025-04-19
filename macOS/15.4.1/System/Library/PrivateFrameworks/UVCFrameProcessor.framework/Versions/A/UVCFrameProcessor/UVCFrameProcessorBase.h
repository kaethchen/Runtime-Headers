@class NSObject;
@protocol OS_dispatch_queue;

@interface UVCFrameProcessorBase : NSObject {
    id _cachedFormatDescriptor;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak) UVCFrameProcessorBase *destination;

- (id)description;
- (void).cxx_destruct;
- (void)invalidate:(id /* block */)a0;
- (id)serialize;
- (void)handleStreamData:(id)a0 handler:(id /* block */)a1;
- (id)initWithDestination:(id)a0 queue:(id)a1;
- (void)sendProcessedFrameToDestination:(id)a0 handler:(id /* block */)a1;
- (void)sendProcessedFrameToRender:(id)a0 handler:(id /* block */)a1;

@end
