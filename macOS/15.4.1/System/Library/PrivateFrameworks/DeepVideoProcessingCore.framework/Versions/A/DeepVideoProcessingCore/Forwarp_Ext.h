@protocol MTLComputePipelineState;

@interface Forwarp_Ext : VEMetalBase {
    id<MTLComputePipelineState> _linePredictOutput;
    id<MTLComputePipelineState> _linePredictOutput_lowres;
    id<MTLComputePipelineState> _linePredictOutput_finalStage;
    id<MTLComputePipelineState> _forerunnerKernel;
}

@property (nonatomic) float errorTolerance;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)setupMetal;
- (long long)encodeForerunnerToCommandBuffer:(id)a0 velocity:(id)a1 magnitude:(id)a2 depth:(id)a3 neighborMax:(id)a4 tileSize:(int)a5 virtualFrameNum:(int)a6 timeScale:(float)a7 destination:(id)a8;
- (long long)encodeVirtualShutterLinePredictionToCommandBuffer:(id)a0 input:(id)a1 flow:(id)a2 timeScale:(float)a3 destination:(id)a4;
- (long long)encodeVirtualShutterLinePredictionV2ToCommandBuffer:(id)a0 input:(id)a1 velocity:(id)a2 magnitude:(id)a3 smoothedMagnitude:(id)a4 depth:(id)a5 neighborMax:(id)a6 edgeTex:(id)a7 kernelTex:(id)a8 lowresOutput:(id)a9 lowresKernel:(id)a10 tileSize:(int)a11 virtualFrameNum:(int)a12 timeScale:(float)a13 lowresRender:(float)a14 destination:(id)a15 foreruner:(id)a16;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;

@end
