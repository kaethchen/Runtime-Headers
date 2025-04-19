@class SiriNLUOverrideProxy;
@protocol NLAsset;

@interface CDMOverridesProtoService : CDMDAGBaseService {
    id<NLAsset> _nlAsset;
}

@property (readonly, nonatomic) SiriNLUOverrideProxy *store;

+ (BOOL)isEnabled;
+ (id)getCDMServiceAssetConfig;

- (void)dealloc;
- (void).cxx_destruct;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (id)setupFailedFor:(id)a0;
- (id)warmup:(id)a0;
- (id)buildOverridesTurnInputAndPreprocessing;
- (id)createSetupErrorCmd:(id)a0;
- (id)handleRequestCommandTypeNames;
- (id)matchOverride:(id)a0 shouldAppend:(BOOL *)a1;
- (id)setupSucceeded;

@end
