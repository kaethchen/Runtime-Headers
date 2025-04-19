@class NSBundle, NSMutableArray;
@protocol NLAsset;

@interface CDMCATIProtoService : CDMDAGBaseService {
    NSBundle *_catiBundle;
    NSMutableArray *_childServices;
    long long _assetVersion;
    id<NLAsset> _nlAsset;
}

+ (BOOL)isEnabled;
+ (id)getCDMServiceAssetConfig;

- (void).cxx_destruct;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (long long)getServiceState;
- (id)getChildServices;
- (id)handleRequestCommandTypeNames;
- (id)setupErrorResponse:(id)a0 serviceState:(long long)a1;

@end
