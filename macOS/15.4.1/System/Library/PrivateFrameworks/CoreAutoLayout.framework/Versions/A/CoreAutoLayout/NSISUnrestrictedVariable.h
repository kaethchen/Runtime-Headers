@interface NSISUnrestrictedVariable : NSISVariable

- (int)valueRestriction;
- (id)markedConstraint;
- (BOOL)shouldBeMinimized;

@end
