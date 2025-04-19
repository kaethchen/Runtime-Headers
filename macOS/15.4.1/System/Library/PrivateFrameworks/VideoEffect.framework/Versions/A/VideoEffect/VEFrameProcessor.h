@class OpticalFlowProcessor, VSRProcessor, NSObject, NSMutableArray, MTLSharedEventListener, VSAProcessor, FRCProcessor;
@protocol OS_dispatch_queue, MTLDevice;

@interface VEFrameProcessor : NSObject {
    OpticalFlowProcessor *_opticalFlow;
    VSAProcessor *_vsaProcessor;
    FRCProcessor *_frcProcessor;
    VSRProcessor *_vsrProcessor;
    NSObject<OS_dispatch_queue> *_processFrameQueue;
    id<MTLDevice> _device;
    MTLSharedEventListener *_sharedEventListener;
    NSMutableArray *_sharedEventList;
    BOOL _sharedEventListTearingDown;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sharedEventListLock;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)createSharedEventListener;
- (void)destroySharedEventListener;
- (void)endSession;
- (void)internalEndSession;
- (void)processWithCommandBuffer:(id)a0 parameters:(id)a1 completionHandler:(id /* block */)a2;
- (void)processWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)processWithParameters:(id)a0 error:(id *)a1;
- (BOOL)startSessionWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)internalProcessWithParameters:(id)a0 error:(id *)a1;
- (BOOL)internalStartSessionWithConfigurations:(id)a0 error:(id *)a1;
- (void)processWithListParameters:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)processWithListParameters:(id)a0 error:(id *)a1;
- (BOOL)startSessionWithListConfigurations:(id)a0 error:(id *)a1;

@end
