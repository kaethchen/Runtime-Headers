@class PLDiscretionaryEnergyMonitor, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface PLDiscretionaryIntervalManager : NSObject

@property (retain) NSMutableDictionary *identifierToDiscretionaryIntervals;
@property (retain) NSMutableDictionary *activityNameToInvolvedIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *openIntervalTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *powerlogReportTimer;
@property (weak, nonatomic) PLDiscretionaryEnergyMonitor *discretionaryEnergyMonitor;
@property (nonatomic) BOOL quickEnergyEnabled;
@property (retain) NSMutableDictionary *mockData;

- (void).cxx_destruct;
- (id)coalesceIntervals:(id)a0;
- (id)createOpenIntervalTimer;
- (id)createPowerlogReportTimer;
- (void)disableQuickEnergy;
- (void)enableQuickEnergy;
- (void)handleOpenIntervalTimer;
- (void)handlePowerlogReportTimer;
- (void)handleStartEvent:(id)a0 withInfo:(id)a1;
- (void)handleStopEvent:(id)a0 withInfo:(id)a1;
- (id)initWithEnergyMonitor:(id)a0 andMockData:(id)a1;
- (void)logActivityNameToInvolvedIdentifiers;
- (void)logDiscretionaryIntervals;
- (void)reportIntervalsToPowerlog;
- (void)reportQuickEnergyForInterval:(id)a0 withIdentifier:(id)a1 andAdjustSnapshotToNow:(BOOL)a2;

@end
