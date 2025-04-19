@class NSExpression, NSArray;

@interface NSFunctionExpression : NSExpression {
    NSExpression *_operand;
    SEL _selector;
    NSArray *_arguments;
}

+ (BOOL)supportsSecureCoding;

- (id)_keypathsForDerivedPropertyValidation:(id *)a0;
- (id)_mapKVCOperatorsToFunctionsInContext:(id)a0;
- (id)minimalFormInContext:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (SEL)selector;
- (id)arguments;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)function;
- (BOOL)_shouldUseParensWithDescription;
- (id)operand;
- (void)allowEvaluation;
- (id)initWithSelector:(SEL)a0 argumentArray:(id)a1;
- (id)predicateFormat;
- (BOOL)_allowsEvaluation;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)binaryOperatorForSelector;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)initWithExpressionType:(unsigned long long)a0 operand:(id)a1 selector:(SEL)a2 argumentArray:(id)a3;
- (id)initWithTarget:(id)a0 selectorName:(id)a1 arguments:(id)a2;

@end
