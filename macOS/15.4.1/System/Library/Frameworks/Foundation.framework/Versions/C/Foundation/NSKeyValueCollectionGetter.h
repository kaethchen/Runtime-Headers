@class NSKeyValueNonmutatingCollectionMethodSet;

@interface NSKeyValueCollectionGetter : NSKeyValueProxyGetter {
    NSKeyValueNonmutatingCollectionMethodSet *_methods;
}

- (void)dealloc;
- (id)methods;
- (id)initWithContainerClassID:(id)a0 key:(id)a1 methods:(id)a2 proxyClass:(Class)a3;

@end
