@class NSMutableDictionary;

@interface EDOptimizedStringsCollection : EDCollection {
    NSMutableDictionary *mStringDictionary;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)addObject:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (unsigned long long)addOrEquivalentObject:(id)a0;

@end
