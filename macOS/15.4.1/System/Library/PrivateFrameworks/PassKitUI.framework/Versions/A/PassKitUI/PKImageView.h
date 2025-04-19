@interface PKImageView : NSImageView

@property BOOL ignoredByAccessibility;

- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (BOOL)mouseDownCanMoveWindow;

@end
