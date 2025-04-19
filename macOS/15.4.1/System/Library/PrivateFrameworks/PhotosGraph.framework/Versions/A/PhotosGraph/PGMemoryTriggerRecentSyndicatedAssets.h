@class PGMemoryMomentNodesWithBlockedFeatureCache;

@interface PGMemoryTriggerRecentSyndicatedAssets : PGPhotoKitMemoryTrigger {
    PGMemoryMomentNodesWithBlockedFeatureCache *_momentNodesWithBlockedFeatureCache;
}

- (void).cxx_destruct;
- (unsigned long long)triggerType;
- (id)initWithLoggingConnection:(id)a0 photoLibrary:(id)a1 momentNodesWithBlockedFeatureCache:(id)a2;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;
- (BOOL)supportsFutureLookup;

@end
