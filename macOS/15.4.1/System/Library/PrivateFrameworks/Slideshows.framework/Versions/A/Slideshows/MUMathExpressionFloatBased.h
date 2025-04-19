@interface MUMathExpressionFloatBased : MUMathExpressionBase {
    void *mInterpreter;
}

+ (float)invalidResult;
+ (float)evaluateString:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (void)cleanup;
- (id)stringValue;
- (float)evaluate;
- (BOOL)isConstant;
- (float)valueForVariable:(id)a0;
- (id)initWithString:(id)a0 error:(id *)a1;
- (BOOL)isValueIllegal:(float)a0;
- (void)_resetVariableIndicies;
- (void)replaceVariable:(id)a0 withValue:(float)a1;
- (void)resetAllVariables;
- (void)setValue:(float)a0 forVariable:(id)a1;
- (void)setVariableValues:(id)a0;

@end
