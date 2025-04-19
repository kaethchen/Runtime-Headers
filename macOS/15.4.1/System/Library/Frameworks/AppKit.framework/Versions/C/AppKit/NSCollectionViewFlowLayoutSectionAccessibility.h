@interface NSCollectionViewFlowLayoutSectionAccessibility : NSCollectionViewSectionAccessibility

- (BOOL)__hasSupplementaryViewForSelector:(SEL)a0 sizeDelegateBlock:(id /* block */)a1 sizeNoDelegateBlock:(id /* block */)a2;
- (BOOL)_hasSupplementaryViewForElementKind:(id)a0;
- (BOOL)hasSupplementaryFooterView;
- (BOOL)hasSupplementaryHeaderView;

@end
