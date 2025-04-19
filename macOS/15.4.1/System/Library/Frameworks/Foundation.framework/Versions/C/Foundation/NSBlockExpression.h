@class NSArray;

@interface NSBlockExpression : NSExpression {
    id /* block */ _block;
    NSArray *_arguments;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)arguments;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)expressionBlock;
- (id)predicateFormat;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)initWithType:(unsigned long long)a0 block:(id /* block */)a1 arguments:(id)a2;

@end
