@class _NSUICollectionViewItemKey, NSUICollectionView;

@interface _NSUICollectionViewElementAccessibilityProxy : NSAccessibilityProxy {
    NSUICollectionView *_collectionView;
    _NSUICollectionViewItemKey *_elementKey;
    unsigned long long _arrayIndex;
}

+ (id /* block */)indexPathComparator;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)indexPath;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsSelectedAttributeSettable;
- (id)accessibilityParentAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityPositionAttribute;
- (id)accessibilitySelectedAttribute;
- (id)accessibilitySizeAttribute;
- (id)collectionView;
- (BOOL)isSelectable;
- (BOOL)isSelected;
- (id)layoutAttributes;
- (unsigned long long)arrayIndex;
- (id)initWithCollectionView:(id)a0 elementKey:(id)a1 arrayIndex:(unsigned long long)a2;

@end
