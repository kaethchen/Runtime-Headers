@interface CDMHelloWorldServiceGraph : CDMServiceGraph

+ (int)getNLXSchemaCDMServiceGraphName;
+ (id)getAssetsForSetup:(id)a0;
+ (id)getUsageForAssetSetName:(long long)a0 withLocale:(id)a1;
+ (id)requiredDAGServices;

- (void)buildGraph;
- (Class)supportedGraphInputType;

@end
