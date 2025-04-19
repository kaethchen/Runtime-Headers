@class LNAppContext, NSMapTable, NSXPCConnection, LNConnectionListener, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface LNClientConnection : NSObject <LNConnectionHostInterface, LNPerformActionOperationDelegate>

@property (readonly, nonatomic) NSMapTable *performActionOperations;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) LNConnectionListener *connectionListener;
@property (readonly, nonatomic) LNAppContext *appContext;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { unsigned int x0[8]; } *)currentAuditToken;
+ (void)performWithoutTimeout:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)fetchURLForEnumWithIdentifier:(id)a0 caseIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)createAsyncIteratorForSequence:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)enqueuePerformActionOperation:(id)a0;
- (void)exportTransientEntities:(id)a0 withConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchActionAppContextFromAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchActionForAppShortcutIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchActionForAutoShortcutPhrase:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchActionOutputValueWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAppShortcutParametersWithCompletionHandler:(id /* block */)a0;
- (void)fetchDestinationMDMAccountIdentifierForAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDisplayRepresentationForActions:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchEntityURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchOptionsDefaultValuesForAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchOptionsForAction:(id)a0 actionMetadata:(id)a1 parameterMetadata:(id)a2 optionsProviderReference:(id)a3 searchTerm:(id)a4 localeIdentifier:(id)a5 completionHandler:(id /* block */)a6;
- (void)fetchParameterOptionDefaultValueForAction:(id)a0 actionMetadata:(id)a1 parameterIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchStateForAppIntentIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchStructuredDataWithTypeIdentifier:(long long)a0 forEntityIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchSuggestedActionsForStartWorkoutAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSuggestedActionsFromViewWithCompletionHandler:(id /* block */)a0;
- (void)fetchSuggestedActionsWithSiriLanguageCode:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSuggestedFocusActionsForActionMetadata:(id)a0 suggestionContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchURLsForEnumWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchValueForPropertyWithIdentifier:(id)a0 entity:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchViewActionsWithCompletionHandler:(id /* block */)a0;
- (void)fetchViewEntitiesWithInteractionIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)getListenerEndpointForBundleIdentifier:(id)a0 action:(id)a1 completionHandler:(id /* block */)a2;
- (void)getListenerEndpointWithCompletionHandler:(id /* block */)a0;
- (id)initWithConnection:(id)a0 connectionListener:(id)a1 queue:(id)a2 appContext:(id)a3;
- (void)nextAsyncIteratorResults:(id)a0 completionHandler:(id /* block */)a1;
- (void)performAction:(id)a0 options:(id)a1 executor:(id)a2 completionHandler:(id /* block */)a3;
- (void)performActionOperation:(id)a0 didFinishWithResult:(id)a1 error:(id)a2;
- (void)performAllEntitiesQueryWithEntityMangledTypeName:(id)a0 completionHandler:(id /* block */)a1;
- (void)performConfigurableQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)performPropertyQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)performSuggestedEntitiesQueryWithEntityMangledTypeName:(id)a0 completionHandler:(id /* block */)a1;
- (void)performSuggestedResultsQueryWithEntityType:(id)a0 completionHandler:(id /* block */)a1;
- (void)releaseAsyncSequence:(id)a0 completionHandler:(id /* block */)a1;
- (void)removePerformActionOperation:(id)a0;
- (void)stageContextWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateAppShortcutParametersWithCompletionHandler:(id /* block */)a0;
- (void)updateConnectionContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateProperties:(id)a0 withQuery:(id)a1 completionHandler:(id /* block */)a2;

@end
