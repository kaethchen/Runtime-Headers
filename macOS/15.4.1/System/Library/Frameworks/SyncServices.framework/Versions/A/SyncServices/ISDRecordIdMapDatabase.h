@interface ISDRecordIdMapDatabase : ISDDatabase {
    struct sqlite3_stmt { } *_addMappingStatement;
    struct sqlite3_stmt { } *_allMappingsStatement;
    struct sqlite3_stmt { } *_allGlobalIdsStatement;
    struct sqlite3_stmt { } *_allLocalIdsStatement;
    struct sqlite3_stmt { } *_countMappingsStatement;
    struct sqlite3_stmt { } *_getMappingForGlobalIdStatement;
    struct sqlite3_stmt { } *_getMappingForLocalIdStatement;
    struct sqlite3_stmt { } *_removeMappingsForEntityNamesStatement;
    struct sqlite3_stmt { } *_removeMappingsForGlobalIdsStatement;
    struct sqlite3_stmt { } *_removeOneMappingForGlobalIdStatement;
    struct sqlite3_stmt { } *_addUnknownRecordTypeStatement;
    struct sqlite3_stmt { } *_getUnknownRecordIdsStatement;
    struct sqlite3_stmt { } *_getUnknownTypeForRecordIdStatement;
    struct sqlite3_stmt { } *_removeUnknownRecordTypeStatement;
    struct sqlite3_stmt { } *_removeAllUnknownRecordsTypeStatement;
}

+ (BOOL)createDatabaseAtPath:(id)a0;

- (void)dealloc;
- (void)finalize;
- (void)closeDatabase;
- (void)addMappings:(id)a0;
- (void)addMapping:(id)a0;
- (void)addUnknownRecordType:(id)a0 forRecordId:(id)a1;
- (id)allGlobalIds;
- (id)allLocalIds;
- (void)finalizeStatements;
- (id)getRecordIdsOfUnknownType;
- (id)getUnknownTypeForRecordId:(id)a0;
- (id)initDatabaseAtPath:(id)a0;
- (id)newIdMapForGlobalId:(id)a0 uniqueEntityNames:(id)a1;
- (id)newIdMapForLocalId:(id)a0 uniqueEntityNames:(id)a1;
- (unsigned int)numberOfMappings;
- (void)removeAllUnknownRecordIds;
- (void)removeMappingForGlobalId:(id)a0;
- (void)removeMappingsForEntityNames:(id)a0;
- (void)removeMappingsForGlobalIds:(id)a0;
- (void)removeUnknownRecordId:(id)a0;

@end
