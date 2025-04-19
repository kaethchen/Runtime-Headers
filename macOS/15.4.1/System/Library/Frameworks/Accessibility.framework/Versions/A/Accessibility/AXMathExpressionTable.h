@class NSArray;

@interface AXMathExpressionTable : AXMathExpression

@property (retain, nonatomic) NSArray *Expressions;
@property (readonly, nonatomic) NSArray *expressions;

- (void).cxx_destruct;
- (id)initWithExpressions:(id)a0;

@end
