@class SNLPLanguageVariantClassifier, SiriNLUOverrideProxy;
@protocol NLAsset;

@interface CDMLVCService : CDMDAGBaseService {
    SNLPLanguageVariantClassifier *_lvcOrchestrator;
    SiriNLUOverrideProxy *_overrideProxy;
    id<NLAsset> _nlAsset;
}

+ (BOOL)isEnabled;
+ (id)assetsPathURLForModelBundle:(id)a0;
+ (id)buildMultiLingualVariant:(id)a0;
+ (id)getCDMServiceAssetConfig;

- (void).cxx_destruct;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (id)warmup:(id)a0;
- (void)_prewarmModelWithEmbeddingConfigItem:(id)a0;
- (id)doInference:(id)a0 error:(id *)a1;
- (id)getSNLPLanguageVariantClassifierPath:(id)a0 error:(id *)a1;
- (id)handleRequestCommandTypeNames;
- (BOOL)initializeLVCOverrides:(id)a0;

@end
