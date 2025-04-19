@class SEMDatabaseConnection, NSMutableDictionary;

@interface SEMFTSWriter : NSObject {
    SEMDatabaseConnection *_database;
    NSMutableDictionary *_commandCache;
    BOOL _inTransaction;
}

+ (BOOL)_isIndexedFieldType:(unsigned short)a0;
+ (unsigned char)capabilityRequirementForItemType:(unsigned short)a0;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (BOOL)clearWithError:(id *)a0;
- (BOOL)cleanup:(id *)a0;
- (BOOL)databaseExists;
- (BOOL)_databaseExists;
- (BOOL)_beginTransactionWithError:(id *)a0;
- (BOOL)_deleteAllRecords:(id *)a0;
- (BOOL)commitChanges:(id *)a0;
- (BOOL)deleteExternalId:(id)a0 error:(id *)a1;
- (BOOL)deleteExternalIds:(id)a0 error:(id *)a1;
- (id)initWithDatabaseURL:(id)a0 dataProtectionClass:(int)a1;
- (BOOL)insertRecordsFromCascadeItem:(id)a0 originAppId:(id)a1 externalId:(id)a2 error:(id *)a3;
- (BOOL)rollbackChanges:(id *)a0;

@end
