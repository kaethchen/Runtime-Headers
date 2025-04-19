@class NSString, NSArray, CCDatabaseSelect;

@interface CCSQLCommandCriterion : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *columnName;
@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSString *comparingColumnName;
@property (readonly, nonatomic) NSString *comparingTableName;
@property (readonly, nonatomic) NSArray *columnValues;
@property (readonly, nonatomic) long long sqlOperator;
@property (readonly, nonatomic) NSArray *subCriteria;
@property (readonly, nonatomic) CCDatabaseSelect *subQuery;

+ (id)criterionWithNOTEXISTSSubQuery:(id)a0;
+ (id)criterionWithANDSubCriteria:(id)a0;
+ (id)criterionWithColumnName:(id)a0 BETWEENLowerColumnValue:(id)a1 ANDUpperColumnValue:(id)a2;
+ (id)criterionWithColumnName:(id)a0 EQUALSColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 GREATERTHANOrEqualColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 INColumnValues:(id)a1;
+ (id)criterionWithColumnName:(id)a0 INSubQuery:(id)a1;
+ (id)criterionWithColumnName:(id)a0 ISColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 ISNOTColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 LESSTHANColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 LESSTHANOrEqualColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 LIKEWildcardPattern:(id)a1;
+ (id)criterionWithColumnName:(id)a0 MATCHSearchPhrase:(id)a1;
+ (id)criterionWithColumnName:(id)a0 NOTEQUALSColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 onTable:(id)a1 EQUALSColumnName:(id)a2 onTable:(id)a3;
+ (id)criterionWithColumnName:(id)a0 onTable:(id)a1 EQUALSColumnValue:(id)a2;
+ (id)criterionWithEXISTSSubQuery:(id)a0;
+ (id)criterionWithNOTSubCriteria:(id)a0;
+ (id)criterionWithORSubCriteria:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithColumnName:(id)a0 columnValue:(id)a1 sqlOperator:(long long)a2;
- (id)initWithColumnName:(id)a0 columnValues:(id)a1 sqlOperator:(long long)a2;
- (id)initWithColumnName:(id)a0 subQuery:(id)a1 sqlOperator:(long long)a2;
- (id)initWithColumnName:(id)a0 tableName:(id)a1 columnValue:(id)a2 sqlOperator:(long long)a3;
- (id)initWithColumnName:(id)a0 tableName:(id)a1 otherColumnName:(id)a2 otherTableName:(id)a3 sqlOperator:(long long)a4;
- (id)initWithSubCriteria:(id)a0 sqlOperator:(long long)a1;
- (id)initWithSubQuery:(id)a0 sqlOperator:(long long)a1;

@end
