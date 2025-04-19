@class SNLPServerNLClassifier;
@protocol NLAsset;

@interface CDMSNLCProtoService : CDMDAGBaseService {
    SNLPServerNLClassifier *_snlcOrchestrator;
    id<NLAsset> _nlAsset;
}

+ (id)_stockServerResponse;
+ (id)getCDMServiceAssetConfig;
+ (id)getParserEnum;

- (void).cxx_destruct;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (id)warmup:(id)a0;
- (id)assetsPathURLForModelBundle:(id)a0;
- (id)doInference:(id)a0 error:(id *)a1;
- (id)getSNLPServerNLClassifierPath:(id)a0 error:(id *)a1;
- (id)handleRequestCommandTypeNames;

@end
