@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface IMOrderedMutableDictionary : NSObject <NSFastEnumeration> {
    NSMutableDictionary *_dictionary;
    NSMutableOrderedSet *_mutableOrderedSet;
    NSArray *_orderedItems;
}

@property (readonly) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (BOOL)containsKey:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)containsOrderedObject:(id)a0;
- (id)orderedObjectForKey:(id)a0;
- (id)orderedObjects;
- (void)removeOrderedObjectForKey:(id)a0;
- (void)setOrderedObject:(id)a0 forKey:(id)a1;

@end
