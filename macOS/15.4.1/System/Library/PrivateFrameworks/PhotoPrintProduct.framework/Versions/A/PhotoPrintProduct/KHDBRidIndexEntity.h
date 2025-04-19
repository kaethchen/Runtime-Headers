@class NSString, KHDBPreparedSql;

@interface KHDBRidIndexEntity : KHDBEntity {
    KHDBPreparedSql *_updateRidIndexSql;
}

@property (retain, nonatomic) NSString *returnsIdColumn;
@property (nonatomic) BOOL allowsDuplicateIds;

- (void)dealloc;
- (void)updateRidIndex:(id)a0 indexName:(id)a1 value:(id)a2;
- (void)deleteForIndexName:(id)a0;
- (void)deleteForIndexName:(id)a0 value:(id)a1;
- (id)initWithTableName:(id)a0 forDatabaseManager:(id)a1 forDatabase:(id)a2;
- (BOOL)returnsIdsForColumn:(id)a0;
- (id)ridIndexesByValueForIndexName:(id)a0;
- (id)updateRidIndexSql;

@end
