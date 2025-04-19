@class CSUImageCaptioningDecoderConfiguration, CSUCoreMLInference, MLMultiArray, CSUCaptioningProcUtils;

@interface CSUImageCaptioningDecoderE5 : NSObject {
    CSUCoreMLInference *_decoderE5Net;
    CSUCoreMLInference *_bridgeE5Net;
    MLMultiArray *_inputTokensE5;
    MLMultiArray *_encodedFeaturesBufferE5;
}

@property (readonly, nonatomic) CSUCaptioningProcUtils *procUtils;
@property (readonly, nonatomic) CSUImageCaptioningDecoderConfiguration *configuration;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)loadResources:(id *)a0;
- (id)computeDecodedCaptionsForFeatures:(id)a0 withDecodingMethod:(long long)a1 runDecoderOnly:(BOOL)a2 error:(id *)a3;
- (id)getBridgeLayerOutput:(id)a0 error:(id *)a1;
- (id)getCaptionsAfterBeamSearchDecodingOnEncodedFeatures:(id *)a0;
- (id)getCaptionsAfterGreedyDecodingOnEncodedFeatures:(id *)a0;
- (BOOL)loadBridge:(id *)a0;
- (BOOL)loadDecoder:(id *)a0;
- (BOOL)loadPostProcUtilsWithBeamWidth:(int)a0 error:(id *)a1;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })nextTokensForInputs:(const void *)a0 AndforMaskPosition:(unsigned int)a1;
- (id)postProcessResults:(id)a0 error:(id *)a1;

@end
