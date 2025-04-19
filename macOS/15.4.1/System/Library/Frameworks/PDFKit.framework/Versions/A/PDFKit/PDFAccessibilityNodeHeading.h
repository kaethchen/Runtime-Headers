@interface PDFAccessibilityNodeHeading : PDFAccessibilityNode

- (unsigned long long)_level;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (id)accessibilityValue;
- (void)buildAccessibilityHierarchy;

@end
