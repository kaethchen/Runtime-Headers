@class NSDate, NSString, NSArray, NSMutableDictionary, NSDictionary, SSCAMetalLayerClientResourceUsageSnapshot, NSMutableArray, SSCAMetalLayerClientResourceUsageInterval, SSGameSessionInterval;

@interface SSCAMetalLayerClientSession : NSObject <SignpostJSONRepresentable, SSCAMLTimeInterval>

@property (retain, nonatomic) NSString *processName;
@property (nonatomic) int processID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) NSString *bundleShortVersion;
@property (retain, nonatomic) NSMutableArray *mutableResourceSnapshotTimeline;
@property (retain, nonatomic) SSGameSessionInterval *gameSession;
@property (readonly, nonatomic) NSMutableDictionary *mutableLayerIDToLayerSession;
@property (retain, nonatomic) SSCAMetalLayerClientResourceUsageSnapshot *earliestSnapshot;
@property (retain, nonatomic) SSCAMetalLayerClientResourceUsageSnapshot *latestSnapshot;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEvent;
@property (readonly, nonatomic) double timebaseRatio;
@property (readonly, nonatomic) NSArray *resourceSnapshotTimeline;
@property (readonly, nonatomic) NSDictionary *layerIDToLayerSession;
@property (readonly, nonatomic) SSCAMetalLayerClientResourceUsageInterval *overallResourceUsageInterval;
@property (readonly, nonatomic) NSArray *resourceUsageIntervalTimeline;
@property (readonly, nonatomic) BOOL includeTimelines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (double)durationMs;
- (id)jsonDescription:(unsigned long long)a0;
- (float)durationSeconds;
- (double)startMs;
- (id)_clientSessionFromLayerSessionDict:(id)a0 filteredResourceUsageSnapshots:(id)a1;
- (id)_dictionaryRepresentation:(BOOL)a0;
- (void)_handleResourceSnapshot:(id)a0;
- (id)_metalLayerSessionForID:(unsigned long long)a0 timebaseRatio:(double)a1;
- (id)clientSessionFilteredToStartDate:(id)a0 endDate:(id)a1 errorOut:(id *)a2;
- (id)clientSessionFilteredToStartMCT:(unsigned long long)a0 endMCT:(unsigned long long)a1 errorOut:(id *)a2;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)durationNanoseconds;
- (unsigned long long)endMachContinuousTime;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (id)initWithPID:(int)a0 includeTimelines:(BOOL)a1 timebaseRatio:(double)a2;
- (unsigned long long)startMachContinuousTime;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;

@end
