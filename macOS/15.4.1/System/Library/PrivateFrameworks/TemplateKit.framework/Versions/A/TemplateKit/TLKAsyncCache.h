@class NSObject;

@interface TLKAsyncCache : NSObject <TLKComputer> {
    void /* unknown type, empty encoding */ cache;
    void /* unknown type, empty encoding */ lookaheadCache;
}

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (void)computeObjectForKey:(NSObject *)a0 completionHandler:(void (^)(NSObject *))a1;
- (id)getCachedObjectIfAvailableForKey:(id)a0;
- (void)getObjectForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)getObjectsForKeys:(id)a0 completionHandler:(id /* block */)a1;

@end
