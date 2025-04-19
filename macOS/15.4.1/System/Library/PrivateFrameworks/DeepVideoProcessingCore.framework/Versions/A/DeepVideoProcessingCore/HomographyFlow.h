@protocol MTLComputePipelineState, MTLTexture;

@interface HomographyFlow : VEMetalBase {
    id<MTLComputePipelineState> _collectRegionalFlowInfoKernel;
    id<MTLComputePipelineState> _backwarpWithHomographyKernel;
    id<MTLComputePipelineState> _PWCflowWithHomographyKernel;
    id<MTLComputePipelineState> _correctFlowWithHomographyKernel;
    id<MTLComputePipelineState> _collectOcclusionRegionFlowInfoKernel;
    id<MTLTexture> _warpedFirstTexture;
    id<MTLTexture> _firstTexture;
    BOOL _textureBinded;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)setupMetal;
- (int)analyzeRegionalFlowInformation:(id)a0 depth:(id)a1 quart1_angle:(struct _regional_flow_directions { float x0; float x1; struct _regional_range { short x0; short x1; short x2; short x3; short x4; } x2; } *)a2 quart2_angle:(struct _regional_flow_directions { float x0; float x1; struct _regional_range { short x0; short x1; short x2; short x3; short x4; } x2; } *)a3 quart3_angle:(struct _regional_flow_directions { float x0; float x1; struct _regional_range { short x0; short x1; short x2; short x3; short x4; } x2; } *)a4 quart4_angle:(struct _regional_flow_directions { float x0; float x1; struct _regional_range { short x0; short x1; short x2; short x3; short x4; } x2; } *)a5 depth_angle:(struct _regional_flow_directions { float x0; float x1; struct _regional_range { short x0; short x1; short x2; short x3; short x4; } x2; } *)a6;
- (long long)bindInternalTextureFromFirst:(struct __CVBuffer { } *)a0 warpedFirst:(struct __CVBuffer { } *)a1;
- (struct { void /* unknown type, empty encoding */ x0[3]; })convertHomographyWithFactor:(float)a0 input:(struct { void /* unknown type, empty encoding */ x0[3]; })a1;
- (BOOL)createModules;
- (id)createOutputBufferWidth:(unsigned long long)a0 height:(unsigned long long)a1 channels:(unsigned long long)a2;
- (long long)encodeAnalyzeOcclusionRegionToCommandBuffer:(id)a0 flow:(id)a1 depth:(id)a2 countBuffer:(id)a3 vxBuffer:(id)a4 vyBuffer:(id)a5 threadsPerGroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a6 numThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a7;
- (long long)encodeAnalyzeRegionalFlowInfoToCommandBuffer:(id)a0 flow:(id)a1 range:(struct _regional_range { short x0; short x1; short x2; short x3; short x4; })a2 countBuffer:(id)a3 vxBuffer:(id)a4 vyBuffer:(id)a5 threadsPerGroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a6 numThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a7;
- (long long)encodeBackWarpToCommandBuffer:(id)a0 reference:(id)a1 ToOutput:(id)a2 withHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a3;
- (long long)encodeCombineFlowToCommandBuffer:(id)a0 input:(id)a1 homography:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 baseWarp:(BOOL)a3 destination:(id)a4;
- (long long)encodeCorrectFlowToCommandBuffer:(id)a0 input:(id)a1 refFlow:(id)a2 homography:(struct { void /* unknown type, empty encoding */ x0[3]; })a3;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;
- (long long)postprocessFlowWithhomographyMatrix21:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 matrix12:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 inputForwardFlow:(struct __CVBuffer { } *)a2 inputBackwardFlow:(struct __CVBuffer { } *)a3 outputForwardFlow:(struct __CVBuffer { } *)a4 outputBackwardFlow:(struct __CVBuffer { } *)a5 downscaleFacttor:(float)a6;
- (long long)proprocessFirst:(struct __CVBuffer { } *)a0 warpedFirst:(struct __CVBuffer { } *)a1 withHomography:(struct { void /* unknown type, empty encoding */ x0[3]; })a2;
- (float)sumUpStat:(id)a0 bufferLength:(unsigned long long)a1;

@end
