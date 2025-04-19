@interface IFPathBundleVersionAction : IFPathAction

+ (id)types;

- (void)_padTuple:(id *)a0 andTuple:(id *)a1;
- (BOOL)evaluateActionOnNode:(id)a0 fromPlan:(id)a1 withSearchContext:(id)a2 atTarget:(id)a3 returningError:(id *)a4;

@end
