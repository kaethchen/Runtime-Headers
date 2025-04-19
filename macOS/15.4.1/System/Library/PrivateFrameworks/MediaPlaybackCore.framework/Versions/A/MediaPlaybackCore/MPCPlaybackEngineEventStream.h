@class NSHashTable, NSString, NSDate, MSVSQLDatabaseTransaction, MPCPlaybackEngineEvent, NSMutableArray, NSObject, MSVSQLDatabase;
@protocol MPCPlabackEngineEventStreamTestingDelegate, OS_dispatch_queue;

@interface MPCPlaybackEngineEventStream : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deferralAssertionsLock;
    int _deferralDebugToken;
    BOOL _ignorePerformanceDeferralAssertions;
    BOOL _invalidated;
    NSMutableArray *_subscriptions;
    NSHashTable *_deferralAssertions;
    NSMutableArray *_cachedEvents;
    MSVSQLDatabase *_database;
    MSVSQLDatabaseTransaction *_activeTransaction;
    NSObject<OS_dispatch_queue> *_queue;
    long long _scheduledFlushes;
    NSDate *_nextScheduledFlush;
}

@property (weak, nonatomic) id<MPCPlabackEngineEventStreamTestingDelegate> testingDelegate;
@property (readonly, nonatomic) MPCPlaybackEngineEvent *lastEvent;
@property (readonly, nonatomic) NSString *engineID;
@property (nonatomic) double transactionDebounceTime;

- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithParameters:(id)a0;
- (void)performQuery:(id /* block */)a0;
- (void)flushEvents;
- (void)removeConsumer:(id)a0;
- (void)addConsumer:(id)a0;
- (void)emitEventType:(id)a0 payload:(id)a1;
- (void)emitEventType:(id)a0 payload:(id)a1 atTime:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; double x4; })a2;
- (id)eventDeliveryDeferralAssertionOfType:(long long)a0 forReason:(id)a1;
- (id)eventDeliveryDeferralAssertionOfType:(long long)a0 forReason:(id)a1 withTimeout:(double)a2;
- (void)flushEventsWithConsumer:(id)a0 fromTimestamp:(unsigned long long)a1 untilTimestamp:(unsigned long long)a2;
- (id)initWithDatabaseCreationBlock:(id /* block */)a0;
- (id)lastEventsWithCount:(long long)a0;
- (BOOL)performQueryReturningBOOL:(id /* block */)a0;
- (id)performQueryReturningObject:(id /* block */)a0;
- (void)resetConsumerEventDeliveryToTimestamp:(unsigned long long)a0;
- (void)scheduleInvalidation;
- (void)setMaximumEventDeliveryTimestamp:(unsigned long long)a0;

@end
