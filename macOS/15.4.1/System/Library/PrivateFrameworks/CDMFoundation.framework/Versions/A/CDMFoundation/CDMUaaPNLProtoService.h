@class NSSet, UPModelBundle;
@protocol NLAsset;

@interface CDMUaaPNLProtoService : CDMDAGBaseService {
    UPModelBundle *__coreModelBundle;
    NSSet *__appModelBundles;
    BOOL __useMemoryForOverrideStore;
    id<NLAsset> _nlAsset;
}

+ (BOOL)isEnabled;
+ (id)createErrorResponse:(id)a0;
+ (id)detectForegroundAppForLocale:(id)a0;
+ (id)getCDMServiceAssetConfig;
+ (id)loadAppModelBundles:(id)a0;
+ (id)loadModelBundle:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (int)getOverrideNamespace;
- (id)handleRequestCommandTypeNames;
- (void)loadOverrides:(id)a0;

@end
