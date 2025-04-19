@interface WBSCleanupHandler : NSObject {
    id /* block */ _block;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithBlock:(id /* block */)a0;

@end
