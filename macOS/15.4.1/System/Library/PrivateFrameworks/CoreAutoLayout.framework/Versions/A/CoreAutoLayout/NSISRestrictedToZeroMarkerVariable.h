@interface NSISRestrictedToZeroMarkerVariable : NSISVariable

- (int)valueRestriction;
- (id)markedConstraint;
- (BOOL)shouldBeMinimized;

@end
