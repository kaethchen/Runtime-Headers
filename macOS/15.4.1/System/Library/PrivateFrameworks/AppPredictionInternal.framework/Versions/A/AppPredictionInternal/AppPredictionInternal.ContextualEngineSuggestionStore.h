@interface AppPredictionInternal.ContextualEngineSuggestionStore : NSObject <ATXSuggestionModeFilterObserver> {
    void /* unknown type, empty encoding */ contextStore;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ actionToWidgetConverter;
    void /* unknown type, empty encoding */ modeFilter;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ disabledHeuristicSourceIdentifiers;
    void /* unknown type, empty encoding */ allowedAmbientClientModelTypes;
}

- (id)init;
- (void).cxx_destruct;
- (void)configurationDidChangeForFilter:(id)a0;

@end
