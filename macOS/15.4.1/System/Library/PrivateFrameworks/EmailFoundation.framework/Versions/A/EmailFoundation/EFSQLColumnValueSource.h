@class NSString, EFSQLColumnExpression;

@interface EFSQLColumnValueSource : EFSQLValueSource {
    EFSQLColumnExpression *_columnExpression;
    NSString *_columnAlias;
}

- (void).cxx_destruct;
- (id)initWithColumn:(id)a0;
- (id)comparisonExpressionForValue:(id)a0 predicateOperator:(unsigned long long)a1;
- (id)initWithColumn:(id)a0 columnAlias:(id)a1;
- (id)initWithColumn:(id)a0 sourceTableAlias:(id)a1 columnAlias:(id)a2;
- (id)selectResultExpression;

@end
