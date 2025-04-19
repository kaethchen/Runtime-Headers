@class NSString;
@protocol EFSQLExpressable;

@interface EFSQLBinaryExpression : NSObject <EFSQLBitExpressable, EFSQLValueExpressable>

@property (readonly, nonatomic) id<EFSQLExpressable> left;
@property (readonly, nonatomic) id<EFSQLExpressable> right;
@property (readonly, nonatomic) unsigned long long binaryOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;

- (void).cxx_destruct;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (id)initWithLeft:(id)a0 operator:(unsigned long long)a1 right:(id)a2;
- (void)setColumnExpression:(id)a0;

@end
