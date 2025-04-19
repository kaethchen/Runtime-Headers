@class NSString;

@interface XQueryOperatorExpr : XQueryExpr <XQueryExprBehavior> {
    long long _type;
    id _left;
    id _right;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)arithmeticOperatorEvaluate:(long long)a0 withLeft:(id)a1 right:(id)a2 forContext:(id)a3;
+ (id)compareValue:(id)a0 withValue:(id)a1 forType:(long long)a2 withContext:(id)a3;
+ (id)evaluateOperator:(long long)a0 withLeft:(id)a1 right:(id)a2 forContext:(id)a3;
+ (id)generalComparisonOperatorEvaluate:(long long)a0 withLeft:(id)a1 right:(id)a2 forContext:(id)a3;
+ (id)logicalOperatorEvaluate:(long long)a0 withLeft:(id)a1 right:(id)a2 forContext:(id)a3;
+ (id)nodeComparisonOperatorEvaluate:(long long)a0 withLeft:(id)a1 right:(id)a2 forContext:(id)a3;
+ (long long)operatorClassification:(long long)a0;
+ (id)operatorExpr:(long long)a0 withRightExpr:(id)a1;
+ (id)rangeOperatorEvaluate:(long long)a0 withLeft:(id)a1 right:(id)a2 forContext:(id)a3;
+ (id)sequenceOperatorEvaluate:(long long)a0 withLeft:(id)a1 right:(id)a2 forContext:(id)a3;
+ (id)valueComparisonOperatorEvaluate:(long long)a0 withLeft:(id)a1 right:(id)a2 forContext:(id)a3;

- (void)dealloc;
- (void)finalize;
- (long long)operatorType;
- (id)left;
- (id)right;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)initWithType:(long long)a0 rightExpr:(id)a1;
- (void)setLeftExpr:(id)a0;

@end
