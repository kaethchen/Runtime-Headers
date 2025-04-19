@class NSString, NSMutableDictionary, NSNumberFormatter, NSDictionary, AMSBag;

@interface SHBagContract : NSObject

@property (readonly, copy) NSString *baseDictionaryKey;
@property (readonly) NSMutableDictionary *mutableDefaultValues;
@property (readonly) AMSBag *bag;
@property (readonly) NSNumberFormatter *numberFormatter;
@property (readonly) NSDictionary *defaultValues;
@property BOOL throwOnError;

- (void).cxx_destruct;
- (id)defaultValueForKey:(id)a0;
- (void)addBagKey:(id)a0 defaultValue:(id)a1;
- (void)booleanBackedByStringForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)doubleBackedByStringForKey:(id)a0 completionHandler:(id /* block */)a1;
- (id)fullyQualifiedKey:(id)a0;
- (id)initWithBaseDictionaryKey:(id)a0 bag:(id)a1;
- (id)initWithBaseDictionaryKey:(id)a0 profile:(id)a1 profileVersion:(id)a2;
- (void)integerBackedByStringForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadBaseDictionary:(id /* block */)a0;
- (id)numberFromString:(id)a0 forKey:(id)a1;
- (void)stringForKey:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)valueForKey:(id)a0 bagValue:(id)a1 completionHandler:(id /* block */)a2;

@end
