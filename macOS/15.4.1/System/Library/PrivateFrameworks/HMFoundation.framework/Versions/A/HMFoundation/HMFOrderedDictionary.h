@class NSArray, NSOrderedSet;

@interface HMFOrderedDictionary : NSObject <HMFAssociativeCollection, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray *_objects;
    NSOrderedSet *_keys;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;

+ (id)orderedDictionary;
+ (id)orderedDictionaryWithObject:(id)a0 forKey:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithObject:(id)a0 forKey:(id)a1;
- (id)initWithObjects:(id)a0 forKeys:(id)a1;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (id)initBySortingDictionary:(id)a0;
- (id)initBySortingDictionary:(id)a0 copyItems:(BOOL)a1 keyComparator:(id /* block */)a2;
- (id)initWithObjects:(id)a0 forKeys:(id)a1 copyObjects:(BOOL)a2 copyKeys:(BOOL)a3;
- (id)initWithObjects:(id)a0 orderedKeySet:(id)a1;
- (id)mutableUnorderedCopy;
- (id)unorderedCopy;

@end
