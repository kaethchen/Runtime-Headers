@class NSString, _PGDeserializer;
@protocol MTLComputePipelineState, MTLCommandBuffer, MTLComputeCommandEncoderSPI;

@interface PGDeserializerComputeDecoder : NSObject <PGDeserializerDecoder> {
    _PGDeserializer *_deserializer;
    id<MTLComputeCommandEncoderSPI> _computeEncoder;
    id<MTLCommandBuffer> _commandBuffer;
    id<MTLComputePipelineState> _computePipeline;
}

@property (readonly) unsigned char type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)fault;
- (void)decodeBarrierScopeWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeUseResourcesWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeWaitForFenceWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeBarrierResourcesWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (id)decodeComputePassDescriptor:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeDispatchThreadgroupsIndirectWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeDispatchThreadgroupsWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeDispatchThreadsWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeEncodeEndDoWhile:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeEncodeEndIf:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeEncodeEndWhile:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeEncodeStartDoWhile:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeEncodeStartElse:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeEncodeStartIf:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeEncodeStartWhile:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeInsertCompressedTextureReinterpretationFlush:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSetBufferOffsetWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSetBufferOffsetWithStrideWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSetBuffersWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSetBuffersWithStrideWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSetComputePassDispatchTypeWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0 descriptor:(id)a1;
- (void)decodeSetImageblockWidthWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSetPipelineStateWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSetSamplersLODClampWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSetSamplersWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSetStageInRegionIndirectWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSetStageInRegionWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSetTexturesWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeSetThreadgroupMemoryLengthWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeUpdateFenceWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeUseHeapsWithIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a0;
- (void)decodeWithHeader:(struct { unsigned int x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 withIterator:(struct PGByteIterator { void *x0; unsigned long long x1; unsigned long long x2; } *)a1;
- (id)initWithDeserializer:(id)a0 commandBuffer:(id)a1;

@end
