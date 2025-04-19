@interface _NSLocalEventObserver : _NSEventObserver {
    BOOL _isAdditive;
}

+ (void)initialize;

- (void)invalidate;
- (id)initMatchingEvents:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)recomputeObserverMask;

@end
