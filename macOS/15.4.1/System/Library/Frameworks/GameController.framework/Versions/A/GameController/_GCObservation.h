@interface _GCObservation : NSObject {
    id /* block */ _handler;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCleanupHandler:(id /* block */)a0;

@end
