@class NSObject, TSUProgressContext;
@protocol OS_dispatch_queue;

@interface TSUProgressContextProgress : TSUProgress {
    TSUProgressContext *_progressContext;
    NSObject<OS_dispatch_queue> *_progressContextObserverQueue;
    BOOL hasAddedProgressContextObserver;
}

- (void).cxx_destruct;
- (double)value;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (id)initForSubclass;
- (void)p_updateProgressContextObserver;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)initWithProgressContext:(id)a0;
- (void)p_progressDidChange:(id)a0;
- (void)removeProgressObserver:(id)a0;

@end
