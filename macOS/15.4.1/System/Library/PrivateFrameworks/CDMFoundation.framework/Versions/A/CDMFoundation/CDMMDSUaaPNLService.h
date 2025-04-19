@protocol NLAsset;

@interface CDMMDSUaaPNLService : CDMUaaPNLProtoService {
    id<NLAsset> _nlAsset;
}

+ (BOOL)isEnabled;
+ (id)getCDMServiceAssetConfig;

- (void).cxx_destruct;
- (id)setup:(id)a0;
- (int)getOverrideNamespace;

@end
