@class NSXPCConnection;

@interface OSLogCurrentProcessEnumerator : OSLogEnumerator {
    NSXPCConnection *_connectionToService;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithOptions:(unsigned long long)a0 predicate:(id)a1 position:(id)a2;

@end
