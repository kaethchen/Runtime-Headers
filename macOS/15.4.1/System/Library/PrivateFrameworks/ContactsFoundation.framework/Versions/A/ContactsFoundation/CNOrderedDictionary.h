@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CNOrderedDictionary : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration> {
    NSMutableDictionary *_dictionary;
    NSMutableArray *_orderedKeys;
}

@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allObjects;

+ (id)dictionaryWithObject:(id)a0 forKey:(id)a1;
+ (id)orderedDictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)forEach:(id /* block */)a0;

@end
