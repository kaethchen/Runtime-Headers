@class NSString, MTXPCConnectionProvider, MTMetrics, NSNotificationCenter, MTTimerManagerExportedObject, MTTimerCache;
@protocol MTTimerManagerIntentSupport;

@interface MTTimerManager : NSObject <MTTimerManagerProviding, MTTimerManagerIntentSupport, MTUserDefaultNotificationObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<MTTimerManagerIntentSupport> timerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MTTimerManagerExportedObject *exportedObject;
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider;
@property (retain, nonatomic) MTMetrics *metrics;
@property (retain, nonatomic) MTTimerCache *cache;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id notificationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setDefaultDuration:(double)a0;
+ (void)warmUp;
+ (double)defaultDuration;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)checkIn;
- (void)reconnect;
- (id)timers;
- (id)initWithMetrics:(id)a0;
- (id)addTimer:(id)a0;
- (id)removeTimer:(id)a0;
- (id)dismissTimerWithIdentifier:(id)a0;
- (id)updateTimer:(id)a0;
- (id)recentDurations;
- (void)loadAllDurationsWithCompletion:(id /* block */)a0;
- (void)_getCachedTimersWithFuture:(id)a0 finishBlock:(id /* block */)a1;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)_runningTimerFromCurrentTimer:(id)a0 withDuration:(double)a1;
- (id)_updateCurrentTimerWithState:(unsigned long long)a0;
- (BOOL)_updateCurrentTimerWithStateSync:(unsigned long long)a0;
- (id)_updateTimer:(id)a0 doSynchronous:(BOOL)a1;
- (id)_validateCanStartTimer:(id)a0;
- (id)addFavoriteDuration:(id)a0;
- (id)addRecentDuration:(id)a0;
- (id)currentTimer;
- (id)defaultDurations;
- (id)favoriteDurations;
- (id)getCurrentTimerSync;
- (id)getQueryDurations:(id /* block */)a0 withFuture:(id)a1;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)latestDuration;
- (id)nextTimer;
- (id)nextTimersForDate:(id)a0 maxCount:(unsigned long long)a1;
- (id)pauseCurrentTimer;
- (BOOL)pauseCurrentTimerSync;
- (id)removeFavoriteDuration:(id)a0;
- (id)removeRecentDuration:(id)a0;
- (id)repeatTimerWithIdentifier:(id)a0;
- (id)resumeCurrentTimer;
- (BOOL)resumeCurrentTimerSync;
- (id)saveLatestDuration:(id)a0;
- (id)startCurrentTimerWithDuration:(double)a0;
- (BOOL)startCurrentTimerWithDurationSync:(double)a0;
- (id)stopCurrentTimer;
- (BOOL)stopCurrentTimerSync;
- (id)timerWithIdentifier:(id)a0;
- (id)timersSync;

@end
