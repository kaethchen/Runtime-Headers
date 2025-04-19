@interface PHAGraphForceGraphRebuildTask : PHAGraphRebuildTask

- (id)name;
- (int)priority;
- (double)period;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)taskClassDependencies;

@end
