@interface PodcastsApplicationStateMonitor : NSObject {
    void /* unknown type, empty encoding */ applicationState;
    void /* unknown type, empty encoding */ listenerTask;
}

@property (class, nonatomic, readonly) PodcastsApplicationStateMonitor *shared;

+ (id)descriptionForState:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isActive;
- (unsigned long long)currentState;
- (BOOL)isUnknown;
- (BOOL)isBackground;
- (void)updateCurrentState:(unsigned long long)a0;

@end
