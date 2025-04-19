@interface ULCLDatabaseMigrator : NSObject

@property (nonatomic) struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *localDb;
@property (nonatomic) BOOL migrateAllData;

- (struct unique_ptr<CLSqliteDatabase, std::default_delete<CLSqliteDatabase>> { struct __compressed_pair<CLSqliteDatabase *, std::default_delete<CLSqliteDatabase>> { struct CLSqliteDatabase *x0; } x0; })_connectToLocationdDatabase:(id)a0;
- (void)_logStatsForExportedDatabase:(struct ULMiloSqliteDatabase { struct CLSqliteDatabase *x0; } *)a0;
- (void)_logStatsForLocalDatabase;
- (BOOL)_migrateData:(struct ULMiloSqliteDatabase { struct CLSqliteDatabase *x0; } *)a0;
- (BOOL)_migrateTableUsingPaging:(struct ULMiloSqliteDatabase { struct CLSqliteDatabase *x0; } *)a0 tableName:(const char *)a1 migrationLimit:(unsigned int)a2 pageSize:(unsigned int)a3 copyPageBlock:(id /* block */)a4;
- (id)initWithLocalDb:(struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *)a0;
- (BOOL)migrateCLDatabaseFromPath:(id)a0;

@end
