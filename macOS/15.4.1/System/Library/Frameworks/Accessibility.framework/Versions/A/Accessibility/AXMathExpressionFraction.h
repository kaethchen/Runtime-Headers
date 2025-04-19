@class AXMathExpression;

@interface AXMathExpressionFraction : AXMathExpression

@property (retain, nonatomic) AXMathExpression *numeratorExpression;
@property (retain, nonatomic) AXMathExpression *denimonatorExpression;

- (void).cxx_destruct;
- (id)initWithNumeratorExpression:(id)a0 denimonatorExpression:(id)a1;

@end
