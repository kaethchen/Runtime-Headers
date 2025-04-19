@class NSArray, NSString;

@interface AXMathExpressionFenced : AXMathExpression

@property (retain, nonatomic) NSArray *expressions;
@property (retain, nonatomic) NSString *openString;
@property (retain, nonatomic) NSString *closeString;

- (void).cxx_destruct;
- (id)initWithExpressions:(id)a0 openString:(id)a1 closeString:(id)a2;

@end
