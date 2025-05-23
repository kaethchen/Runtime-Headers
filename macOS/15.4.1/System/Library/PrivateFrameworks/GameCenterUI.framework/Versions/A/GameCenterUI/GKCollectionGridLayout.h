@class NSDictionary, NSIndexSet;

@interface GKCollectionGridLayout : GKCollectionFocusingLayout

@property (retain, nonatomic) NSDictionary *itemAttributes;
@property (retain, nonatomic) NSDictionary *headerAttributes;
@property (retain, nonatomic) NSDictionary *footerAttributes;
@property (nonatomic) BOOL didPerformInitialContentInsetScroll;
@property (nonatomic) BOOL centersItemsInExcessSpace;
@property (nonatomic) BOOL sectionInsetRelativeWithContentInset;
@property (nonatomic) long long autoWidthColumns;
@property (nonatomic) double extraSectionHeaderToCellSpace;
@property (retain, nonatomic) NSIndexSet *sectionsThatShowHeaderWhenEmpty;
@property (retain, nonatomic) NSIndexSet *sectionsThatShowFootersWhenEmpty;
@property (nonatomic) BOOL shouldPerformInitialScrollToContentInsetTop;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (void)applyDefaults;
- (long long)lastValidSection;

@end
