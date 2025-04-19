@class NSString, NSArray;

@interface SEMSQLCommandCriterion : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *columnName;
@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSString *comparingColumnName;
@property (readonly, nonatomic) NSArray *columnValues;
@property (readonly, nonatomic) long long sqlOperator;
@property (readonly, nonatomic) NSArray *subCriteria;

+ (id)criterionWithANDSubCriteria:(id)a0;
+ (id)criterionWithColumnName:(id)a0 BETWEENLowerColumnValue:(id)a1 ANDUpperColumnValue:(id)a2;
+ (id)criterionWithColumnName:(id)a0 EQUALSColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 GREATERTHANOrEqualColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 INColumnValues:(id)a1;
+ (id)criterionWithColumnName:(id)a0 ISColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 ISNOTColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 LESSTHANColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 LESSTHANOrEqualColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 LIKEWildcardPattern:(id)a1;
+ (id)criterionWithColumnName:(id)a0 MATCHSearchPhrase:(id)a1;
+ (id)criterionWithColumnName:(id)a0 NOTEQUALSColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 onTable:(id)a1 EQUALSColumnValue:(id)a2;
+ (id)criterionWithORSubCriteria:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithColumnName:(id)a0 columnValue:(id)a1 sqlOperator:(long long)a2;
- (id)initWithColumnName:(id)a0 columnValues:(id)a1 sqlOperator:(long long)a2;
- (id)initWithColumnName:(id)a0 tableName:(id)a1 columnValue:(id)a2 sqlOperator:(long long)a3;
- (id)initWithSubCriteria:(id)a0 sqlOperator:(long long)a1;

@end
