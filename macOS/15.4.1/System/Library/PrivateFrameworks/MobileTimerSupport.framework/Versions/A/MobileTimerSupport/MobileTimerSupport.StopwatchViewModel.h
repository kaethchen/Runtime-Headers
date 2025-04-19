@interface MobileTimerSupport.StopwatchViewModel : NSObject <MTSource, MTStopwatchViewModelProtocol> {
    void /* unknown type, empty encoding */ broadcastUpdates;
    void /* unknown type, empty encoding */ internalStopwatch;
    void /* unknown type, empty encoding */ dateProvider;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ syncManager;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ updatedCancellable;
    void /* unknown type, empty encoding */ lapAddedCancellable;
    void /* unknown type, empty encoding */ clearAllLapsCancellable;
    void /* unknown type, empty encoding */ startLapTimerCancellable;
    void /* unknown type, empty encoding */ pauseLapTimerCancellable;
    void /* unknown type, empty encoding */ lapLapTimerCancellable;
    void /* unknown type, empty encoding */ resetLapTimerCancellable;
    void /* unknown type, empty encoding */ resumeLapTimerCancellable;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)sourceIdentifier;
- (void)updateTime;
- (void)invalidateDisplayLink;
- (void)updateStopwatch:(id)a0;
- (void)addLap:(double)a0;
- (void)clearAllLaps;
- (id)getStopwatch;
- (id)initWithStopwatch:(id)a0 manager:(id)a1 delegate:(id)a2 dateProvider:(id)a3 registerForNotifications:(BOOL)a4 broadcastUpdates:(BOOL)a5;
- (void)lapLapTimer;
- (void)pauseLapTimer;
- (void)resetLapTimer;
- (void)resumeLapTimer;
- (double)runningTotalForLap:(long long)a0;
- (void)startLapTimer;
- (void)updateWithDisplayLink;

@end
