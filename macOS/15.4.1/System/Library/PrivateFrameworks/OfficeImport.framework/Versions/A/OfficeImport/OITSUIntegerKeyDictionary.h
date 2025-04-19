@interface OITSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allValues;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)keyEnumerator;
- (id)objectForKey:(long long)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(long long)a0;
- (void)setObject:(id)a0 forKey:(long long)a1;
- (id)valueEnumerator;
- (struct __CFDictionary { } *)p_cfDictionary;

@end
