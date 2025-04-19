@class NSMutableDictionary, MLModel, NSURL, MLModelConfiguration, MLDictionaryFeatureProvider, NSDictionary;
@protocol MLFeatureProvider;

@interface CSUCoreMLInference : NSObject {
    NSURL *_modelURL;
    MLModel *_model;
    MLModelConfiguration *_config;
    MLDictionaryFeatureProvider *_featsProvider;
    id<MLFeatureProvider> _outputs;
    NSDictionary *_pixelBufferAttributesForIOSurfaceBacking;
    NSMutableDictionary *_outputBackings;
    NSDictionary *_inputDescriptionsByName;
}

- (void).cxx_destruct;
- (BOOL)predict:(id *)a0;
- (id)getInputMLMutliArrayFor:(id)a0 WithShape:(id)a1 error:(id *)a2;
- (id)getInputMLMutliArrayFor:(id)a0 error:(id *)a1;
- (void)getMLModelConfigWithFuncName:(id)a0 ComputeUnit:(long long)a1 PrecompiledE5Bundle:(BOOL)a2;
- (id)getOutputFor:(id)a0;
- (id)initWithCompiledModelFromUri:(id)a0 useComputeUnit:(long long)a1 usePrecompiledE5Bundle:(BOOL)a2 error:(id *)a3;
- (id)initWithCompiledModelFromUri:(id)a0 useFunction:(id)a1 useComputeUnit:(long long)a2 usePrecompiledE5Bundle:(BOOL)a3 error:(id *)a4;
- (BOOL)setInputFeatures:(id)a0 error:(id *)a1;
- (void)setOutputBufferWithLayerName:(id)a0 withWidth:(unsigned long long)a1 withHeight:(unsigned long long)a2 withShape:(id)a3 withPixelFormat:(unsigned int)a4 error:(id *)a5;

@end
