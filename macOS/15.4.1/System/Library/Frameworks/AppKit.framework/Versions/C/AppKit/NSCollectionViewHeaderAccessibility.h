@interface NSCollectionViewHeaderAccessibility : NSCollectionViewSupplementaryViewAccessibility

- (id)accessibilityNextContentSibling;
- (id)accessibilityFirstContentSibling;
- (long long)accessibilityIndex;
- (id)accessibilityPreviousContentSibling;
- (id)supplementaryView;
- (id)supplementaryViewIfAlreadyMade;

@end
