@class NSString, NSMapTable, NSMutableIndexSet, ISDSqliteChangeStoreDatabase;

@interface ISDSqliteChangeStore : NSObject {
    unsigned int _greatestEnumeratedToGeneration;
    long long _numberEnumerated;
    unsigned long long _maxToEnumerate;
    unsigned long long _fromRow;
    long long _lastRowEnumerated;
    int _numGenerationsToRetain;
    NSString *_path;
    NSMutableIndexSet *_enumeratedChanges;
    unsigned long long _flushCount;
    NSMapTable *_changesMap;
    NSMapTable *_referencesRowsMap;
    ISDSqliteChangeStoreDatabase *_db;
}

+ (id)defaultFileName;

- (void)dealloc;
- (void)compact;
- (void)resetState;
- (void)closeDatabase;
- (void)disableSqliteTracing;
- (void)enableSqliteTracing:(id)a0;
- (void)setSqliteCacheSize:(long long)a0;
- (void)recreateIndexes;
- (void)removeAllChangesForEntityNames:(id)a0;
- (BOOL)_enumerateChangesOfType:(int)a0 forEntityNames:(id)a1 state:(long long *)a2 maxToEnumerate:(long long)a3 asArgumentToFunction:(void /* function */ *)a4 context:(void *)a5;
- (void)_insertChange:(id)a0;
- (void)addIndexToIndexSetOfEnumeratedChanges:(long long)a0;
- (void)appendChange:(id)a0;
- (BOOL)changeExistsWhichReferencesRecordWithId:(id)a0;
- (BOOL)changeExistsWhichReferencesRecordWithId:(id)a0 referringChanges:(id)a1;
- (void)clearSpuriousUnresolvedReferencesToPhantomsInIdMapper:(id)a0;
- (void)deleteChanges:(id)a0;
- (id)dirtyCoderDelegate;
- (void)disableFlush;
- (void)dropIndexes;
- (unsigned int)earliestFromGenerationOfAddedRecordsForEntityName:(id)a0;
- (unsigned int)earliestFromGenerationOfProcessedRecordsForEntityName:(id)a0;
- (void)enableFlush;
- (id)entityNamesOfAddedRecords;
- (void)enumerateAddsForEntityNames:(id)a0 asArgumentToFunction:(void /* function */ *)a1 context:(void *)a2;
- (BOOL)enumerateAddsForEntityNames:(id)a0 state:(long long *)a1 maxToEnumerate:(long long)a2 asArgumentToFunction:(void /* function */ *)a3 context:(void *)a4;
- (void)enumerateChangesForEntityNames:(id)a0 asArgumentToFunction:(void /* function */ *)a1 context:(void *)a2;
- (BOOL)enumerateChangesForEntityNames:(id)a0 changeType:(int *)a1 state:(long long *)a2 maxToEnumerate:(long long)a3 asArgumentToFunction:(void /* function */ *)a4 context:(void *)a5;
- (unsigned long long)enumerateChangesFromRow;
- (void)enumerateProcessedChangesForEntityNames:(id)a0 asArgumentToFunction:(void /* function */ *)a1 context:(void *)a2;
- (unsigned long long)enumeratedChangesCount;
- (void)flushTempChanges;
- (unsigned int)greatestEnumeratedToGeneration;
- (id)indexSetOfEnumeratedChanges;
- (id)initWithDataDirectory:(id)a0 forClientWithIdentifier:(id)a1;
- (id)initWithDataDirectory:(id)a0 forClientWithIdentifier:(id)a1 delegate:(id)a2;
- (id)initWithPath:(id)a0 forClientWithIdentifier:(id)a1 delegate:(id)a2;
- (unsigned int)latestFromGenerationOfProcessedRecordsForEntityName:(id)a0;
- (id)newSetOfDeletedRecordIdsForEntityNames:(id)a0;
- (int)numGenerationsToRetain;
- (unsigned long long)numberOfPendingChangesForEntities:(id)a0;
- (unsigned long long)numberOfProcessedChanges;
- (unsigned long long)numberOfUnprocessedChanges;
- (unsigned long long)purgeProcessedChangesLessThanToGeneration:(unsigned int)a0;
- (void)recycleDatabaseConnection;
- (void)removeAllProcessedChangesForEntityNames:(id)a0;
- (unsigned long long)removeEnumeratedChanges;
- (unsigned long long)removeEnumeratedChanges:(int)a0;
- (void)replaceRecordId:(id)a0 withRecordId:(id)a1;
- (void)replaceRelationshipTupleId:(id)a0 withRelationshipTupleId:(id)a1;
- (BOOL)rowWasEnumerated;
- (void)setDirtyCoderDelegate:(id)a0;
- (void)setGreatestEnumeratedToGeneration:(unsigned int)a0;
- (void)setNumGenerationsToRetain:(int)a0;
- (void)updateChangePropertiesForChange:(id)a0;

@end
