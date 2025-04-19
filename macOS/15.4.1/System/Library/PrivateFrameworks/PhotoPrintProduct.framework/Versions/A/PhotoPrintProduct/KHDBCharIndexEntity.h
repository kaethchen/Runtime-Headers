@class NSLock, NSMapTable, KHDBRidList;

@interface KHDBCharIndexEntity : KHDBEntity {
    NSLock *_charIndexesCacheLock;
    NSLock *_charIndexLoadLock;
    NSMapTable *_charIndexesByCharacter;
    BOOL _isLoaded;
    KHDBRidList *_digraphsToIndex;
    KHDBRidList *_trigraphsToIndex;
}

@property BOOL isLoaded;

- (void)dealloc;
- (id)description;
- (void)saveCharIndexes;
- (void)loadCharIndexes;
- (void)addId:(unsigned long long)a0 toCharIndexesForString:(id)a1;
- (id)cacheModel:(id)a0;
- (unsigned long long)charIndexCount;
- (id)charIndexesForString:(id)a0;
- (id)charIndexesForString:(id)a0 withCharIndexTypes:(int)a1;
- (unsigned long long)digraphOffsetForChars:(unsigned long long)a0 :(unsigned long long)a1;
- (id)indexForCharacter:(unsigned long long)a0;
- (id)initWithTableName:(id)a0 forDatabaseManager:(id)a1 forDatabase:(id)a2;
- (id)loadModelFromBucket:(id)a0;
- (id)loadModelFromResultSet:(id)a0;
- (void)persistModel:(id)a0;
- (id)possibleIdsForString:(id)a0;
- (id)possibleIdsForString:(id)a0 usingCharIndexes:(int)a1;
- (void)registerDigraphForChars:(unsigned long long)a0 :(unsigned long long)a1;
- (void)registerDigraphs;
- (void)registerTrigraphForChars:(unsigned long long)a0 :(unsigned long long)a1 :(unsigned long long)a2;
- (void)registerTrigraphs;
- (void)removeId:(unsigned long long)a0 fromCharIndexesForString:(id)a1;
- (void)removeIdsFromCharIndexes:(id)a0;
- (unsigned long long)trigraphOffsetForChars:(unsigned long long)a0 :(unsigned long long)a1 :(unsigned long long)a2;
- (void)uncacheAllModels;
- (void)uncacheModel:(id)a0;

@end
