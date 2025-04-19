@interface PLContinuityAgent : PLAgent

+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionAutoUnlock;
+ (long long)unlockPeerTypeStringToEnum:(id)a0;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;

@end
