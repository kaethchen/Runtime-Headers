@interface CDMPlannerServiceGraph : CDMServiceGraph

+ (int)getNLXSchemaCDMServiceGraphName;
+ (id)requiredCDMGraphServices;
+ (id)requiredDAGServices;
+ (id)responseFeatureStoreStreamId;
+ (id)serializeFeatureStoreWithResponseCmd:(id)a0;

- (void)buildGraph;
- (Class)supportedGraphInputType;

@end
