@interface NSKeyPathExpression : NSFunctionExpression

- (void)dealloc;
- (id)keyPath;
- (id)predicateFormat;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)initWithKeyPath:(id)a0;
- (id)initWithOperand:(id)a0 andKeyPath:(id)a1;
- (id)pathExpression;

@end
