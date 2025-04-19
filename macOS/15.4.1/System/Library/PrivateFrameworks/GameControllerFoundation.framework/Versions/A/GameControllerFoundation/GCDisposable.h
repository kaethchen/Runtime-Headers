@interface GCDisposable : NSObject {
    id /* block */ _handler;
}

+ (id)withCleanupHandler:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCleanupHandler:(id /* block */)a0;

@end
