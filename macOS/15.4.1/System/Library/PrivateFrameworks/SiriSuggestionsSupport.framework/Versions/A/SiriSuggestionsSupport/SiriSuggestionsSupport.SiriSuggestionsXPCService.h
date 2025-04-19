@interface SiriSuggestionsSupport.SiriSuggestionsXPCService : _TtCs12_SwiftObject <SiriSuggestionsAPI.SiriSuggestionsXPCInterface> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ eventDrivenClient;
    void /* unknown type, empty encoding */ connectedAppId;
    void /* unknown type, empty encoding */ accessList;
    void /* unknown type, empty encoding */ autoCompleteService;
    void /* unknown type, empty encoding */ offlineGenerationClient;
}

- (void)disconnectForAppWithAppBundleId:(id)a0 placementId:(id)a1 completionHandler:(id /* block */)a2;
- (void)getAutocompletePhraseWithQuery:(id)a0 using:(id)a1 completionHandler:(id /* block */)a2;
- (void)getSuggestionsForAppWithAppBundleId:(id)a0 placementId:(id)a1 entities:(id)a2 intentsToSuggest:(id)a3 bridge:(id)a4 completionHandler:(id /* block */)a5;
- (void)getSuggestionsForIntentsWithIntentQueries:(id)a0 completionHandler:(id /* block */)a1;
- (void)logEngagementFor:(id)a0 intent:(id)a1 completion:(id /* block */)a2;
- (void)logWithSuggestions:(id)a0 deliveryVehicle:(id)a1 generationId:(id)a2 completion:(id /* block */)a3;
- (void)refreshServiceWithCompletion:(id /* block */)a0;
- (void)submitFor:(id)a0 propertyKey:(id)a1 propertyValue:(id)a2 completion:(id /* block */)a3;
- (void)submitFor:(id)a0 stateStoreProperties:(id)a1 completion:(id /* block */)a2;
- (void)suggestNextWithRequestId:(id)a0 extraStateStoreProperties:(id)a1 completionHandler:(id /* block */)a2;
- (void)warmupWithCompletion:(id /* block */)a0;

@end
