@protocol _TtP12HealthDaemon20HDCMSwimTrackerProxy_;

@interface HealthDaemon.HDSwimTracker : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_tracker;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ referenceSwimData;
    void /* unknown type, empty encoding */ startLock;
    void /* unknown type, empty encoding */ generalLock;
    void /* unknown type, empty encoding */ dataCollector;
}

@property (nonatomic, retain) id<_TtP12HealthDaemon20HDCMSwimTrackerProxy_> tracker;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithProfile:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)startWith:(id)a0;
- (id)makeSwimTracker;

@end
