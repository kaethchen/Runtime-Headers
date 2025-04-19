@class PGGraphSceneFeatureNodeCollection;

@interface PGMemoryTriggerRecentTrendsMoment : PGMemoryTrigger {
    PGGraphSceneFeatureNodeCollection *_trendsSceneFeatureNodes;
}

- (void).cxx_destruct;
- (unsigned long long)triggerType;
- (id)trendsSceneFeatureNodesInGraph:(id)a0;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;

@end
