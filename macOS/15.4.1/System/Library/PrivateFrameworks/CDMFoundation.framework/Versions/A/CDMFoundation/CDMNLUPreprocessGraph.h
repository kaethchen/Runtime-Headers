@interface CDMNLUPreprocessGraph : CDMServiceGraph

+ (int)getNLXSchemaCDMServiceGraphName;
+ (id)getUsageForAssetSetName:(long long)a0 withLocale:(id)a1;
+ (id)requiredDAGServices;
+ (BOOL)requiresAssets;

- (void)buildGraph;
- (Class)supportedGraphInputType;

@end
