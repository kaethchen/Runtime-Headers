@class NSString;
@protocol EFSQLValueExpressable;

@interface EFSQLBlockValueSource : EFSQLValueSource {
    id /* block */ _creationBlock;
    id<EFSQLValueExpressable> _selectResultExpression;
    NSString *_selectResultAlias;
}

- (void).cxx_destruct;
- (id)comparisonExpressionForValue:(id)a0 predicateOperator:(unsigned long long)a1;
- (id)initWithSourceTableName:(id)a0 creationBlock:(id /* block */)a1 selectResultExpression:(id)a2 selectResultAlias:(id)a3;
- (id)selectResultExpression;

@end
