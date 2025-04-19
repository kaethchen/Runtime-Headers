@class NSDictionary, NSOrderedSet, NSArray;
@protocol NSCopying;

@interface EFOrderedDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSOrderedSet *_orderedKeys;
    NSDictionary *_objectsByKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long count;
@property (readonly, nonatomic) id<NSCopying> firstKey;
@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id<NSCopying> lastKey;
@property (readonly, nonatomic) id lastObject;
@property (readonly, copy) NSDictionary *dictionary;
@property (readonly, copy) NSOrderedSet *allKeys;
@property (readonly, copy) NSArray *allValues;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)keyAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)indexOfKey:(id)a0;
- (id)_initWithOrderedKeys:(id)a0 objectsByKey:(id)a1;
- (void)enumerateKeysAndObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;

@end
