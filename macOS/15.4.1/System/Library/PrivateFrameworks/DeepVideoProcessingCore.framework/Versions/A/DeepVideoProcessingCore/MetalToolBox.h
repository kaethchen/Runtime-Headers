@protocol MTLComputePipelineState;

@interface MetalToolBox : VEMetalBase {
    id<MTLComputePipelineState> _yuv2gray;
    id<MTLComputePipelineState> _rgb2gray;
    id<MTLComputePipelineState> _convertPackedRGBA2Gray;
    id<MTLComputePipelineState> _convertPlanerRGBA2Gray;
}

- (void).cxx_destruct;
- (BOOL)setupMetal;
- (long long)ConvertYUV:(id)a0 toGray:(id)a1 waitForComplete:(BOOL)a2;
- (long long)ConvertRGB:(SEL)a0 toGray:(id)a1 withCoef:(id)a2 waitForComplete:(BOOL)a3;
- (long long)encodeConvertRGBAFromSource:(SEL)a0 output:(id)a1 withCoef:(id)a2 waitForComplete:(BOOL)a3;
- (long long)encodeRGB2GrayToCommandBuffer:(SEL)a0 InputRGB:(id)a1 ToOutput:(id)a2 withCoef:(id)a3;
- (long long)encodeYUV2GrayToCommandBuffer:(id)a0 InputYUV:(id)a1 ToOutput:(id)a2;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;

@end
