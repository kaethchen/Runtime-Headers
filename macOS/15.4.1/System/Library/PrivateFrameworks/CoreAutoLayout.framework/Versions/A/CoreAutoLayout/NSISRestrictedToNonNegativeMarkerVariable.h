@interface NSISRestrictedToNonNegativeMarkerVariable : NSISVariable

- (int)valueRestriction;
- (id)markedConstraint;
- (BOOL)shouldBeMinimized;

@end
