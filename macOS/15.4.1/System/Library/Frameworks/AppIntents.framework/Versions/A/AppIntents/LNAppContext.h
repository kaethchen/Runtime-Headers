@class NSURL, LNValue, LNExportedContentConfiguration, NSNumber, NSDictionary, LNAsyncSequenceReference, NSProgress, LNConfigurableQueryRequest, LNAsyncIteratorReference, LNStageContextRequest, NSString, LNAction, LNQueryOutput, NSArray, LNXPCListenerEndpointContainer, NSXPCConnection, NSError, NSUUID;
@protocol LNPerformActionExecutorDelegate;

@interface LNAppContext : NSObject

+ (void)cancelTimeout;
+ (struct { unsigned int x0[8]; } *)currentAuditToken;
+ (void)extendTimeout;

- (id)init;
- (void).cxx_destruct;
- (void)fetchURLForEnumWithIdentifier:(NSString *)a0 caseIdentifier:(NSString *)a1 completionHandler:(void (^)(NSURL *, NSError *))a2;
- (void)performQuery:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 connectionIdentifier:(id)a2 completionHandler:(void (^)(id, NSError *))a3;
- (void)createAsyncIteratorForSequence:(LNAsyncSequenceReference *)a0 options:(id)a1 connectionIdentifier:(id)a2 completionHandler:(void (^)(id, NSError *))a3;
- (void)exportTransientEntities:(NSArray *)a0 withConfiguration:(LNExportedContentConfiguration *)a1 connectionIdentifier:(NSNumber *)a2 completionHandler:(void (^)(LNValue *, NSError *))a3;
- (void)fetchActionAppContextForAction:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)fetchActionForAppShortcutIdentifier:(NSString *)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)fetchActionForAutoShortcutPhrase:(NSString *)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)fetchActionListenerEndpoint:(LNAction *)a0 auditToken:(struct { unsigned int x0[8]; })a1 connectionIdentifier:(long long)a2 completionHandler:(void (^)(LNXPCListenerEndpointContainer *, NSError *))a3;
- (void)fetchActionOutputValueForConnection:(NSXPCConnection *)a0 withIdentifier:(NSUUID *)a1 completionHandler:(void (^)(id, NSError *))a2;
- (void)fetchAppShortcutParametersWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;
- (void)fetchDestinationMDMAccountIdentifierForAction:(id)a0 completionHandler:(void (^)(NSString *, NSError *))a1;
- (void)fetchDisplayRepresentationForActions:(NSArray *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)fetchEntityURL:(id)a0 completionHandler:(void (^)(NSURL *, NSError *))a1;
- (void)fetchOptionsDefaultValuesForAction:(id)a0 connectionIdentifier:(id)a1 completionHandler:(void (^)(id, NSError *))a2;
- (void)fetchOptionsForAction:(id)a0 actionMetadata:(id)a1 parameterMetadata:(id)a2 optionsProviderReference:(id)a3 searchTerm:(id)a4 localeIdentifier:(id)a5 connectionIdentifier:(id)a6 completionHandler:(void (^)(id, NSError *))a7;
- (void)fetchParameterOptionDefaultValueForAction:(id)a0 actionMetadata:(id)a1 parameterIdentifier:(NSString *)a2 connectionIdentifier:(id)a3 completionHandler:(void (^)(id, NSError *))a4;
- (void)fetchStateForAppIntentIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchStructuredDataWithTypeIdentifier:(long long)a0 forEntityIdentifiers:(id)a1 completionHandler:(void (^)(id, NSError *))a2;
- (void)fetchSuggestedActionsForStartWorkoutAction:(id)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)fetchSuggestedActionsFromViewWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;
- (void)fetchSuggestedActionsWithSiriLanguageCode:(NSString *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)fetchSuggestedFocusActionsForActionMetadata:(id)a0 suggestionContext:(id)a1 completionHandler:(void (^)(NSArray *, NSError *))a2;
- (void)fetchURLsForEnumWithIdentifier:(NSString *)a0 completionHandler:(void (^)(NSDictionary *, NSError *))a1;
- (void)fetchValueForPropertyWithIdentifier:(NSString *)a0 entity:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 connectionIdentifier:(long long)a3 completionHandler:(void (^)(id, NSError *))a4;
- (void)fetchViewActionsWithCompletionHandler:(void (^)(id, NSError *))a0;
- (void)fetchViewEntitiesWithInteractionIDs:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)nextAsyncIteratorResults:(LNAsyncIteratorReference *)a0 connectionIdentifier:(id)a1 completionHandler:(void (^)(id, NSError *))a2;
- (void)performAction:(id)a0 options:(id)a1 reportingProgress:(NSProgress *)a2 delegate:(id<LNPerformActionExecutorDelegate>)a3 auditToken:(struct { unsigned int x0[8]; })a4 completionHandler:(void (^)(id, NSError *))a5;
- (void)performAllEntitiesQueryWithEntityMangledTypeName:(NSString *)a0 auditToken:(struct { unsigned int x0[8]; })a1 connectionIdentifier:(id)a2 completionHandler:(void (^)(id, NSError *))a3;
- (void)performConfigurableQuery:(LNConfigurableQueryRequest *)a0 auditToken:(struct { unsigned int x0[8]; })a1 connectionIdentifier:(NSNumber *)a2 completionHandler:(void (^)(LNQueryOutput *, NSError *))a3;
- (void)performSuggestedEntitiesQueryWithEntityMangledTypeName:(NSString *)a0 auditToken:(struct { unsigned int x0[8]; })a1 connectionIdentifier:(id)a2 completionHandler:(void (^)(id, NSError *))a3;
- (void)performSuggestedResultsQueryWithEntityType:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 connectionIdentifier:(id)a2 completionHandler:(void (^)(id, NSError *))a3;
- (void)releaseAsyncSequence:(LNAsyncSequenceReference *)a0 connectionIdentifier:(id)a1 completionHandler:(void (^)(NSError *))a2;
- (void)removeAllDeferredOutputsFor:(id)a0;
- (void)removeContextForConnection:(id)a0;
- (void)stageContextWithRequest:(LNStageContextRequest *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)updateAppShortcutParametersWithCompletionHandler:(void (^)(NSError *))a0;
- (void)updateContextForConnection:(NSXPCConnection *)a0 context:(id)a1 completionHandler:(void (^)(NSError *))a2;
- (void)updateProperties:(id)a0 withQuery:(id)a1 completionHandler:(void (^)(NSError *))a2;

@end
