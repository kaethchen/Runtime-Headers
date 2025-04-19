@class VEFrameProcessor, MTLSharedEventListener, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, MTLDevice, VTFrameProcessorImplementationPrivate;

@interface VTFrameProcessor : NSObject {
    VEFrameProcessor *_veFrameProcessor;
    long long _processorType;
    id<VTFrameProcessorImplementationPrivate> _processor;
    NSObject<OS_dispatch_queue> *_processFrameQueue;
    id<MTLDevice> _device;
    MTLSharedEventListener *_sharedEventListener;
    NSMutableArray *_sharedEventList;
    BOOL _sharedEventListTearingDown;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sharedEventListLock;
}

- (id)init;
- (BOOL)createSharedEventListener;
- (void)destroySharedEventListener;
- (void)endSession;
- (void)internalEndSession;
- (void)processWithCommandBuffer:(id)a0 parameters:(id)a1;
- (void)processWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)processWithParameters:(id)a0 error:(id *)a1;
- (BOOL)startSessionWithConfiguration:(id)a0 error:(id *)a1;

@end
