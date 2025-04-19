@class NSString, EFSQLColumnExpression;

@interface EFSQLDisqualifiedColumnExpression : EFSQLColumnExpression <EFCacheable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) EFSQLColumnExpression *columnExpression;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)cachedSelf;
- (void)ef_renderSQLExpressionInto:(id)a0;

@end
