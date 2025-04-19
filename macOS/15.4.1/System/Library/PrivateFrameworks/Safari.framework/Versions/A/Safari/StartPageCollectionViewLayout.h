@class NSArray, NSIndexPath;
@protocol StartPageCollectionViewLayoutSectionProvider;

@interface StartPageCollectionViewLayout : NSCollectionViewLayout {
    NSArray *_layoutSectionDefinitions;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _effectiveEdgeInsets;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedClipViewBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleBounds;
    struct CGSize { double width; double height; } _contentSize;
    BOOL _isViewFlipped;
    BOOL _isViewRTL;
    BOOL _shouldDelayLayoutToPrepare;
}

@property (weak, nonatomic) id<StartPageCollectionViewLayoutSectionProvider> sectionProvider;
@property (nonatomic) double maximumContentWidth;
@property (nonatomic) double interSectionSpacing;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } edgeInsets;
@property (nonatomic) BOOL centerContentVerticallyIfPossible;
@property (retain, nonatomic) NSIndexPath *draggedIndexPath;
@property (retain, nonatomic) NSIndexPath *dropIndexPath;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)initWithSectionProvider:(id)a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForDropTargetAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForInterItemGapBeforeIndexPath:(id)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateItemSizeAndNumberOfColumnsOfDefinition:(id)a0 withContentWidth:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_clipViewBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedFrameForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_collectionViewVisibleBounds;
- (double)_contentHeightWithEdgeInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inBoundsOfSection:(id)a1;
- (void)_enumerateSectionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (long long)_itemIndexForPoint:(struct CGPoint { double x0; double x1; })a0 inSectionDefinition:(id)a1 isInterItem:(BOOL *)a2;
- (id)_layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1 sectionDefinition:(id)a2;
- (id)_layoutAttributesForItemAtIndexPath:(id)a0 sectionDefinition:(id)a1;
- (id)_layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1 sectionDefinition:(id)a2;
- (void)_regenerateSectionDescriptions;
- (id)_sectionDefinitionForDropTargetAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateContentHeightAndSectionOffsets;
- (void)_updateSectionHeightOfDefinition:(id)a0 withNumberOfItems:(long long)a1;
- (BOOL)canCollapseSectionAtIndex:(long long)a0;
- (id)displayIndexPathForItemAtIndexPath:(id)a0;
- (id)indexPathForDisplayedItemAtIndexPath:(id)a0;
- (BOOL)isSectionCollapsedAtIndex:(long long)a0;
- (long long)rowForIndexPath:(id)a0;
- (long long)sectionIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setDropIndexPathForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setDropIndexPathForPoint:(struct CGPoint { double x0; double x1; })a0 withMaxItem:(id)a1;
- (void)setIsSectionCollapsed:(BOOL)a0 atIndex:(long long)a1;

@end
