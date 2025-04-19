@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values[0];
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)initWithCoder:(id)a0;
+ (id)initWithDictionary:(id)a0;
+ (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
+ (id)initWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
+ (BOOL)supportsSecureCoding;
+ (Class)classForKeyedUnarchiver;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)initForKeys:(id)a0;
+ (id)initWithSearchStrategy:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (void)addEntriesFromDictionary:(id)a0;
- (id)allValues;
- (Class)classForCoder;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (void)getKeys:(id *)a0;
- (void)getObjects:(id *)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (const id *)values;
- (void)setValues:(id *)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)mapping;
- (void)_setValues:(id *)a0 retain:(BOOL)a1;
- (unsigned long long)_valueCountByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (const id *)knownKeyValuesPointer;

@end
