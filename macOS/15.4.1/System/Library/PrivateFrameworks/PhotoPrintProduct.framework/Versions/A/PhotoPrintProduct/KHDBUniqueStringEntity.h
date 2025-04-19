@class NSMutableDictionary, KHDBPreparedSql, NSLock, KHDBCharIndexEntity;

@interface KHDBUniqueStringEntity : KHDBEntity {
    KHDBPreparedSql *_createStringSql;
    NSLock *_stringCacheLock;
    NSMutableDictionary *_stringsById;
    NSMutableDictionary *_stringIdByString;
}

@property (retain, nonatomic) KHDBCharIndexEntity *charIndexEntity;
@property (readonly, nonatomic) BOOL allStringsCached;

- (void)dealloc;
- (id)createStringSql;
- (void)cacheAllStrings;
- (void)saveNextModelId;
- (void)addCharIndexForString:(id)a0 withStringId:(id)a1;
- (void)addStringProperties:(id)a0;
- (id)addStringProperty:(id)a0;
- (id)cacheString:(id)a0 byId:(id)a1;
- (void)cacheStringsForStringIds:(id)a0;
- (void)cacheStringsForStrings:(id)a0;
- (id)cachedStringForId:(id)a0;
- (id)cachedStringIdForString:(id)a0;
- (void)copyRecordsToEntity:(id)a0 withCanceler:(id)a1 where:(id)a2 args:(id)a3;
- (BOOL)createTableIfMissing;
- (void)deleteStringsForIds:(id)a0;
- (id)initWithTableName:(id)a0 charIndexTableName:(id)a1 forDatabaseManager:(id)a2 forDatabase:(id)a3;
- (id)initWithTableName:(id)a0 forDatabaseManager:(id)a1 forDatabase:(id)a2;
- (id)initialStringProperty:(id)a0;
- (id)possibleStringIdsForString:(id)a0;
- (id)possibleStringIdsForString:(id)a0 usingCharIndexes:(int)a1;
- (void)reindexStringsForStringIds:(id)a0;
- (void)saveIndexes;
- (id)searchStringForString:(id)a0;
- (id)stringForStringId:(id)a0;
- (id)stringIdForString:(id)a0;
- (void)uncacheAllStrings;
- (void)uncacheString:(id)a0 byId:(id)a1;
- (void)uncacheStringsForIds:(id)a0;
- (void)waitForOutstandingWrites;

@end
