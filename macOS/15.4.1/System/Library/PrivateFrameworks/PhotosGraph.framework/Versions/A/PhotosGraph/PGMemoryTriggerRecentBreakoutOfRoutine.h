@class PGNeighborScoreComputer;

@interface PGMemoryTriggerRecentBreakoutOfRoutine : PGMemoryTrigger {
    PGNeighborScoreComputer *_neighborScoreComputer;
}

- (void).cxx_destruct;
- (unsigned long long)triggerType;
- (id)neighborScoreComputerWithGraph:(id)a0;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0;
- (id)resultsTriggeredWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;

@end
