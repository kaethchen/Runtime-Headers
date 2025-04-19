@interface NSISRestrictedToNonNegativeMarkerVariableToBeMinimized : NSISVariable

- (int)valueRestriction;
- (id)markedConstraint;
- (BOOL)shouldBeMinimized;

@end
