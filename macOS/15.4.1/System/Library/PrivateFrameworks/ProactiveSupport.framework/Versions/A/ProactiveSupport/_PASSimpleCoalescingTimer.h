@class _PASCoalescingTimer;

@interface _PASSimpleCoalescingTimer : NSObject {
    _PASCoalescingTimer *_timer;
}

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 operation:(id /* block */)a1;
- (void)runAfterDelaySeconds:(double)a0 coalescingBehavior:(unsigned char)a1;
- (void)cancelPendingOperations;
- (id)initWithQueue:(id)a0 leewaySeconds:(double)a1 operation:(id /* block */)a2;
- (void)runAfterStrictDelaySeconds:(double)a0;
- (void)runImmediately;

@end
