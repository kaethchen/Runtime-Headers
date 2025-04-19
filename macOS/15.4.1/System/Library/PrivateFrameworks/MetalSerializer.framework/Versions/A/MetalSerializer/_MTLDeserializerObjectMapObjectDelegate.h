@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _MTLDeserializerObjectMapObjectDelegate : NSObject <MTLDeserializationContext, MTLDeserializerObjectDelegate> {
    void *_commandQueueMap;
    void *_functionMap;
    void *_computePipelineMap;
    void *_renderPipelineMap;
    void *_bufferMap;
    void *_textureMap;
    void *_samplerMap;
    void *_depthStencilMap;
    void *_fenceMap;
    void *_argumentBufferLayoutMap;
    void *_argumentEncoderMap;
    void *_heapMap;
    void *_eventMap;
    NSObject<OS_dispatch_queue> *_resourceMapQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)functionWithFunctionRef:(unsigned long long)a0;
- (void)deleteSamplerStateForReference:(unsigned int)a0;
- (void)deleteBufferForReference:(unsigned int)a0;
- (void)deleteComputePipelineStateForReference:(unsigned int)a0;
- (void)deleteDepthStencilStateForReference:(unsigned int)a0;
- (void)deleteFenceForReference:(unsigned int)a0;
- (void)deleteFunctionForReference:(unsigned int)a0;
- (void)deleteHeapForReference:(unsigned int)a0;
- (void)deleteRenderPipelineStateForReference:(unsigned int)a0;
- (void)deleteTextureForReference:(unsigned int)a0;
- (id)getBufferForReference:(unsigned int)a0;
- (id)getComputePipelineStateForReference:(unsigned int)a0;
- (id)getDepthStencilStateForReference:(unsigned int)a0;
- (id)getFenceForReference:(unsigned int)a0;
- (id)getFunctionForReference:(unsigned int)a0;
- (id)getHeapForReference:(unsigned int)a0;
- (id)getRenderPipelineStateForReference:(unsigned int)a0;
- (id)getResourceForReference:(unsigned int)a0;
- (id)getSamplerStateForReference:(unsigned int)a0;
- (id)getTextureForReference:(unsigned int)a0;
- (id)getEventForReference:(unsigned int)a0;
- (unsigned int)registerBufferForReference:(unsigned int)a0 buffer:(id)a1;
- (unsigned int)registerCommandQueueForReference:(unsigned int)a0 commandQueue:(id)a1;
- (id)getArgumentEncoderForReference:(unsigned int)a0;
- (void)deleteCommandQueueForReference:(unsigned int)a0;
- (void)deleteArgumentBufferLayoutForReference:(unsigned int)a0;
- (void)deleteArgumentEncoderForReference:(unsigned int)a0;
- (void)deleteEventForReference:(unsigned int)a0;
- (void)deleteResourceForReference:(unsigned int)a0;
- (id)getArgumentBufferLayoutForReference:(unsigned int)a0;
- (id)getCommandQueueForReference:(unsigned int)a0;
- (unsigned int)registerArgumentBufferLayoutForReference:(unsigned int)a0 argumentBufferLayout:(id)a1;
- (unsigned int)registerArgumentEncoderForReference:(unsigned int)a0 argumentEncoder:(id)a1;
- (unsigned int)registerComputePipelineStateForReference:(unsigned int)a0 computePipeline:(id)a1;
- (unsigned int)registerDepthStencilStateForReference:(unsigned int)a0 depthStencil:(id)a1;
- (unsigned int)registerEventForReference:(unsigned int)a0 event:(id)a1;
- (unsigned int)registerFenceForReference:(unsigned int)a0 fence:(id)a1;
- (unsigned int)registerFunctionForReference:(unsigned int)a0 function:(id)a1;
- (unsigned int)registerHeapForReference:(unsigned int)a0 heap:(id)a1;
- (unsigned int)registerRenderPipelineStateForReference:(unsigned int)a0 renderPipeline:(id)a1;
- (unsigned int)registerSamplerStateForReference:(unsigned int)a0 sampler:(id)a1;
- (unsigned int)registerTextureForReference:(unsigned int)a0 texture:(id)a1;

@end
