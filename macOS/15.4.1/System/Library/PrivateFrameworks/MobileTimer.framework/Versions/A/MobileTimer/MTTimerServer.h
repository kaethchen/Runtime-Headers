@class MTTimerStorage, NSString, MTXPCConnectionListenerProvider;
@protocol NAScheduler;

@interface MTTimerServer : NSObject <MTTimerObserver, MTTimerServer, MTDurationUpdateDelegate, MTAgentDiagnosticDelegate>

@property (readonly, nonatomic) MTTimerStorage *storage;
@property (readonly, nonatomic) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (readonly, nonatomic, getter=isSystemReady) BOOL systemReady;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)startListening;
- (void)stopListening;
- (id)initWithStorage:(id)a0;
- (void)checkIn;
- (BOOL)_isSystemReady;
- (id)_systemNotReadyError;
- (void)addFavoriteDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)addRecentDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)addTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)dismissTimerWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)favoriteTimerDurationsDidUpdate:(id)a0;
- (id)gatherDiagnostics;
- (void)getTimerDurationsWithCompletion:(id /* block */)a0;
- (void)getTimersWithCompletion:(id /* block */)a0;
- (void)handleSystemReady;
- (id)initWithStorage:(id)a0 connectionListenerProvider:(id)a1;
- (void)latestTimerDurationDidUpdate:(id)a0;
- (void)nextTimerDidChange:(id)a0;
- (void)printDiagnostics;
- (void)recentTimerDurationsDidUpdate:(id)a0;
- (void)removeFavoriteDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeRecentDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)repeatTimerWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)saveLatestDuration:(id)a0 withCompletion:(id /* block */)a1;
- (void)source:(id)a0 didAddTimers:(id)a1;
- (void)source:(id)a0 didDismissTimer:(id)a1;
- (void)source:(id)a0 didFireTimer:(id)a1;
- (void)source:(id)a0 didRemoveTimers:(id)a1;
- (void)source:(id)a0 didUpdateTimers:(id)a1;
- (void)updateTimer:(id)a0 withCompletion:(id /* block */)a1;

@end
