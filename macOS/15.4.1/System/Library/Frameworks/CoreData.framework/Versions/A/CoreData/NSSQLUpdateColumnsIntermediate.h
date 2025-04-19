@class NSDictionary;

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate

@property (retain, nonatomic) NSDictionary *propertiesToUpdate;

- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)governingAliasForKeypathExpression:(id)a0;
- (id)initWithPropertiesToUpdate:(id)a0 inScope:(id)a1;
- (BOOL)isUpdateColumnsScoped;

@end
