@class NSArray, AXMathExpression;

@interface AXMathExpressionMultiscript : AXMathExpression

@property (retain, nonatomic) AXMathExpression *baseExpression;
@property (retain, nonatomic) NSArray *prescriptExpressions;
@property (retain, nonatomic) NSArray *postscriptExpressions;

- (void).cxx_destruct;
- (id)initWithBaseExpression:(id)a0 prescriptExpressions:(id)a1 postscriptExpressions:(id)a2;

@end
