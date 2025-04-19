@class SiriAnalyticsRootClock, SiriAnalyticsMetastore, SiriAnalyticsTimePeriodBuffer, NSObject, SiriAnalyticsDebounce;
@protocol OS_dispatch_queue, SiriAnalyticsWhiteRoseDelegate, OS_dispatch_source;

@interface SiriAnalyticsWhiteRose : NSObject <SiriAnalyticsDebounceDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsWhiteRoseDelegate> _delegate;
    SiriAnalyticsRootClock *_activeClock;
    NSObject<OS_dispatch_source> *_inactivityTimer;
    double _maximumInactivityInterval;
    NSObject<OS_dispatch_source> *_maximumClockLifeTimer;
    double _maximumClockLifeInterval;
    SiriAnalyticsMetastore *_metastore;
    SiriAnalyticsTimePeriodBuffer *_clockPulseTimer;
    SiriAnalyticsDebounce *_clockPulse;
}

- (void).cxx_destruct;
- (void)createTag:(id)a0 completion:(id /* block */)a1;
- (void)_cancelInactivityTimer;
- (void)_cancelMaximumClockLifeTimer;
- (void)_destroyActiveClockWithReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_ensureActiveClockStartingAt:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_inactivityTimerElapsed;
- (void)_maximumClockLifeExpired;
- (void)_pulseActiveClock;
- (void)_startInactivityTimer;
- (void)_startMaximumClockLifeTimer;
- (void)bootstrapWithCompletion:(id /* block */)a0;
- (void)debounceFired:(id)a0 maximumReached:(BOOL)a1;
- (void)destroyActiveClockWithReason:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 delegate:(id)a1 metastore:(id)a2;
- (id)markTimeForAnnotatedMessage:(id)a0 withRootClock:(id)a1;
- (void)markTimeForAnnotatedMessages:(id)a0 completion:(id /* block */)a1;
- (void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1 ensureClockExists:(BOOL)a2 completion:(id /* block */)a3;
- (void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1 ensureClockExists:(BOOL)a2 completion:(id /* block */)a3;

@end
