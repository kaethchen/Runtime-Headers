@class NSLock, CDMDataDispatcherContext, NSMutableDictionary, NSString, NSError, NSMutableArray, CDMServiceGraphNode;

@interface CDMServiceGraph : NSObject {
    NSMutableArray *_nodes;
    NSMutableDictionary *_nodesWithName;
    NSMutableDictionary *_serviceMap;
    NSMutableDictionary *_graphServiceMap;
    id _graphOutput;
    id _graphInput;
    NSString *_language;
    NSString *_handlerId;
    CDMServiceGraphNode *_endNode;
    NSLock *_aneLock;
    NSMutableDictionary *_skipNodes;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) CDMDataDispatcherContext *cdmDataDispatcherContext;
@property (retain) NSMutableArray *serviceMetrics;

+ (int)getNLXSchemaCDMServiceGraphName;
+ (void)dispatchServiceGraphHandleMetricsLogging:(id)a0 requestId:(id)a1 dataDispatcherContext:(id)a2;
+ (void)dispatchServiceGraphRequestLogging:(id)a0 dataDispatcherContext:(id)a1;
+ (void)dispatchServiceGraphResponseLogging:(id)a0 requestId:(id)a1 dataDispatcherContext:(id)a2;
+ (id)getAssetsForSetup:(id)a0;
+ (int)getCdmRequesterWithConnectionId:(id)a0;
+ (id)getUsageForAssetSetName:(long long)a0 withLocale:(id)a1;
+ (BOOL)isServiceRequiredForSetup:(id)a0;
+ (id)requestFeatureStoreStreamId;
+ (id)requiredCDMGraphServices;
+ (id)requiredDAGServices;
+ (BOOL)requiresAssets;
+ (id)responseFeatureStoreStreamId;
+ (id)serializeFeatureStoreWithRequestCmd:(id)a0;
+ (id)serializeFeatureStoreWithResponseCmd:(id)a0;
+ (BOOL)shouldSkipNode:(id)a0 service:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isAcyclic;
- (void)failedWithError:(id)a0;
- (id)getError;
- (id)getLanguage;
- (id)getNodes;
- (id)getSkippedNodes;
- (void)setGraphOutput:(id)a0;
- (id)addNodeWithName:(id)a0 aneEnabled:(BOOL)a1 requestId:(id)a2 block:(id /* block */)a3;
- (id)addNodeWithName:(id)a0 bindService:(id)a1 aneEnabled:(BOOL)a2 requestId:(id)a3 block:(id /* block */)a4;
- (id)addNodeWithName:(id)a0 bindService:(id)a1 requestId:(id)a2 block:(id /* block */)a3;
- (id)addNodeWithName:(id)a0 requestId:(id)a1 block:(id /* block */)a2;
- (void)buildGraph;
- (void)buildGraphInternal;
- (void)failedWithErrorCode:(long long)a0 errorDomain:(id)a1 message:(id)a2;
- (id)getEndNode;
- (id)getGraphInput;
- (id)getGraphOutput;
- (id)getGraphServiceByClass:(Class)a0;
- (id)getHandlerId;
- (id)getNodesWithName;
- (id)getServiceByClass:(Class)a0;
- (id)initWithServices:(id)a0 graphInput:(id)a1 languageCode:(id)a2 handlerId:(id)a3 aneLock:(id)a4 dataDispatcherContext:(id)a5;
- (id)initWithServices:(id)a0 graphServices:(id)a1 graphInput:(id)a2 languageCode:(id)a3 handlerId:(id)a4 aneLock:(id)a5 dataDispatcherContext:(id)a6;
- (void)populateRequesterEnumForNluRequest:(id)a0;
- (void)skipNode:(id)a0 basedOnNode:(id)a1 withCondition:(id /* block */)a2;
- (Class)supportedGraphInputType;
- (id)toMermaid;
- (id)topoSort;
- (id)validateRequest:(id)a0;

@end
