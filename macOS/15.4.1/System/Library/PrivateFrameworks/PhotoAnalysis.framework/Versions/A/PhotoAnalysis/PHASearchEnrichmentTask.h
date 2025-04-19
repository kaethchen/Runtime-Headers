@interface PHASearchEnrichmentTask : PHAEnrichmentTask

- (int)priority;
- (double)period;
- (BOOL)currentPlatformIsSupported;
- (id)enrichmentProcessor;
- (id)incrementalKey;
- (double)incrementalWindow;
- (BOOL)shouldRunIncrementallyWithGraphManager:(id)a0 incrementalChange:(id)a1 timeIntervalSinceNonIncrementalRun:(double)a2;
- (id)taskClassDependencies;
- (void)timeoutFatal:(BOOL)a0;

@end
