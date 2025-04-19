@class NSString, NSArray, HMBLocalSQLContext, NSMutableSet, HMBSQLStatement, HMBSQLQueryStatement;

@interface HMBLocalSQLQueryTable : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMBSQLStatement *deleteAll;
@property (readonly, nonatomic) HMBSQLStatement *updateRecord;
@property (readonly, nonatomic) HMBSQLStatement *deleteRecord;
@property (readonly, nonatomic) NSMutableSet *userQueries;
@property (nonatomic) BOOL finalized;
@property (readonly, weak, nonatomic) HMBLocalSQLContext *context;
@property (readonly, nonatomic) Class modelClass;
@property (readonly, nonatomic) NSString *modelType;
@property (readonly, nonatomic) NSArray *columnFields;
@property (readonly, nonatomic) NSArray *columnNames;
@property (readonly, nonatomic) HMBSQLQueryStatement *selectAll;
@property (readonly, nonatomic) NSString *dropTableSQL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void)finalize;
- (void).cxx_destruct;
- (id)logIdentifier;
- (BOOL)prepareWithError:(id *)a0;
- (unsigned long long)_deleteQueryForRecordRow:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)_deleteAllQueriesForZoneRow:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)_updateQueryForZoneRow:(unsigned long long)a0 recordRow:(unsigned long long)a1 encodedColumns:(id)a2 error:(id *)a3;
- (id)buildQueriableFieldsForModel:(id)a0;
- (id)initWithContext:(id)a0 queryModel:(Class)a1;
- (id)performQueryOn:(id)a0 properties:(id)a1 filter:(id /* block */)a2;

@end
