@class MPSNNOptimizerAdam, NSString, MPSVector, MPSCNNNormalizationMeanAndVarianceState, MPSVectorDescriptor, MPSNNOptimizerStochasticGradientDescent, MPSCNNNormalizationGammaAndBetaState;
@protocol MTLDevice, TCMPSConvolutionWeightsOptimizing, MTLCommandQueue, MTLBuffer;

@interface TCMPSBatchNormWeights : NSObject <MPSCNNBatchNormalizationDataSource> {
    unsigned long long _channels;
    float *_betaPointer;
    float *_gammaPointer;
    float *_betaMomentumPointer;
    float *_betaVelocityPointer;
    float *_gammaVelocityPointer;
    float *_gammaMomentumPointer;
    float *_movingVariancePointer;
    float *_movingMeanPointer;
    struct OptimizerOptions { BOOL useSGD; float learningRate; float gradientClipping; float weightDecay; float sgdMomentum; float adamBeta1; float adamBeta2; float adamEpsilon; } _optimizerOptions;
    float t;
    float _batchNormEpsilon;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __value_; } __r_; } _kernelParamsBinaryName;
    MPSVectorDescriptor *vDesc;
    MPSNNOptimizerAdam *adamGamma;
    MPSNNOptimizerAdam *adamBeta;
    MPSNNOptimizerStochasticGradientDescent *sgdGamma;
    MPSNNOptimizerStochasticGradientDescent *sgdBeta;
    MPSNNOptimizerStochasticGradientDescent *mov_avg_updater;
    MPSNNOptimizerStochasticGradientDescent *mov_var_updater;
    id<MTLDevice> dev;
    id<MTLCommandQueue> cq;
    BOOL use_sgd_opt;
    id<MTLBuffer> gammaMomentumBuffer;
    id<MTLBuffer> betaMomentumBuffer;
    id<MTLBuffer> gammaVelocityBuffer;
    id<MTLBuffer> betaVelocityBuffer;
    id<MTLBuffer> gammaBuffer;
    id<MTLBuffer> betaBuffer;
    id<MTLBuffer> movingVarianceBuffer;
    id<MTLBuffer> movingMeanBuffer;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<TCMPSConvolutionWeightsOptimizing> optimizer;
@property (readonly, nonatomic) MPSVector *gammaMomentumVector;
@property (readonly, nonatomic) MPSVector *betaMomentumVector;
@property (readonly, nonatomic) MPSVector *gammaVelocityVector;
@property (readonly, nonatomic) MPSVector *betaVelocityVector;
@property (readonly, nonatomic) MPSVector *movingMeanVector;
@property (readonly, nonatomic) MPSVector *movingVarianceVector;
@property (readonly, nonatomic) MPSCNNNormalizationGammaAndBetaState *gammaBetaState;
@property (readonly, nonatomic) MPSCNNNormalizationMeanAndVarianceState *meanVarianceState;
@property (retain, nonatomic) NSString *internalLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)load;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)label;
- (float)epsilon;
- (float *)gamma;
- (void)checkpointWithCommandQueue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)purge;
- (void)setLearningRate:(float)a0;
- (float *)beta;
- (float *)mean;
- (float *)variance;
- (unsigned long long)numberOfFeatureChannels;
- (BOOL)updateGammaAndBetaWithBatchNormalizationState:(id)a0;
- (id)updateGammaAndBetaWithCommandBuffer:(id)a0 batchNormalizationState:(id)a1;
- (void)set_cq:(id)a0;
- (id)initWithChannels:(unsigned long long)a0 kernelParamsBinaryName:(const char *)a1 device:(id)a2 cmd_queue:(id)a3 gamma:(float *)a4 beta:(float *)a5 moving_avg:(float *)a6 moving_var:(float *)a7 optimizerOptions:(struct OptimizerOptions { BOOL x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; })a8 batchNormEpsilon:(float)a9;
- (void)loadBeta:(float *)a0;
- (void)loadGamma:(float *)a0;
- (void)loadMovingAvg:(float *)a0;
- (void)loadMovingVar:(float *)a0;

@end
