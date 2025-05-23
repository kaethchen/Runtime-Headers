@class MPSCNNConvolution, MPSNNNeuronDescriptor;
@protocol MPSCNNConvolutionDataSource;

@interface MPSCNNConvolutionTranspose : MPSCNNKernel {
    MPSCNNConvolution *_convolution;
    MPSNNNeuronDescriptor *_fusedNeuronDescriptor;
}

@property (readonly, nonatomic) unsigned long long featureChannelsLayout;
@property (readonly, nonatomic) unsigned long long weightsBufferLength;
@property (readonly, nonatomic) unsigned long long inputFeatureChannels;
@property (readonly, nonatomic) unsigned long long outputFeatureChannels;
@property (nonatomic) long long kernelOffsetX;
@property (nonatomic) long long kernelOffsetY;
@property (readonly, nonatomic) unsigned long long groups;
@property (nonatomic) unsigned long long accumulatorPrecisionOption;
@property (readonly, retain, nonatomic) id<MPSCNNConvolutionDataSource> dataSource;

+ (BOOL)supportsSecureCoding;
+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x32; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x33; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x34; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x35; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x36; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x37; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x38; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x39; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x40; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x41; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x42; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x43; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x44; } *)libraryInfo:(void *)a0;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationStates:(id *)a2 destinationStateIsTemporary:(BOOL)a3;
- (id)initWithDevice:(id)a0 weights:(id)a1;
- (void)reloadWeightsAndBiasesWithCommandBuffer:(id)a0 state:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (BOOL)appendBatchBarrier;
- (void)copyToGradientState:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 sourceOffset:(struct { long long x0; long long x1; long long x2; } *)a3;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 convolutionGradientStates:(id)a2;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 convolutionGradientStates:(id)a2 destinationImages:(id)a3;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 convolutionGradientStates:(id)a2 destinationStates:(id *)a3 destinationStateIsTemporary:(BOOL)a4;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationStates:(id)a2 destinationImages:(id)a3;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 convolutionGradientState:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 convolutionGradientState:(id)a2 destinationImage:(id)a3;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 convolutionGradientState:(id)a2 destinationState:(id *)a3 destinationStateIsTemporary:(BOOL)a4;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 convolutionState:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationState:(id)a2 destinationImage:(id)a3;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationState:(id *)a2 destinationStateIsTemporary:(BOOL)a3;
- (id)exportWeightsAndBiasesWithCommandBuffer:(id)a0 resultStateCanBeTemporary:(BOOL)a1;
- (id)initWithDevice:(id)a0 convolutionDescriptor:(id)a1 kernelWeights:(const float *)a2 biasTerms:(const float *)a3 flags:(unsigned long long)a4;
- (id)initialize:(id)a0 convolutionDescriptor:(id)a1 kernelWeights:(const float *)a2 biasTerms:(const float *)a3 flags:(unsigned long long)a4 fullyConnected:(BOOL)a5;
- (id)initialize:(id)a0 weights:(id)a1 fullyConnected:(BOOL)a2;
- (BOOL)isResultStateReusedAcrossBatch;
- (void)reloadWeightsAndBiasesFromDataSource;
- (void)reloadWeightsAndBiasesWithDataSource:(id)a0;
- (id)resultStateBatchForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (id)resultStateForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (id)temporaryResultStateBatchForCommandBuffer:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (id)temporaryResultStateForCommandBuffer:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;

@end
