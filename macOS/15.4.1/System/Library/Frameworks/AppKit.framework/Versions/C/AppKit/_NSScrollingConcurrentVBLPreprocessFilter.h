@protocol _NSScrollStateEventListener;

@interface _NSScrollingConcurrentVBLPreprocessFilter : NSObject

@property (nonatomic) id<_NSScrollStateEventListener> scrollStateDelegate;

- (void)scrollingVBLMonitor:(id)a0 synchronizeForTimestamp:(double)a1;

@end
