@interface MobileTimerSupport.MTStopwatchStorageProxy : NSObject <MTStopwatchStorageProtocol> {
    void /* unknown type, empty encoding */ stopwatchActor;
    void /* unknown type, empty encoding */ observerStore;
}

- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)createStopWatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)deleteStopwatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)didAddLap:(id)a0 forStopwatch:(id)a1 withCompletion:(id /* block */)a2 source:(id)a3;
- (void)didClearAllLapsForStopwatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)didLapLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)didPauseLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)didResetLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)didResumeLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)didStartLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)getStopwatchesWitchCompletion:(id /* block */)a0;
- (void)setSystemReady;
- (void)updateStopwatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;

@end
