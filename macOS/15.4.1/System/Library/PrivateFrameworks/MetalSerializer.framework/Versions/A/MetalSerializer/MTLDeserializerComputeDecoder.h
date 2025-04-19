@class NSString, _MTLDeserializer;
@protocol MTLComputePipelineState, MTLComputeCommandEncoderSPI;

@interface MTLDeserializerComputeDecoder : NSObject <MTLDeserializerDecoder> {
    _MTLDeserializer *deserializer;
    id<MTLComputeCommandEncoderSPI> computeEncoder;
    id<MTLComputePipelineState> _computePipeline;
}

@property (readonly) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)fault;
- (void)decodeWithHeader:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 withIterator:(id)a1;
- (id)initWithDeserializer:(id)a0 commandBuffer:(id)a1;
- (void)decodeSetSamplers:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeUpdateFence:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeSetTextures:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeBarrierResources:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeBarrierScope:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeDispatchThreadgroups:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeDispatchThreadgroupsIndirect:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeDispatchThreads:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeSetBufferOffset:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeSetBuffers:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeSetPipelineState:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeSetSamplersLODClamp:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeSetStageInRegion:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeSetStageInRegionIndirect:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeSetThreadgroupMemoryLength:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeUseHeaps:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeUseResources:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)decodeWaitForFence:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1;
- (void)readCommand:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1 expectedSize:(unsigned long long)a2 into:(void *)a3;
- (void)readVariableCommand:(struct { unsigned int x0; unsigned int x1; } *)a0 withIterator:(id)a1 maxExpectedSize:(unsigned long long)a2 into:(void *)a3;

@end
