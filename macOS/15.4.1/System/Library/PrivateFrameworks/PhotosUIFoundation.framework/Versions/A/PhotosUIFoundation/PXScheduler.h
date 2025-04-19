@interface PXScheduler : NSObject

@property (class, readonly) PXScheduler *sharedScheduler;

- (id)startTrackedAnimationWithLabel:(id)a0;
- (void)dispatchGraduallyOnMainThreadWhenNotAnimating:(id /* block */)a0;
- (void)dispatchInMainTransaction:(id /* block */)a0;
- (void)endTrackedAnimation:(id)a0;
- (void)dispatchInMainTransactionAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)dispatchOnMainThreadWhenNotScrolling:(id /* block */)a0;
- (void)dispatchOnMainThreadWhenNotScrollingAfterDelay:(double)a0 block:(id /* block */)a1;
- (void)schedulePerformPendingBlocksAfterAnimation;
- (void)scrollViewDidScroll;
- (void)scrollViewWillLayoutSubviews;

@end
