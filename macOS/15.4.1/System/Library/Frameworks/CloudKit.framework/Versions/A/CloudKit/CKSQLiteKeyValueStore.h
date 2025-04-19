@interface CKSQLiteKeyValueStore : CKSQLiteTable <CKSQLiteDatabaseKeyValuePropertyCleanup>

+ (id)dbProperties;
+ (Class)entryClass;

- (id)UUIDValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2 error:(id *)a3;
- (id)dataValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2 error:(id *)a3;
- (id)dateValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2 error:(id *)a3;
- (void)deleteKeyValuePropertiesWithScope:(unsigned long long)a0 identifiers:(id)a1;
- (id)numberValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2 error:(id *)a3;
- (void)purgeKeyValuePropertiesForGroupName:(id)a0 tableNames:(id)a1;
- (void)purgeOrphanedKeyValuePropertiesWithScope:(unsigned long long)a0 identifiersToKeep:(id)a1;
- (void)purgeOrphanedKeys;
- (void)purgeOrphanedTableGroupKeys;
- (void)purgeOrphanedTableKeys;
- (id)setDataValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)setDateValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)setNumberValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)setStringValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)setUUIDValue:(id)a0 forKey:(id)a1 scope:(unsigned long long)a2 scopeIdentifier:(id)a3;
- (id)stringValueForKey:(id)a0 scope:(unsigned long long)a1 scopeIdentifier:(id)a2 error:(id *)a3;
- (id)wakeFromDatabase;

@end
