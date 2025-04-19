@class NSArray, AXMathExpression;

@interface AXMathExpressionSubSuperscript : AXMathExpression

@property (retain, nonatomic) AXMathExpression *baseExpression;
@property (retain, nonatomic) NSArray *subscriptExpressions;
@property (retain, nonatomic) NSArray *superscriptExpressions;

- (void).cxx_destruct;
- (id)initWithBaseExpression:(id)a0 subscriptExpressions:(id)a1 superscriptExpressions:(id)a2;

@end
