@class NSArray, NSUICollectionViewLayout, NSDictionary;

@interface _NSUICollectionViewLayoutAccessibilityContext : NSObject {
    NSUICollectionViewLayout *_layout;
    NSArray *_itemProxiesArray;
    NSDictionary *_itemIndexPathToProxyMap;
    NSArray *_supplementaryViewProxiesArray;
}

- (void).cxx_destruct;
- (unsigned long long)numberOfItems;
- (id)initWithLayout:(id)a0;
- (unsigned long long)numberOfChildren;
- (id)accessibilityProxiesForChildren;
- (id)_itemProxiesArray;
- (void)_obtainAccessibilityProxies;
- (id)_supplementaryViewProxiesArray;
- (id)accessibilityProxiesForChildrenInIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityProxyForChildAtIndex:(unsigned long long)a0;
- (id)accessibilityProxyForItemAtIndexPath:(id)a0;
- (unsigned long long)indexOfChildProxy:(id)a0;
- (unsigned long long)numberOfSupplementaryViews;

@end
