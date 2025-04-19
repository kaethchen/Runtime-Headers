@class NSDate;

@interface DNDSDateIntervalLifetimeMonitor : DNDSBaseLifetimeMonitor {
    NSDate *_lifetimeTimerFireDate;
}

+ (Class)lifetimeClass;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)updateForModeAssertions:(id)a0 date:(id)a1;

@end
