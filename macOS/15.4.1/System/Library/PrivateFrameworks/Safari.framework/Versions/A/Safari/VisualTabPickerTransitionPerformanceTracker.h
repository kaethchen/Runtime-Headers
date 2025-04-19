@class NSString;

@interface VisualTabPickerTransitionPerformanceTracker : NSObject {
    NSString *_currentTransitionPerformanceKey;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_startTransitionWithPerformanceKey:(id)a0;
- (void)endTransition;
- (void)startInteractiveTransition;
- (void)startNonInteractiveTransitionWithDestination:(float)a0;

@end
