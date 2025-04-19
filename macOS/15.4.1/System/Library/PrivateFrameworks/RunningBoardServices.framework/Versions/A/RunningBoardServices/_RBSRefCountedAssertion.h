@class NSCountedSet, NSMutableDictionary, NSArray;

@interface _RBSRefCountedAssertion : NSObject {
    NSMutableDictionary *_pidToAssertionMap;
    NSCountedSet *_refcounts;
    NSArray *_attributes;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_invalidateFor:(int)a0 withDescription:(char *)a1;
- (void)_acquireFor:(int)a0 withDescription:(char *)a1;
- (unsigned long long)_countFor:(int)a0;
- (id)_initWithAttributes:(id)a0;

@end
