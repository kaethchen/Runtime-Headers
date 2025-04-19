@class NSMutableDictionary;

@interface KHDBLockedDictionary : NSMutableDictionary {
    NSMutableDictionary *m_dictionary;
    int m_spinlock;
}

+ (id)dictionary;
+ (id)dictionaryWithCapacity:(unsigned long long)a0;
+ (id)dictionaryWithDictionary:(id)a0;
+ (id)dictionaryWithObject:(id)a0 forKey:(id)a1;
+ (id)dictionaryWithObjects:(id)a0 forKeys:(id)a1;
+ (id)dictionaryWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
+ (id)dictionaryWithObjectsAndKeys:(id)a0;
+ (id)dictionaryWithContentsOfURL:(id)a0;
+ (id)dictionaryWithContentsOfFile:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (id)keysSortedByValueUsingSelector:(SEL)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)allKeysForObject:(id)a0;
- (id)allValues;
- (Class)classForCoder;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)descriptionWithLocale:(id)a0;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (id)initWithObjects:(id)a0 forKeys:(id)a1;
- (id)initWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
- (id)initWithObjectsAndKeys:(id)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (id)objectForKey:(id)a0;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (void)setDictionary:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)descriptionInStringsFileFormat;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;

@end
