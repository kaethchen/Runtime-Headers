@class BMSource, NSDate, _CDContextualKeyPath, NSObject;
@protocol OS_dispatch_source, _CDLocalContext;

@interface _DKDeviceActivityLevelMonitor : _DKMonitor {
    BMSource *_bmSource;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL initialized;
@property (nonatomic) unsigned long long lastInUseStatus;
@property (nonatomic) unsigned long long currentInUseStatus;
@property (retain, nonatomic) NSDate *lastSetActiveDate;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) _CDContextualKeyPath *lastUseDate;
@property (retain, nonatomic) _CDContextualKeyPath *inUseStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *debounceTimer;
@property (nonatomic) unsigned long long userActivityNotificationHandle;
@property (nonatomic) int siriToken;

+ (void)initialize;
+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithState:(unsigned long long)a0;
+ (BOOL)shouldMergeUnchangedEvents;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)synchronouslyReflectCurrentValue;
- (void)handleUserActivity:(int)a0;
- (void)setLastActivityDate:(id)a0;
- (void)updateActivityDateAndInUseState:(unsigned long long)a0;
- (void)updateActivityInUseState:(unsigned long long)a0;
- (void)updatePerformanceThrottleStatusWithLevel:(unsigned long long)a0;

@end
