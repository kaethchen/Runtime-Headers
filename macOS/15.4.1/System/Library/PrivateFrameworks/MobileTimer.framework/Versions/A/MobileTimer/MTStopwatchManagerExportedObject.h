@class MTStopwatchManager, NSString;

@interface MTStopwatchManagerExportedObject : NSObject <MTStopwatchClient, MTStopwatchPublishing>

@property (readonly, weak, nonatomic) MTStopwatchManager *stopwatchManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_didReceiveTimerServerReadyNotification:(id)a0;
- (void)didAddLap:(id)a0 forStopwatch:(id)a1;
- (void)didAddLap:(id)a0 forStopwatch:(id)a1 source:(id)a2;
- (void)didClearAllLapsForStopwatch:(id)a0;
- (void)didClearAllLapsForStopwatch:(id)a0 source:(id)a1;
- (void)didCreateStopwatch:(id)a0;
- (void)didDeleteStopwatch:(id)a0;
- (void)didLapLapTimerForStopwatch:(id)a0;
- (void)didLapLapTimerForStopwatch:(id)a0 source:(id)a1;
- (void)didPauseLapTimerForStopwatch:(id)a0;
- (void)didPauseLapTimerForStopwatch:(id)a0 source:(id)a1;
- (void)didResetLapTimerForStopwatch:(id)a0;
- (void)didResetLapTimerForStopwatch:(id)a0 source:(id)a1;
- (void)didResumeLapTimerForStopwatch:(id)a0;
- (void)didResumeLapTimerForStopwatch:(id)a0 source:(id)a1;
- (void)didStartLapTimerForStopwatch:(id)a0;
- (void)didStartLapTimerForStopwatch:(id)a0 source:(id)a1;
- (void)didUpdateStopwatch:(id)a0;
- (id)initWithStopwatchManager:(id)a0;
- (void)publishEvent:(id)a0 withStopwatch:(id)a1;
- (void)publishEvent:(id)a0 withStopwatch:(id)a1 modifiedItem:(id)a2;
- (void)publishEvent:(id)a0 withStopwatch:(id)a1 modifiedItem:(id)a2 source:(id)a3;
- (void)publishEvent:(id)a0 withStopwatch:(id)a1 source:(id)a2;

@end
