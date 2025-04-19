@class KHDBPreparedSql;

@interface KHDBChangeEntity : KHDBEntity {
    KHDBPreparedSql *_updateMaskSql;
    BOOL _ignoreCurrentDatabaseChanges;
}

+ (id)concatenateUuidSet:(id)a0 secondSet:(id)a1;
+ (id)concatenateUuids:(id)a0 secondUuid:(id)a1;

- (void)dealloc;
- (id)createChangeForUuid:(id)a0 type:(int)a1 mask:(unsigned long long)a2 changeDate:(id)a3 changeDbUuid:(id)a4;
- (id)createChangeForUuids:(id)a0 type:(int)a1 mask:(unsigned long long)a2 changeDate:(id)a3 changeDbUuid:(id)a4;
- (BOOL)ignoreCurrentDatabaseChanges;
- (id)infoDictionaryForChangeForUuid:(id)a0 type:(int)a1 mask:(unsigned long long)a2 changeDate:(id)a3 changeDbUuid:(id)a4;
- (id)initWithJoinTableName:(id)a0 forDatabaseManager:(id)a1 forDatabase:(id)a2;
- (id)initWithTableName:(id)a0 forDatabaseManager:(id)a1 forDatabase:(id)a2;
- (id)modifiedUuidsForDbToMasksAfterDate:(id)a0 limitToUuids:(id)a1 excludeDbUuid:(id)a2;
- (id)modifiedUuidsForDbToMasksForConcatenatedChangeUuid:(id)a0 afterDate:(id)a1 limitToUuids:(id)a2 excludeDbUuid:(id)a3;
- (id)modifiedUuidsToMasksAfterDate:(id)a0 limitToUuids:(id)a1;
- (id)modifiedUuidsToMasksForConcatenatedChangeUuid:(id)a0 afterDate:(id)a1 limitToUuids:(id)a2;
- (id)readForDupSqlWhere:(id)a0;
- (void)setIgnoreCurrentDatabaseChanges:(BOOL)a0;
- (void)updateChangeForModelId:(id)a0 newMask:(unsigned long long)a1 changeDate:(id)a2;
- (id)uuidToDbMapForChangeType:(int)a0 afterDate:(id)a1 limitToUuids:(id)a2;
- (id)uuidToDbMapForChangeType:(int)a0 afterDate:(id)a1 limitToUuids:(id)a2 excludeDbUuid:(id)a3;
- (id)uuidToDbMapForConcatenatedChangeUuid:(id)a0 changeType:(int)a1 afterDate:(id)a2 limitToUuids:(id)a3;
- (id)uuidsForChangeType:(int)a0;
- (id)uuidsForChangeType:(int)a0 afterDate:(id)a1 limitToUuids:(id)a2;
- (id)uuidsForConcatenatedChangeUuid:(id)a0 changeType:(int)a1 afterDate:(id)a2 limitToUuids:(id)a3;

@end
