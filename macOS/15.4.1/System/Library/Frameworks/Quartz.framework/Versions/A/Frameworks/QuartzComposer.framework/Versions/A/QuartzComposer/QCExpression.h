@class QCNumberPort, QCMathematicalExpression;

@interface QCExpression : QCProgrammablePatch {
    QCNumberPort *outputResult;
    QCMathematicalExpression *_evaluator;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)sourceTypes;

- (void)dealloc;
- (id)compileSourceOfType:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setSource:(id)a0 ofType:(id)a1;

@end
