@interface NSISRestrictedToNonNegativeVariableToBeMinimized : NSISVariable

- (int)valueRestriction;
- (id)markedConstraint;
- (BOOL)shouldBeMinimized;

@end
