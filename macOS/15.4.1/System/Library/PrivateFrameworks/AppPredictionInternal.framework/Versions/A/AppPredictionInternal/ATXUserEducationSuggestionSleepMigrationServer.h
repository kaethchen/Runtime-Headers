@class ATXInstalledSuggestedPagesTracker, ATXHomeScreenConfigCache, ATXUserEducationSuggestionConnector;

@interface ATXUserEducationSuggestionSleepMigrationServer : ATXUserEducationSuggestionBaseServer <ATXUserEducationSuggestionModeChangeObserver> {
    ATXUserEducationSuggestionConnector *_connector;
    ATXInstalledSuggestedPagesTracker *_installedSuggestedPagesTracker;
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_processModeChangeEvent:(id)a0;
- (id)initWithConnector:(id)a0;
- (void)processModeChangeEvent:(id)a0;
- (void)sendSuggestion:(id)a0 withEventType:(unsigned long long)a1;

@end
