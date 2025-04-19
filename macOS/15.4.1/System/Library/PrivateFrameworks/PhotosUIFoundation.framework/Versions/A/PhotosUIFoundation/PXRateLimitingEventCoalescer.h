@interface PXRateLimitingEventCoalescer : PXEventCoalescer {
    double _debugLastDispatchInterval;
}

- (id)init;
- (void)inputEvent;
- (void)_handleTimer;
- (id)initWithRate:(double)a0;

@end
