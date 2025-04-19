@interface PDFAccessibilityNodeListItem : PDFAccessibilityNode

- (long long)accessibilityDisclosureLevel;
- (BOOL)isAccessibilityDisclosed;
- (BOOL)_isDisclosed;
- (BOOL)_isDisclosing;

@end
