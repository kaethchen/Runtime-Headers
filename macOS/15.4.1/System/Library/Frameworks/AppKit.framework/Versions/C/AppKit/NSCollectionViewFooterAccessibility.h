@interface NSCollectionViewFooterAccessibility : NSCollectionViewSupplementaryViewAccessibility

- (id)accessibilityLastContentSibling;
- (id)accessibilityNextContentSibling;
- (long long)accessibilityIndex;
- (id)accessibilityPreviousContentSibling;
- (id)supplementaryView;
- (id)supplementaryViewIfAlreadyMade;

@end
