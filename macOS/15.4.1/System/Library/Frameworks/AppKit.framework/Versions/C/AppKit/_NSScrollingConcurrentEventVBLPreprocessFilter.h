@class _NSScrollingRubberbandFilter, _NSScrollingConcurrentEventMonitor;

@interface _NSScrollingConcurrentEventVBLPreprocessFilter : _NSScrollingConcurrentVBLPreprocessFilter {
    _NSScrollingRubberbandFilter *_rubberbandFilter;
    BOOL _isStretched;
}

@property (retain, nonatomic) _NSScrollingConcurrentEventMonitor *eventMonitor;

- (void)dealloc;
- (id)initWithConstantData:(id)a0;
- (void)scrollingVBLMonitor:(id)a0 synchronizeForTimestamp:(double)a1;

@end
