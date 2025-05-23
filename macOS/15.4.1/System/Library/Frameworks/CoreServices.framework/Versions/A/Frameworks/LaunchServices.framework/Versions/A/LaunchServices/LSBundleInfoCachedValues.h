@class NSSet, NSDictionary;

@interface LSBundleInfoCachedValues : LSPropertyList

@property (readonly, nonatomic) NSSet *allKeys;
@property (readonly, nonatomic) NSDictionary *rawValues;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)dictionaryForKey:(id)a0 valuesOfClass:(Class)a1;
- (id)objectsForKeys:(id)a0;
- (id)URLForKey:(id)a0;
- (id)_expensiveDictionaryRepresentation;
- (id)_initWithKeys:(id)a0 forDictionary:(id)a1;
- (id)arrayForKey:(id)a0;
- (id)arrayForKey:(id)a0 withValuesOfClass:(Class)a1;
- (id)dictionaryForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (id)objectForKey:(id)a0 checkingKeyClass:(Class)a1 checkingValueClass:(Class)a2;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;
- (id)objectForKey:(id)a0 ofType:(Class)a1;
- (id)stringForKey:(id)a0;

@end
