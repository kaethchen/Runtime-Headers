@class ICCRSet, NSArray, ICCRDocument, NSString, NSMutableArray;

@interface ICCROrderedSet : NSObject <ICCRDataType, ICCRCoding>

@property (retain, nonatomic) ICCRSet *contents;
@property (retain, nonatomic) NSMutableArray *orderedArray;
@property (weak, nonatomic) ICCRDocument *document;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (void)addObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)tombstone;
- (void)enumerateWithBlock:(id /* block */)a0;
- (void)mergeWith:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)realizeLocalChangesIn:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)_sort;
- (id)_indexForIndex:(unsigned long long)a0;
- (void)encodeWithICCRCoder:(id)a0;
- (id)initWithICCRCoder:(id)a0;
- (void)mergeWithSet:(id)a0;
- (void)moveObject:(id)a0 toIndex:(unsigned long long)a1;

@end
