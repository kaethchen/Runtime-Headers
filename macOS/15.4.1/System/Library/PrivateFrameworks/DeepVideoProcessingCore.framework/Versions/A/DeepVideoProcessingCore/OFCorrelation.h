@protocol MTLComputePipelineState;

@interface OFCorrelation : VEMetalBase {
    id<MTLComputePipelineState> _correlationKernel;
    id<MTLComputePipelineState> _correlationWithConcatKernel;
    id<MTLComputePipelineState> _correlationSIMDKernel;
    id<MTLComputePipelineState> _correlationWithConcatSIMDKernel;
    BOOL _interleaved;
}

@property (nonatomic) BOOL useSIMDShuffle;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setupMetal;
- (void)calcCorrelation:(id)a0 with:(id)a1 output:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 first:(id)a1 second:(id)a2 destination:(id)a3;
- (id)initWithDevice:(id)a0 interleaved:(BOOL)a1;

@end
