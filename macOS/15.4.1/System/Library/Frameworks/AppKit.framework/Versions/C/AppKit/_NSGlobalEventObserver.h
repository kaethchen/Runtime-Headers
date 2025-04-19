@interface _NSGlobalEventObserver : _NSEventObserver {
    struct OpaqueEventHandlerRef { } *_handler;
}

- (void)invalidate;
- (id)initMatchingEvents:(unsigned long long)a0 handler:(id /* block */)a1;

@end
