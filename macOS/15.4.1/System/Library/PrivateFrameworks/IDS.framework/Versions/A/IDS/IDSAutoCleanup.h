@interface IDSAutoCleanup : NSObject {
    id /* block */ _cleanupBlock;
    int _accessCount;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)incrementAccessCount;

@end
