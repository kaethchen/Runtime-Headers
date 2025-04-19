@class NSString, ISDQuickDirtyCoder, NSMutableData;

@interface ISDSqliteChangeStoreDatabase : ISDDatabase {
    NSString *_clientId;
    ISDQuickDirtyCoder *_coder;
    NSMutableData *_coderWriteData;
    int _cachedIdReferencesCount;
    struct sqlite3_stmt { } *_insertChangeStatement;
    struct sqlite3_stmt { } *_updateChangeStatement;
    struct sqlite3_stmt { } *_insertReferencesToChangesStatement;
    struct sqlite3_stmt { } *_removeReferencesToChangesStatement;
    struct sqlite3_stmt { } *_getChangesForEntityNames;
    struct sqlite3_stmt { } *_getChangesForAllEntities;
    struct sqlite3_stmt { } *_getProcessedChangesForEntityNames;
    struct sqlite3_stmt { } *_getProcessedChanges;
    struct sqlite3_stmt { } *_getChangesWithReferencesToRecordId;
    struct sqlite3_stmt { } *_getEntityNamesOfAddedRecords;
    struct sqlite3_stmt { } *_getEarliestGenerationOfRecordsForEntityName;
    struct sqlite3_stmt { } *_getLatestGenerationOfRecordsForEntityName;
    struct sqlite3_stmt { } *_getUnprocessedDeletedRecordIds;
    struct sqlite3_stmt { } *_getUnprocessedDeletedRecordIdsWithEntityNames;
    struct sqlite3_stmt { } *_markChangesAsEnumerated;
    struct sqlite3_stmt { } *_deleteChangesWithRowIds;
    struct sqlite3_stmt { } *_deleteReferencedIdsForChangesWithRowIds;
    struct sqlite3_stmt { } *_getRowIdsForEnumeratedChangesLessThanGeneration;
    struct sqlite3_stmt { } *_getRowIdsForChangesWithEntityNames;
    struct sqlite3_stmt { } *_getRowIdsForChanges;
    struct sqlite3_stmt { } *_removeAllChangesForEntityNames;
    struct sqlite3_stmt { } *_updateReferencedId;
    struct sqlite3_stmt { } *_updateReferencedIdAndChangeId;
    struct sqlite3_stmt { } *_numberOfChanges;
    struct sqlite3_stmt { } *_numberOfDeletes;
    struct sqlite3_stmt { } *_numberOfChangesForEntities;
}

+ (BOOL)createDatabaseAtPath:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)clientId;
- (void)closeDatabase;
- (void)_deleteEnumeratedChanges:(id)a0;
- (int)_cachedIdReferencesCount;
- (void)recreateIndexes;
- (id)_createDataWithPropertiesEncodedForSqlite:(id)a0;
- (unsigned int)_earliestFromGenerationOfRecordsForEntityName:(id)a0 processed:(BOOL)a1 changeType:(int)a2;
- (id)_entityNamesOfAddedRecords:(BOOL)a0;
- (BOOL)_enumerateChangesForEntityNames:(id)a0 changeType:(int)a1 processed:(BOOL)a2 changeStore:(id)a3 asArgumentToFunction:(void /* function */ *)a4 context:(void *)a5;
- (void)_enumerateChangesWithReferencesToId:(id)a0 function:(void /* function */ *)a1 context:(void *)a2;
- (void)_enumerateProcessedChangesForEntityNames:(id)a0 asArgumentToFunction:(void /* function */ *)a1 context:(void *)a2;
- (void)_flushIdReferences;
- (void)_insertChange:(id)a0;
- (unsigned int)_latestFromGenerationOfRecordsForEntityName:(id)a0 processed:(BOOL)a1 changeType:(int)a2;
- (void)_markChangesAsEnumerated:(id)a0;
- (id)_newPropertiesFromDataInColumn:(int)a0 statement:(struct sqlite3_stmt { } *)a1 forRecordWithIdentifier:(id)a2 identityHash:(id *)a3;
- (id)_newSetOfDeletedRecordIds;
- (id)_newSetOfDeletedRecordIdsForEntityNames:(id)a0;
- (unsigned long long)_numberOfChanges:(BOOL)a0;
- (unsigned long long)_numberOfDeletes;
- (unsigned long long)_numberOfPendingChangesForEntities:(id)a0;
- (unsigned long long)_purgeEnumeratedChangesLessThanToGeneration:(unsigned int)a0;
- (void)_removeAllChangesForEntityNames:(id)a0 processed:(BOOL)a1;
- (void)_setupDeleteStatements;
- (BOOL)_shouldFlushIdReferences;
- (void)_updateChange:(id)a0 atRowId:(long long)a1;
- (void)_updateChanges:(id)a0 andReferences:(id)a1 withNewId:(id)a2;
- (void)dropIndexes;
- (void)finalizeStatements;
- (id)initDatabaseAtPath:(id)a0 forClientWithIdentifier:(id)a1 delegate:(id)a2;

@end
