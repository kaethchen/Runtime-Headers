@protocol MTLComputePipelineState;

@interface Backwarp_VSA : Backwarp_Ext {
    id<MTLComputePipelineState> _flowToVelocity;
    id<MTLComputePipelineState> _smoothVelocity;
    id<MTLComputePipelineState> _tileMaxVelocityRun1;
    id<MTLComputePipelineState> _tileMaxVelocityRun2;
    id<MTLComputePipelineState> _neighborMaxVelocity;
}

- (void).cxx_destruct;
- (BOOL)setupMetal;
- (long long)encodeTileMaxVelocityToCommandBuffer:(id)a0 velocity:(id)a1 tileSize:(int)a2 tileMax:(id)a3;
- (long long)encodeNeighborMaxFlowToCommandBuffer:(id)a0 tileMax:(id)a1 searchRange:(int)a2 neighborMax:(id)a3;
- (long long)encodeRun1TileMaxVelocityToCommandBuffer:(id)a0 velocity:(id)a1 magnitude:(id)a2 tileSize:(int)a3 tileMax:(id)a4;
- (long long)encodeSmoothedVelocityForMotionBlurToCommandBuffer:(id)a0 magnitude:(id)a1 smoothedMagnitude:(id)a2;
- (long long)encodeTileBasedNeighborhoodMaxVelocityToCommandBuffer:(id)a0 velocity:(id)a1 magnitude:(id)a2 tileSize:(int)a3 searchRange:(int)a4 Resolution:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })a5 intermediateTileMax:(id)a6 tileMax:(id)a7 neighborMax:(id)a8;
- (long long)encodeVelocityForMotionBlurToCommandBuffer:(id)a0 velocity:(id)a1 magnitude:(id)a2 timeScale:(float)a3 tileSize:(int)a4 searchRange:(int)a5;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1 interleaved:(BOOL)a2;

@end
