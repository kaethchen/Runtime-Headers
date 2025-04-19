@interface AppAnalytics.LazyEventProcessor : _TtCs12_SwiftObject <AAFlushable> {
    void /* unknown type, empty encoding */ processorProvider;
    void /* unknown type, empty encoding */ lockedLoadedProcessors;
    void /* unknown type, empty encoding */ isolatedLoadedProcessors;
}

- (void)flushWithCallbackQueue:(id)a0 completion:(id /* block */)a1;

@end
