@class NSString, _TtC18MobileTimerSupport18StopwatchViewModel, MTStopwatch;

@interface MTStopwatchViewModel : NSObject <MTStopwatchViewModelProtocol, MTSource>

@property (retain, nonatomic) _TtC18MobileTimerSupport18StopwatchViewModel *viewModel;
@property (readonly, nonatomic, getter=getStopwatch) MTStopwatch *stopwatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)sourceIdentifier;
- (void)updateTime;
- (void)invalidateDisplayLink;
- (void)updateStopwatch:(id)a0;
- (void)addLap:(double)a0;
- (void)clearAllLaps;
- (id)initWithStopwatch:(id)a0 manager:(id)a1 delegate:(id)a2 dateProvider:(id)a3 registerForNotifications:(BOOL)a4 broadcastUpdates:(BOOL)a5;
- (void)lapLapTimer;
- (void)pauseLapTimer;
- (void)resetLapTimer;
- (void)resumeLapTimer;
- (double)runningTotalForLap:(long long)a0;
- (void)startLapTimer;
- (void)updateWithDisplayLink;

@end
