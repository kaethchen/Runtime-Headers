@class NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface ATXActionPredictionServer : NSObject <NSXPCListenerDelegate, ATXActionPredictionInterface, ATXProactiveSuggestionRealTimeProviderDelegateProtocol> {
    NSXPCListener *_listener;
    BOOL _checkEntitlements;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initAnonymousListener;
- (void)pingWithCompletion:(id /* block */)a0;
- (void)suggestionsForIntentSuggestionRequest:(id)a0 clientModelId:(id)a1 reply:(id /* block */)a2;
- (void)getActionPredictionsForCandidateBundleIdentifiers:(id)a0 candidateActionTypes:(id)a1 consumerType:(unsigned long long)a2 consumerSubType:(unsigned char)a3 limit:(int)a4 reply:(id /* block */)a5;
- (void)getActionPredictionsForContext:(id)a0 includeBundleIds:(id)a1 excludeBundleIds:(id)a2 includeActionTypes:(id)a3 excludeActionTypes:(id)a4 limit:(unsigned long long)a5 reply:(id /* block */)a6;
- (void)removeActionPredictionNotificationsMatchingSuggestion:(id)a0 reply:(id /* block */)a1;
- (void)shouldDisplayDailyRoutineForContext:(id)a0 reply:(id /* block */)a1;
- (id)behavioralModelSuggestionsForRequest:(id)a0;
- (id)filteredCachedIntentSuggestionsForClientModelId:(id)a0 request:(id)a1;
- (id)initWithListener:(id)a0 checkEntitlements:(BOOL)a1;
- (void)registerForRealTimeRequestsWithBlendingLayerServer:(id)a0;

@end
