@class QueryRewriter, _TtC13CDMFoundation27CDMCcqrAerCbROverridesProxy;
@protocol NLAsset;

@interface CDMCcqrAerCbRService : CDMDAGBaseService {
    id<NLAsset> _nlAsset;
    _TtC13CDMFoundation27CDMCcqrAerCbROverridesProxy *_overrideProxy;
}

@property (readonly, nonatomic) int modelType;
@property (retain, nonatomic) QueryRewriter *ccqrPredictor;
@property (nonatomic) BOOL useMemoryForOverrideStore;

+ (BOOL)isEnabled;
+ (void)CcqrAerCbRServiceLogInitIfNeeded;
+ (id)getCDMServiceAssetConfig;
+ (BOOL)suppressCcqrUsingCurContext:(id)a0;

- (void).cxx_destruct;
- (id)match:(id)a0;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (id)warmup:(id)a0;
- (void)configureUseMemoryForOverrideStore;
- (id)createSetupResponseWithError:(id)a0;
- (void)debugCcqrResponse:(id)a0;
- (id)doInference:(id)a0 status:(id *)a1;
- (id)getPredictor:(id)a0 FilesPath:(id)a1 modelType:(id)a2 status:(id *)a3;
- (id)handleRequestCommandTypeNames;
- (BOOL)skipServiceSetup:(id)a0;

@end
