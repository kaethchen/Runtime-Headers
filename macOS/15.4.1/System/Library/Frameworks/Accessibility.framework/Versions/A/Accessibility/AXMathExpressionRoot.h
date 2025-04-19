@class NSArray, AXMathExpression;

@interface AXMathExpressionRoot : AXMathExpression

@property (retain, nonatomic) AXMathExpression *rootIndexExpression;
@property (retain, nonatomic) NSArray *radicandExpressions;

- (void).cxx_destruct;
- (id)initWithRadicandExpressions:(id)a0 rootIndexExpression:(id)a1;

@end
