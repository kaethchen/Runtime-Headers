@class NSArray, NSSet, NSPointerFunctions;

@interface NSHashTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSPointerFunctions *pointerFunctions;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allObjects;
@property (readonly, nonatomic) id anyObject;
@property (readonly, copy) NSSet *setRepresentation;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)weakObjectsHashTable;
+ (id)hashTableWithOptions:(unsigned long long)a0;
+ (id)hashTableWithWeakObjects;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsObject:(id)a0;
- (id)member:(id)a0;
- (void)addObject:(id)a0;
- (Class)classForCoder;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 capacity:(unsigned long long)a1;
- (void)minusHashTable:(id)a0;
- (void)unionHashTable:(id)a0;
- (void *)getItem:(const void *)a0;
- (void)getKeys:(const void **)a0 count:(unsigned long long *)a1;
- (id)initWithPointerFunctions:(id)a0 capacity:(unsigned long long)a1;
- (void)insertKnownAbsentItem:(const void *)a0;
- (void)intersectHashTable:(id)a0;
- (BOOL)intersectsHashTable:(id)a0;
- (BOOL)isEqualToHashTable:(id)a0;
- (BOOL)isSubsetOfHashTable:(id)a0;
- (id)mutableSet;
- (void)removeAllItems;
- (void)removeItem:(const void *)a0;
- (unsigned long long)weakCount;

@end
