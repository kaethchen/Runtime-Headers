@class MPSNNOptimizerAdam, NSString, MPSVectorDescriptor, NSMutableData, NSMutableArray, MPSCNNInstanceNormalization;
@protocol MTLCommandQueue;

@interface TCMPSInstanceNormDataLoader : NSObject <MPSCNNInstanceNormalizationDataSource> {
    NSMutableData *_gamma_weights;
    NSMutableData *_beta_weights;
    NSString *_name;
    NSMutableArray *_style_props;
    NSMutableData *_gammaPlaceHolder;
    NSMutableData *_betaPlaceHolder;
    MPSVectorDescriptor *_vDesc;
    MPSCNNInstanceNormalization *_instanceNormFilter;
    id<MTLCommandQueue> _cq;
    MPSNNOptimizerAdam *_adamGamma;
    MPSNNOptimizerAdam *_adamBeta;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numberOfFeatureChannels;
@property (nonatomic) unsigned long long styleIndex;
@property (nonatomic) unsigned long long styles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)label;
- (float *)gamma;
- (void)checkpoint;
- (void)checkpointWithCommandQueue:(id)a0;
- (void)setLearningRate:(float)a0;
- (float *)beta;
- (id)updateGammaAndBetaWithCommandBuffer:(id)a0 instanceNormalizationStateBatch:(id)a1;
- (float *)betaWeights;
- (float *)gammaWeights;
- (id)initWithParams:(id)a0 gammaWeights:(float *)a1 betaWeights:(float *)a2 numberFeatureChannels:(unsigned long long)a3 styles:(unsigned long long)a4 device:(id)a5 cmd_queue:(id)a6;
- (void)loadBeta:(float *)a0;
- (void)loadGamma:(float *)a0;

@end
