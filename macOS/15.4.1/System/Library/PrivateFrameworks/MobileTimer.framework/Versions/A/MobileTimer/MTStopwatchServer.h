@class MTStopwatchStorage, NSString, MTXPCConnectionListenerProvider, NSObject;
@protocol OS_dispatch_queue;

@interface MTStopwatchServer : NSObject <MTStopwatchServer, MTStopwatchStoreObserver>

@property (retain, nonatomic) MTStopwatchStorage *storage;
@property (readonly, nonatomic) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (readonly, nonatomic) BOOL systemReady;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)startListening;
- (void)stopListening;
- (id)initWithStorage:(id)a0;
- (void)checkIn;
- (void)createStopwatch:(id)a0 withCompletion:(id /* block */)a1;
- (void)deleteStopwatch:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateStopwatch:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_isSystemReady;
- (id)_systemNotReadyError;
- (void)didAddLap:(id)a0 forStopwatch:(id)a1 source:(id)a2;
- (void)didAddLap:(id)a0 forStopwatch:(id)a1 withCompletion:(id /* block */)a2;
- (void)didClearAllLapsForStopwatch:(id)a0 withCompletion:(id /* block */)a1;
- (void)didClearAllLapsForStopwatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)didCreateStopWatch:(id)a0 source:(id)a1;
- (void)didDeleteStopwatch:(id)a0 source:(id)a1;
- (void)didLapLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1;
- (void)didLapLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)didPauseLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1;
- (void)didPauseLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)didResetLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1;
- (void)didResetLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)didResumeLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1;
- (void)didResumeLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)didStartLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1;
- (void)didStartLapTimerForStopwatch:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)didUpdateStopwatch:(id)a0 source:(id)a1;
- (void)getStopwatchesWithCompletion:(id /* block */)a0;
- (void)handleSystemReady;
- (void)testStopwatchWrite;

@end
