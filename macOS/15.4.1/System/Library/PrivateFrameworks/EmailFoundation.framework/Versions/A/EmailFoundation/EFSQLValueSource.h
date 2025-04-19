@class NSString;
@protocol EFSQLValueExpressable;

@interface EFSQLValueSource : NSObject

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) id<EFSQLValueExpressable> selectResultExpression;
@property (readonly, nonatomic) NSString *selectResultAlias;

- (void).cxx_destruct;
- (id)comparisonExpressionForValue:(id)a0 predicateOperator:(unsigned long long)a1;
- (id)initWithTableName:(id)a0 selectResultAlias:(id)a1;

@end
