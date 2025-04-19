@class IOGCFastPathProxyConnection;

@interface IOGCFastPathProxyQueue : NSObject {
    IOGCFastPathProxyConnection *_parent;
    unsigned long long _queue;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)_initWithConnection:(id)a0 queue:(unsigned long long)a1;
- (int)getProperties:(id)a0 dictionary:(id *)a1;
- (int)mapMemoryAt:(unsigned long long *)a0 ofSize:(unsigned long long *)a1 options:(unsigned int)a2;
- (int)unmapMemoryAt:(unsigned long long)a0;

@end
