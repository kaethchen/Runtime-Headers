@class NSString, FedStatsSQLiteDatabase;

@interface FedStatsSQLiteCategoryDatabase : NSObject

@property (readonly, copy, nonatomic) NSString *tableName;
@property (readonly, copy, nonatomic) NSString *categoryColumnName;
@property (readonly, copy, nonatomic) NSString *indexColumnName;
@property (readonly, nonatomic) unsigned long long minIndex;
@property (readonly, nonatomic) unsigned long long maxIndex;
@property (readonly) FedStatsSQLiteDatabase *sqliteDB;

+ (id)databaseWithFileURL:(id)a0 minIndex:(unsigned long long)a1 maxIndex:(unsigned long long)a2 checkForPrimaryKey:(BOOL)a3 error:(id *)a4;
+ (id)categoryDatabaseAt:(id)a0 withCategories:(id)a1 tableName:(id)a2 categoryColumnName:(id)a3 indexColumnName:(id)a4 error:(id *)a5;

- (void).cxx_destruct;
- (id)decode:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)dimensionality;
- (id)encode:(id)a0 error:(id *)a1;
- (id)encodeCategories:(id)a0 error:(id *)a1;
- (id)initWithSQLiteDatabase:(id)a0 tableName:(id)a1 categoryColumnName:(id)a2 indexColumnName:(id)a3 minIndex:(unsigned long long)a4 maxIndex:(unsigned long long)a5;

@end
