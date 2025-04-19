@class NSMutableString, SLScreenTelemetryConnection, PLXPCListenerOperatorComposition, SLDataTimelineConfig;

@interface PLWindowServerAgent : PLAgent

@property (retain) NSMutableString *report;
@property (retain) SLDataTimelineConfig *config;
@property (retain) SLScreenTelemetryConnection *frameStatsConn;
@property (retain) PLXPCListenerOperatorComposition *stageManagerListener;

+ (void)load;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitionFrameStats;
+ (id)entryEventForwardDefinitionStageManager;
+ (id)entryEventForwardDefinitionTimelineInfo;

- (id)init;
- (void).cxx_destruct;
- (void)establishConnection;
- (void)log;
- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
- (void)addChangedPID:(id)a0 windowsOrderedOut:(unsigned long long)a1 windowsOffScreen:(unsigned long long)a2 windowsOccluded:(unsigned long long)a3 windowsVisible:(unsigned long long)a4;
- (BOOL)getBuiltinDisplayID:(unsigned int *)a0 screen:(id *)a1;
- (void)getScreenPhysicalWidthInInches:(unsigned int)a0 width:(double *)a1 height:(double *)a2;
- (void)installTimelineConnection;
- (void)logEventForwardStageManager:(id)a0;
- (void)logEventForwardTimelineInfo:(id)a0 withPID:(int)a1 withnewProcess:(id)a2 withSnapshotTimestamp:(id)a3;
- (void)logFrameStatsFromData:(id)a0;
- (void)reportWithSessionID:(id)a0 timestamp:(double)a1 sessionSequenceIndex:(unsigned long long)a2;
- (void)setupFrameStatsConnection;

@end
