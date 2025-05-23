@protocol MPSNNPadding, MPSImageAllocator;

@interface MPSCNNMultiaryKernel : MPSKernel {
    struct NNKernelSourceParams { struct { long long x0; long long x1; long long x2; } x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; } *_srcInfo;
    BOOL _supportsBroadcasting;
    int _checkFlags;
    void /* function */ *_batchEncode;
    void *_encodeData;
}

@property (readonly, nonatomic) unsigned long long sourceCount;
@property (nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } clipRect;
@property (nonatomic) unsigned long long destinationFeatureChannelOffset;
@property (readonly, nonatomic) BOOL isBackwards;
@property (readonly, nonatomic) BOOL isStateModified;
@property (retain, nonatomic) id<MPSNNPadding> padding;
@property (retain, nonatomic) id<MPSImageAllocator> destinationImageAllocator;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (struct { long long x0; long long x1; long long x2; })offset;
- (void)setOffset:(struct { long long x0; long long x1; long long x2; })a0;
- (void)setKernelWidth:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationStates:(id *)a2 destinationStateIsTemporary:(BOOL)a3;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (void)setKernelHeight:(unsigned long long)a0;
- (void)setStrideInPixelsX:(unsigned long long)a0;
- (void)setStrideInPixelsY:(unsigned long long)a0;
- (unsigned long long)maxBatchSize;
- (void)setEdgeMode:(unsigned long long)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (unsigned long long)strideInPixelsY;
- (void)copyToGradientState:(id)a0 sourceImages:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (unsigned long long)strideInPixelsX;
- (BOOL)appendBatchBarrier;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2;
- (unsigned long long)dilationRateX;
- (unsigned long long)dilationRateXatIndex:(unsigned long long)a0;
- (unsigned long long)dilationRateY;
- (unsigned long long)dilationRateYatIndex:(unsigned long long)a0;
- (unsigned long long)edgeMode;
- (unsigned long long)edgeModeAtIndex:(unsigned long long)a0;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationImages:(id)a2;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 inStates:(id)a2 destinationImages:(id)a3;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 sourceStates:(id)a2;
- (id)encodeBatchToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2;
- (void)encodeBatchToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 destinationImages:(id)a3;
- (id)encodeBatchToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 destinationStates:(id *)a3 destinationStateIsTemporary:(BOOL)a4;
- (void)encodeBatchToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 inStates:(id)a3 destinationImages:(id)a4;
- (id)encodeBatchToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 sourceStates:(id)a3;
- (void)encodeInternalBatchToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 inStates:(id)a3 destinationImages:(id)a4 clipRect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a5;
- (id)encodeToCommandBuffer:(id)a0 sourceImages:(id)a1;
- (void)encodeToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationImage:(id)a2;
- (id)encodeToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationState:(id *)a2 destinationStateIsTemporary:(BOOL)a3;
- (id)encodeToCommandBuffer:(id)a0 sourceImages:(id)a1 inState:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 sourceImages:(id)a1 inState:(id)a2 destinationImage:(id)a3;
- (id)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 destinationImage:(id)a3;
- (id)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 destinationState:(id *)a3 destinationStateIsTemporary:(BOOL)a4;
- (id)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 inState:(id)a3;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImages:(id)a2 inState:(id)a3 destinationImage:(id)a4;
- (id)initWithDevice:(id)a0 sourceCount:(unsigned long long)a1;
- (BOOL)isResultStateReusedAcrossBatch;
- (unsigned long long)kernelHeightAtIndex:(unsigned long long)a0;
- (unsigned long long)kernelWidthAtIndex:(unsigned long long)a0;
- (struct { long long x0; long long x1; long long x2; })offsetAtIndex:(unsigned long long)a0;
- (id)resultStateBatchForSourceImages:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (id)resultStateForSourceImages:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (void)setDilationRateX:(unsigned long long)a0;
- (void)setDilationRateX:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setDilationRateY:(unsigned long long)a0;
- (void)setDilationRateY:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setEdgeMode:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setKernelHeight:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setKernelWidth:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setOffset:(struct { long long x0; long long x1; long long x2; })a0 atIndex:(unsigned long long)a1;
- (void)setSourceFeatureChannelMaxCount:(unsigned long long)a0;
- (void)setSourceFeatureChannelMaxCount:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setSourceFeatureChannelOffset:(unsigned long long)a0;
- (void)setSourceFeatureChannelOffset:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setStrideInPixelsX:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setStrideInPixelsY:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)sourceFeatureChannelMaxCount;
- (unsigned long long)sourceFeatureChannelMaxCountAtIndex:(unsigned long long)a0;
- (unsigned long long)sourceFeatureChannelOffset;
- (unsigned long long)sourceFeatureChannelOffsetAtIndex:(unsigned long long)a0;
- (unsigned long long)strideInPixelsXatIndex:(unsigned long long)a0;
- (unsigned long long)strideInPixelsYatIndex:(unsigned long long)a0;
- (id)temporaryResultStateBatchForCommandBuffer:(id)a0 sourceImages:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (id)temporaryResultStateForCommandBuffer:(id)a0 sourceImages:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;

@end
