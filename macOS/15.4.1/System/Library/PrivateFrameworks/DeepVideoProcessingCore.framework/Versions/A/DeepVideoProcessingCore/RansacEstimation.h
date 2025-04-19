@protocol MTLComputePipelineState;

@interface RansacEstimation : VEMetalBase {
    id<MTLComputePipelineState> _encodeRansacEstimation;
    int *_inlierIndices;
    struct _ransacScratchSpace { void *pAllocatedMemory; unsigned long long totalMemorySize; unsigned long long inlierCount; int *pInlierIndices; int *pRandomIndices; int *pBestInlier[2]; float *pXref_inlier; float *pYref_inlier; float *pXin_inlier; float *pYin_inlier; float *pH1_t; } _scratchSpace;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)setupMetal;
- (BOOL)ApplyRansacEstimation:(id)a0 desMatchInput:(id)a1 desMatchInput:(id)a2 desMatchInput:(id)a3 desMatchCountInput:(int)a4 xscaleFactorInput:(float)a5 yscaleFactorInput:(float)a6 imageDimInput:(int)a7 imageDimInput:(int)a8 homographyMatrixOutput:(struct _xform2D { struct { void /* unknown type, empty encoding */ x0[3]; } x0; float x1; int x2; int x3; int x4; } *)a9 waitForComplete:(BOOL)a10;
- (BOOL)allocateInternalBuffer:(int)a0;
- (void)freeScratchSpace;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;

@end
