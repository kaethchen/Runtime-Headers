@class NSString, KHDBLockedDictionary, KHDBLockedSet;

@interface KHDBRelationshipCache : NSObject {
    KHDBLockedSet *_knownEmpty;
    KHDBLockedDictionary *_foreignKeysForKey;
}

@property (readonly, retain, nonatomic) NSString *keyColumn;
@property (readonly, retain, nonatomic) NSString *foreignKeyColumn;
@property (readonly, nonatomic) BOOL isOneToOneRelationship;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (void)clear;
- (id)notCachedKeyListForPrimaryKeys:(id)a0;
- (void)clearForeignKeyCacheForKeyList:(id)a0;
- (BOOL)hasCacheForKey:(id)a0;
- (void)addForeignKey:(id)a0 forKey:(id)a1;
- (void)addForeignKeys:(id)a0 forKey:(id)a1;
- (id)allCachedKeys;
- (void)cacheForeignKey:(id)a0 forKey:(id)a1;
- (void)cacheForeignKeyDictionary:(id)a0;
- (void)cacheForeignKeys:(id)a0 forKey:(id)a1;
- (void)clearForeignKeyCacheForKey:(id)a0;
- (void)clearForeignKeyCacheForKeys:(id)a0;
- (id)dictionaryOfForeignKeysForPrimaryKeys:(id)a0 notCached:(id)a1;
- (id)foreignKeyForKey:(id)a0;
- (id)foreignKeysForKey:(id)a0;
- (id)foreignKeysForPrimaryKeys:(id)a0 notCached:(id)a1;
- (id)initForPrimaryKeyColumn:(id)a0 foreignKeyColumn:(id)a1;
- (id)initForPrimaryKeyColumn:(id)a0 foreignKeyColumn:(id)a1 isOneToOne:(BOOL)a2;
- (void)removeForeignKey:(id)a0 forKey:(id)a1;
- (void)removeForeignKeys:(id)a0 forKey:(id)a1;

@end
