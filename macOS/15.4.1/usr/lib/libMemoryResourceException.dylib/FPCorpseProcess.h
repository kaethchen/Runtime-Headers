@interface FPCorpseProcess : FPUserProcess

- (void)_gatherProcessState;
- (BOOL)_isAlive;
- (BOOL)_populateTask;

@end
