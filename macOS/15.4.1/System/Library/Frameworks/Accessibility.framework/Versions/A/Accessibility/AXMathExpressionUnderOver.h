@class AXMathExpression;

@interface AXMathExpressionUnderOver : AXMathExpression

@property (retain, nonatomic) AXMathExpression *baseExpression;
@property (retain, nonatomic) AXMathExpression *overExpression;
@property (retain, nonatomic) AXMathExpression *underExpression;

- (void).cxx_destruct;
- (id)initWithBaseExpression:(id)a0 underExpression:(id)a1 overExpression:(id)a2;

@end
