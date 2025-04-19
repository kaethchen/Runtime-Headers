@interface APKeychainServices : NSObject

+ (void)setObject:(id)a0 forKey:(id)a1;
+ (id)objectForKey:(id)a0 error:(id *)a1;
+ (void)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
+ (id)_keychainQuery:(id)a0;
+ (id)objectForPropertyListKey:(id)a0 error:(id *)a1;
+ (id)_readDataFromKeychain:(id)a0 error:(id *)a1;
+ (id)_readDataFromKeychain:(id)a0 settings:(id)a1 error:(id *)a2;
+ (void)_removeObjectForKey:(id)a0 error:(id *)a1;
+ (void)_removeObjectForKey:(id)a0 settings:(id)a1 error:(id *)a2;
+ (void)_writeDataToKeychain:(id)a0 andData:(id)a1 error:(id *)a2;
+ (void)_writeDataToKeychain:(id)a0 andData:(id)a1 settings:(id)a2 error:(id *)a3;
+ (id)objectForKey:(id)a0 settings:(id)a1 error:(id *)a2;
+ (void)setObject:(id)a0 forKey:(id)a1 settings:(id)a2 error:(id *)a3;
+ (void)setPropertyListObject:(id)a0 forKey:(id)a1;
+ (void)setPropertyListObject:(id)a0 forKey:(id)a1 error:(id *)a2;

@end
