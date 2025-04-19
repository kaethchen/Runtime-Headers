@interface NSTableViewListCellProxy : NSTableViewCellProxy

- (BOOL)_canDeselect;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsSelectedAttributeSettable;
- (id)accessibilityParentAttribute;
- (id)accessibilitySelectedAttribute;
- (void)accessibilitySetSelectedAttribute:(id)a0;
- (id)accessibilitySizeAttribute;

@end
