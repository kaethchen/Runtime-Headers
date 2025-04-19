@class NSMutableDictionary, NSMutableSet;

@interface RBAssertionCollection : NSObject {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSMutableDictionary *_assertionsByIdentifier;
    NSMutableSet *_processAssertions;
    NSMutableSet *_systemAssertions;
    NSMutableDictionary *_assertionsByOriginator;
    NSMutableDictionary *_assertionsByTargetProcessIdentity;
    NSMutableSet *_resolvedIdentifiers;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)assertionWithIdentifier:(id)a0;
- (void)removeAssertion:(id)a0;
- (void)addAssertion:(id)a0;
- (id)allAssertions;
- (unsigned long long)assertionCountForOriginator:(id)a0;
- (unsigned long long)assertionCountForTargetProcessIdentity:(id)a0;
- (id)assertionsForOriginator:(id)a0;
- (id)assertionsForTarget:(id)a0;
- (id)assertionsForTargetIdentity:(id)a0;
- (void)enumerateAssertionsForOriginator:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateAssertionsForProcessTargetsWithBlock:(id /* block */)a0;
- (void)enumerateAssertionsForSystemTargetWithBlock:(id /* block */)a0;
- (void)enumerateAssertionsForTargetProcessIdentity:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateAssertionsWithBlock:(id /* block */)a0;
- (BOOL)hasAssertion:(id)a0;
- (BOOL)hasAssertionsForOriginator:(id)a0;
- (BOOL)hasAssertionsForOriginator:(id)a0 exceedingCount:(unsigned long long)a1;
- (BOOL)hasResolvedAssertion:(id)a0;
- (void)noteResolvedAssertion:(id)a0;

@end
