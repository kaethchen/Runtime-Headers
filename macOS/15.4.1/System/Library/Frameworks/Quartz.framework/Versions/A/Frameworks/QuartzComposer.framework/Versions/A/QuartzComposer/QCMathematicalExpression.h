@interface QCMathematicalExpression : NSObject {
    void *_interpreter;
}

+ (double)evaluateString:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (double)evaluate;
- (id)variables;
- (id)initWithString:(id)a0 error:(id *)a1;
- (void)setVariable:(double)a0 atIndex:(unsigned long long)a1;
- (double)variableAtIndex:(unsigned long long)a0;

@end
