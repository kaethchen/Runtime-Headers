@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *notification;
@property (retain) PLXPCListenerOperatorComposition *cMFileListener;
@property (retain) PLXPCListenerOperatorComposition *cMHlsListener;
@property (retain) PLXPCListenerOperatorComposition *cMCrabsListener;
@property (retain) PLXPCListenerOperatorComposition *cMVideoQueueListener;
@property (retain) PLXPCListenerOperatorComposition *vTSessionListener;
@property (retain) PLXPCListenerOperatorComposition *vTTileListener;
@property (retain) PLXPCListenerOperatorComposition *groupSessionListener;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitionGroupSession;
+ (id)stateEnumForStateString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventBackwardCMHlsWithEntry:(id)a0;
- (void)logEventBackwardCMCrabsWithEntry:(id)a0;
- (void)logEventBackwardCMFileWithEntry:(id)a0;
- (void)logEventBackwardCMVideoQueueWithEntry:(id)a0;
- (void)logEventBackwardVTSessionWithEntry:(id)a0;
- (void)logEventBackwardVTTileWithEntry:(id)a0;
- (void)logEventForwardVideoWithEntry:(id)a0;
- (void)logEventIntervalGroupSession:(id)a0;

@end
