@interface MUMathExpressionDoubleBased : MUMathExpressionBase {
    void *mInterpreter;
}

+ (double)invalidResult;
+ (double)evaluateString:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (void)cleanup;
- (id)stringValue;
- (double)evaluate;
- (BOOL)isConstant;
- (double)valueForVariable:(id)a0;
- (id)initWithString:(id)a0 error:(id *)a1;
- (BOOL)isValueIllegal:(double)a0;
- (void)_resetVariableIndicies;
- (void)replaceVariable:(id)a0 withValue:(double)a1;
- (void)resetAllVariables;
- (void)setValue:(double)a0 forVariable:(id)a1;
- (void)setVariableValues:(id)a0;

@end
