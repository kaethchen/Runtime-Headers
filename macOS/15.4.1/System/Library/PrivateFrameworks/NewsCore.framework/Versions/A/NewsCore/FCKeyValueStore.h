@class FCKeyValueStoreSavePolicy, NSString, NSDictionary, NSURL, NSDate, NSMutableDictionary, FCKeyValueStoreClassRegistry;
@protocol FCKeyValueStoreMigrating, NFLocking;

@interface FCKeyValueStore : NSObject <FCJSONEncodableObjectProviding> {
    BOOL _unsafeWaitingOnSave;
    NSString *_name;
    unsigned long long _storeSize;
    NSURL *_storeURL;
    NSMutableDictionary *_unsafeObjectsByKey;
    id<NFLocking> _lock;
    unsigned long long _clientVersion;
    unsigned long long _optionsMask;
    FCKeyValueStoreClassRegistry *_classRegistry;
    id<FCKeyValueStoreMigrating> _migrator;
    FCKeyValueStoreSavePolicy *_savePolicy;
    id /* block */ _objectHandler;
    id /* block */ _arrayObjectHandler;
    id /* block */ _dictionaryKeyHandler;
    id /* block */ _dictionaryValueHandler;
}

@property (nonatomic) BOOL shouldExportJSONSidecar;
@property (readonly, nonatomic) NSDictionary *asDictionary;
@property (readonly, nonatomic) NSString *storeDirectory;
@property (readonly, nonatomic) NSDate *modificationDate;

- (id)init;
- (id)allKeys;
- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)a0;
- (id)allObjects;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)keysOfEntriesPassingTest:(id /* block */)a0;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setObjects:(id)a0 forKeys:(id)a1;
- (id)objectsForKeys:(id)a0;
- (BOOL)boolValueForKey:(id)a0;
- (void)save;
- (void)setBoolValue:(BOOL)a0 forKey:(id)a1;
- (BOOL)containsObjectForKey:(id)a0;
- (void)saveWithCompletionHandler:(id /* block */)a0;
- (void)setCloudBackupEnabled:(BOOL)a0;
- (void)updateObjectsForKeys:(id)a0 withBlock:(id /* block */)a1;
- (void)addAllEntriesToDictionary:(id)a0;
- (unsigned long long)storeSize;
- (void)enumerateKeysAndObjectsForKeys:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3 classRegistry:(id)a4;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3 classRegistry:(id)a4 migrator:(id)a5;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3 classRegistry:(id)a4 migrator:(id)a5 savePolicy:(id)a6;
- (id)jsonEncodableObject;
- (void)replaceContentsWithDictionary:(id)a0;
- (void)setJSONEncodingHandlersWithObjectHandler:(id /* block */)a0 arrayObjectHandler:(id /* block */)a1 dictionaryKeyHandler:(id /* block */)a2 dictionaryValueHandler:(id /* block */)a3;

@end
