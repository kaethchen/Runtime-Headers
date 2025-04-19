@class PGMemoryMomentNodesWithBlockedFeatureCache;

@interface PGMemoryTriggerRecentHighlights : PGMemoryTrigger {
    PGMemoryMomentNodesWithBlockedFeatureCache *_momentNodesWithBlockedFeatureCache;
}

- (void).cxx_destruct;
- (unsigned long long)triggerType;
- (id)initWithLoggingConnection:(id)a0 momentNodesWithBlockedFeatureCache:(id)a1;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;

@end
