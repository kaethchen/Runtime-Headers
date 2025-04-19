@class NSView, NSCollectionView, NSCollectionViewItem;

@interface NSCollectionViewChildProxy : NSAccessibilityProxy {
    unsigned long long _index;
    NSCollectionView *_collectionView;
    NSCollectionViewItem *_item;
    NSView *_realElement;
}

+ (id)proxyForItemAtIndex:(unsigned long long)a0 collectionView:(id)a1;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)item;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsParentAttributeSettable;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityParentAttribute;
- (id)accessibilityPositionAttribute;
- (id)accessibilitySizeAttribute;
- (id)accessibilityWindowAttribute;
- (id)initWithIndex:(unsigned long long)a0 collectionView:(id)a1;
- (id)realElement;

@end
