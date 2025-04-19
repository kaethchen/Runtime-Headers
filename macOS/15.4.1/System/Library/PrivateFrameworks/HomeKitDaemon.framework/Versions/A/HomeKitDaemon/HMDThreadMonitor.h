@protocol HMMRadarInitiating;

@interface HMDThreadMonitor : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } counterLock;
    unsigned long long currentCount;
    unsigned long long threshold;
    BOOL ttrEnabled;
}

@property (readonly, nonatomic) void /* function */ *previousHook;
@property (readonly, weak, nonatomic) id<HMMRadarInitiating> radarInitiator;

+ (id)sharedInstance;
+ (void)start;
+ (id)logCategory;
+ (id)createWithRadarInitiator:(id)a0;

- (void).cxx_destruct;
- (BOOL)setup;
- (void)pthreadHookWithEvent:(unsigned int)a0;
- (void)resetWithRadarInitiator:(id)a0;

@end
