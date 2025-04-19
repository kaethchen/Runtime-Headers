@class NSNumber, BMSource;

@interface _DKLowPowerModeMonitor : _DKMonitor {
    BMSource *_source;
}

@property (retain, nonatomic) NSNumber *lowPowerModeStatus;

+ (id)eventStream;
+ (void)setLowPowerMode:(BOOL)a0;
+ (id)_BMEventWithLowPowerModeState:(BOOL)a0;
+ (id)_eventWithLowPowerModeState:(BOOL)a0;
+ (BOOL)shouldMergeUnchangedEvents;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)lowPowerModeStateChanged:(id)a0;
- (void)updateLowPowerMode;

@end
