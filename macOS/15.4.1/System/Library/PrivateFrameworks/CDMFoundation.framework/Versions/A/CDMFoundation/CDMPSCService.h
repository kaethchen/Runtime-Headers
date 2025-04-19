@class SNLPPommesServerClassifier;
@protocol NLAsset;

@interface CDMPSCService : CDMDAGBaseService {
    SNLPPommesServerClassifier *_pscOrchestrator;
    id<NLAsset> _nlAsset;
}

+ (BOOL)isEnabled;
+ (id)_emptyResponse;
+ (id)getCDMServiceAssetConfig;

- (void).cxx_destruct;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (id)warmup:(id)a0;
- (id)assetsPathURLForModelBundle:(id)a0;
- (id)doInference:(id)a0 error:(id *)a1;
- (id)getSNLPPommesServerClassifierPath:(id)a0 error:(id *)a1;
- (id)handleRequestCommandTypeNames;

@end
