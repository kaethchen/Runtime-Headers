@interface SCRCMathSpaceExpression : SCRCMathExpression

- (id)initWithDictionary:(id)a0;
- (BOOL)beginsWithSpace;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (BOOL)endsWithSpace;
- (id)mathMLString;

@end
