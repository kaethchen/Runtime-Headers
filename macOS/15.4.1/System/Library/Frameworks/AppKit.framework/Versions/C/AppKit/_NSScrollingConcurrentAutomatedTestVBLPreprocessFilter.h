@interface _NSScrollingConcurrentAutomatedTestVBLPreprocessFilter : _NSScrollingConcurrentVBLPreprocessFilter {
    long long _currentLeg;
}

@property long long scrollLaps;
@property double scrollStepSize;
@property long long scrollAxis;
@property double minScrollValue;
@property double maxScrollValue;

- (id)initWithConstantData:(id)a0;
- (void)scrollingVBLMonitor:(id)a0 synchronizeForTimestamp:(double)a1;

@end
