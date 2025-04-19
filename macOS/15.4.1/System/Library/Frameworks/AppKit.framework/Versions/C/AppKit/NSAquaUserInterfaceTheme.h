@interface NSAquaUserInterfaceTheme : NSUserInterfaceTheme

- (id)name;
- (id)_mostCorrectRuleForRule:(id)a0 comparedToRule:(id)a1;
- (const struct NSIBSnapSet { char *x0; char x1; } *)_ruleForView:(id)a0 comparedToContainer:(id)a1 withEdge:(id)a2;
- (const struct NSIBSnapSet { char *x0; char x1; } *)_ruleForView:(id)a0 comparedToView:(id)a1 withEdge:(id)a2;
- (double)fallbackStandardSpacingForOrientation:(long long)a0;
- (BOOL)resolvedValue:(double *)a0 forSymbolicConstant:(id)a1 inConstraint:(id)a2 containerView:(id)a3;

@end
