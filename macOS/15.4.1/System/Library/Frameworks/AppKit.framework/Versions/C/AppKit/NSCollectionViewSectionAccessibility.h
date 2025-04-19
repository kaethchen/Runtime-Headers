@class NSAccessibilityWeakReferenceContainer, NSCollectionViewHeaderAccessibility, NSMutableDictionary, NSArray, NSCollectionViewFooterAccessibility, NSCollectionViewAccessibilityHelper, NSCollectionView;

@interface NSCollectionViewSectionAccessibility : NSAccessibilityElement {
    NSAccessibilityWeakReferenceContainer *_collectionViewAccessibility;
    NSMutableDictionary *_supplementaryElementsDictionary;
    id _supplementaryHeaderElement;
    id _supplementaryFooterElement;
    NSArray *_accessibilityVisibleChildren;
}

@property (readonly, weak, nonatomic) NSCollectionView *collectionView;
@property (nonatomic) long long indexInCollectionView;
@property (readonly, weak, nonatomic) NSCollectionViewAccessibilityHelper *collectionViewAccessibility;
@property (readonly, nonatomic) NSCollectionViewHeaderAccessibility *supplementaryHeaderElement;
@property (readonly, nonatomic) NSCollectionViewFooterAccessibility *supplementaryFooterElement;

- (void)dealloc;
- (id)description;
- (long long)compare:(id)a0;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityLastContentSibling;
- (id)accessibilityNextContentSibling;
- (void)_dumpVisibleChildren;
- (BOOL)_hasSupplementaryViewForElementKind:(id)a0;
- (id)_makeSupplementaryViewForElementKind:(id)a0 atIndexPath:(id)a1;
- (id)accessibilityActionNames;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (id)accessibilityChildren;
- (void)accessibilityDidEndScrolling;
- (id)accessibilityFirstContentSibling;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (long long)accessibilityIndex;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (void)accessibilityInvalidateLayout;
- (id)accessibilityLabel;
- (long long)accessibilityOrientation;
- (id)accessibilityParent;
- (void)accessibilityPerformAction:(id)a0;
- (BOOL)accessibilityPerformScrollToVisible;
- (void)accessibilityPrepareLayout;
- (id)accessibilityPreviousContentSibling;
- (id)accessibilityRole;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilitySubrole;
- (id)accessibilitySupplementaryElementsExcludingHeaderFooter;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityVisibleChildren;
- (id)accessibilityWindow;
- (id)collectionView;
- (id)collectionViewAccessibility;
- (id)firstElementInSection:(BOOL)a0;
- (BOOL)hasSupplementaryFooterView;
- (BOOL)hasSupplementaryHeaderView;
- (id)initWithCollectionViewAccessibility:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)lastElementInSection:(BOOL)a0;
- (unsigned long long)offsetForSupplementaryHeaderView;
- (void)setAccessibilityVisibleChildren:(id)a0;
- (id)supplementaryElementOfKind:(id)a0 indexPath:(id)a1;
- (id)supplementaryFooterElement;
- (id)supplementaryFooterView:(BOOL)a0;
- (id)supplementaryHeaderElement;
- (id)supplementaryHeaderView:(BOOL)a0;
- (id)supplementaryViewOfKind:(id)a0 atIndexPath:(id)a1 makeIfNeeded:(BOOL)a2;
- (id)visibleItemsInSection:(long long)a0;
- (id)visibleSupplementaryViewsInSection:(long long)a0;

@end
