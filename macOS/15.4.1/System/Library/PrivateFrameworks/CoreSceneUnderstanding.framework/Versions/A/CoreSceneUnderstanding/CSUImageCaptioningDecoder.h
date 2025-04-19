@class CSUImageCaptioningDecoderAXKVCacheE1, CSUImageCaptioningDecoderConfiguration, CSUImageCaptioningDecoderE5, CSUCaptionPostProcessingHandler, CSUImageCaptioningDecoderE1;

@interface CSUImageCaptioningDecoder : NSObject {
    CSUImageCaptioningDecoderE1 *_imageCaptioningDecoderE1;
    CSUImageCaptioningDecoderAXKVCacheE1 *_imageCaptioningDecoderAXKVCacheE1;
    CSUImageCaptioningDecoderE5 *_imageCaptioningDecoderE5;
    CSUCaptionPostProcessingHandler *_postProcessingHandler;
}

@property (retain, nonatomic) CSUImageCaptioningDecoderConfiguration *configuration;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)loadResources:(id *)a0;
- (id)computeDecodedCaptionsForFeatures:(id)a0 withDecodingMethod:(long long)a1 error:(id *)a2;
- (id)computeDecodedCaptionsForFeaturesAXKVCacheE1:(id)a0 withDecodingMethod:(long long)a1 runDecoderOnly:(BOOL)a2 error:(id *)a3;
- (id)computeDecodedCaptionsForFeaturesE1:(id)a0 withDecodingMethod:(long long)a1 runDecoderOnly:(BOOL)a2 error:(id *)a3;
- (id)computeDecodedCaptionsForFeaturesE5:(id)a0 withDecodingMethod:(long long)a1 runDecoderOnly:(BOOL)a2 error:(id *)a3;
- (id)computeDecodedCaptionsForFeaturesWithCSUBuffer:(id)a0 withDecodingMethod:(long long)a1 error:(id *)a2;
- (id)getBridgeLayerOutputE1:(id)a0 error:(id *)a1;
- (id)getBridgeLayerOutputE5:(id)a0 error:(id *)a1;
- (id)postProcessResults:(id)a0 error:(id *)a1;

@end
