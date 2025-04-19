@interface NSLayoutYAxisAnchor : NSLayoutAnchor

- (id)anchorByOffsettingWithConstant:(double)a0;
- (id)anchorByOffsettingWithDimension:(id)a0;
- (id)anchorByOffsettingWithDimension:(id)a0 multiplier:(double)a1 constant:(double)a2;
- (id)anchorWithOffsetToAnchor:(id)a0;
- (id)constraintEqualToSystemSpacingBelowAnchor:(id)a0 multiplier:(double)a1;
- (id)constraintLessThanOrEqualToSystemSpacingBelowAnchor:(id)a0 multiplier:(double)a1;
- (id)constraintGreaterThanOrEqualToSystemSpacingBelowAnchor:(id)a0 multiplier:(double)a1;
- (id)distanceTo:(id)a0;
- (BOOL)isCompatibleWithAnchor:(id)a0;
- (id)offsetBy:(double)a0;
- (id)offsetByDimension:(id)a0;
- (id)offsetByDimension:(id)a0 times:(double)a1 plus:(double)a2;
- (id)offsetTo:(id)a0;
- (BOOL)validateOtherAttribute:(long long)a0;

@end
