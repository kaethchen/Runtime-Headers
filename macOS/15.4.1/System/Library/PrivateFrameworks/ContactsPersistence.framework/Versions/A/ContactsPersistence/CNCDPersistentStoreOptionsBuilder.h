@interface CNCDPersistentStoreOptionsBuilder : NSObject

+ (id)optionsForPersistentStoreWithOptions:(unsigned long long)a0;
+ (id)optionsForPersistentStoreWithOptions:(unsigned long long)a0 url:(id)a1;
+ (id)optionsForPersistentStoreWithOptions:(unsigned long long)a0 url:(id)a1 fileUtilities:(id)a2;
+ (void)updateDictionary:(id)a0 byAddingProxyLockForURL:(id)a1 fileUtilities:(id)a2;
+ (void)updateDictionary:(id)a0 isReadOnly:(BOOL)a1;
+ (void)updateDictionary:(id)a0 shouldMigrateIfNecessary:(BOOL)a1;

@end
