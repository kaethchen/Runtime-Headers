@class PLStateTrackingComposition, NSMutableDictionary, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, NSDate;

@interface PLIOReportMetricsAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChangedNotifications;
@property (retain) PLEntryNotificationOperatorComposition *screenstateChangedNotifications;
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification;
@property (retain) PLNSNotificationOperatorComposition *enhancedScreenStateChangeListener;
@property (retain) PLStateTrackingComposition *stateTracker;
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsSignificantBattery;
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsScreenState;
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsSnapshot;
@property (retain, nonatomic) NSMutableDictionary *sampleChannelsCustom;
@property (retain) NSDate *lastEntryDate;

+ (void)load;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (BOOL)isDynamicTable:(id)a0;
- (id)buildCustomSet:(struct IOReportGroupChecks { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a0;
- (struct IOReportGroupChecks { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })initGroupChecks;
- (void)logInit;
- (BOOL)allowlistedChannel:(id)a0;
- (id)buildBaseSet:(struct IOReportGroupChecks { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a0;
- (id)buildScreenStateSet:(struct IOReportGroupChecks { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a0;
- (id)buildSnapshotSet:(struct IOReportGroupChecks { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a0;
- (id)channelDictionaryWithChannelSet:(id)a0;
- (id)createCategoryString:(id)a0 forSubgroup:(id)a1;
- (void)logDisplayOffAPWake;
- (void)logIOReportEntry:(id)a0 forCategory:(id)a1 withEntryDate:(id)a2 withAPWakeTime:(double)a3 isInterval:(BOOL)a4;
- (void)logIOReportIntervals:(id)a0 forChannelGroup:(id)a1;
- (void)logIOReportSnapshots:(id)a0;
- (void)logSBC;
- (void)logScreenStateChange;
- (id)sampleDeltaForChannelGroup:(id)a0;
- (void)sampleDeltaForChannelSets;
- (id)sampleSnapshotForChannelGroup:(id)a0;
- (void)subscribeToChannelSets;

@end
