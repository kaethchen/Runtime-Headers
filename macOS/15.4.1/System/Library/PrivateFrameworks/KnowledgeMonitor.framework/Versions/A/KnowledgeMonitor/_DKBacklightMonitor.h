@class BMSource;

@interface _DKBacklightMonitor : _DKMonitor {
    int notifyToken;
    BMSource *_source;
    id /* block */ _shutdownHandler;
}

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithState:(id)a0;
+ (BOOL)indicatesScreenOnWithNotificationState:(id)a0;
+ (void)setIsBacklit:(BOOL)a0;
+ (BOOL)shouldMergeUnchangedEvents;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)deactivate;
- (id /* block */)shutdownHandler;
- (void)setShutdownHandler:(id /* block */)a0;
- (void)synchronouslyReflectCurrentValue;
- (id)bootDate;
- (id)checkShutdownConditionOfBacklightStream;
- (void)donateToBiome:(unsigned long long)a0 startDate:(id)a1;
- (id)lastBacklightEvent;
- (void)obtainCurrentValue;

@end
