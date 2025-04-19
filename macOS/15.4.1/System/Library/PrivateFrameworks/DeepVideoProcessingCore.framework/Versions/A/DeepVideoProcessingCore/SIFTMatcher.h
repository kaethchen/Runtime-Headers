@class NSMutableDictionary;
@protocol MTLComputePipelineState, MTLBuffer;

@interface SIFTMatcher : VEMetalBase {
    id<MTLComputePipelineState> _findBestMatch;
    id<MTLComputePipelineState> _findBestMatchOptimized;
    id<MTLComputePipelineState> _findBestMatchEarlyExist;
    id<MTLComputePipelineState> _filterClosePairKernel;
    id<MTLComputePipelineState> _flow_find_match_kernel;
    id<MTLBuffer> matchCount;
    NSMutableDictionary *verbose_messages;
    int verbose_state;
    float ratio;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)setupMetal;
- (void)encodeBestMatchEarlyExist:(id)a0 objectCount:(int)a1 keypt1:(id)a2 toTargetDescriptor:(id)a3 targetCount:(int)a4 keypt2:(id)a5 filteredIndex:(id)a6 matches:(id)a7 commandBuffer:(id)a8;
- (long long)encodeBestMatchFromFlow:(id)a0 im1:(id)a1 im2:(id)a2 matches:(id)a3 angle:(struct _regional_flow_directions { float x0; float x1; struct _regional_range { short x0; short x1; short x2; short x3; short x4; } x2; })a4 matchCount:(id)a5 flipFlowValue:(BOOL)a6 commandBuffer:(id)a7;
- (void)filterClosedKptPairFromKpt1:(id)a0 kpt2:(id)a1 count1:(int)a2 count2:(int)a3 filteredIndex:(id)a4 commandBuffer:(id)a5;
- (int)findMatchesBetweenDescriptor:(id)a0 objectCount:(int)a1 toTargetDescriptor:(id)a2 targetCount:(int)a3 matches:(id)a4;
- (int)findMatchesBetweenDescriptorEarlyExist:(id)a0 objectCount:(int)a1 keypt1:(id)a2 toTargetDescriptor:(id)a3 targetCount:(int)a4 keypt2:(id)a5 filteredIndex:(id)a6 matches:(id)a7;
- (int)findMatchesBetweenDescriptorOptimized:(id)a0 objectCount:(int)a1 toTargetDescriptor:(id)a2 targetCount:(int)a3 matches:(id)a4;
- (long long)findMatchesFromFlow:(id)a0 im1:(id)a1 im2:(id)a2 matches:(id)a3 background_angle:(struct _regional_flow_directions { float x0; float x1; struct _regional_range { short x0; short x1; short x2; short x3; short x4; } x2; })a4 matchCount:(id)a5 flipFlowValue:(BOOL)a6 commandBuffer:(id)a7;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;
- (int)sortMatchingPair:(id)a0 matchCount:(int)a1;

@end
