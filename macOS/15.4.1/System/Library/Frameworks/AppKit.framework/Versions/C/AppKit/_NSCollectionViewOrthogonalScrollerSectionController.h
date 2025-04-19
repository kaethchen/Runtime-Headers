@class NSString, NSMapTable, NSIndexSet, NSHashTable, _NSCollectionViewCore, NSScrollView, NSUUID;

@interface _NSCollectionViewOrthogonalScrollerSectionController : NSObject <NSScrollViewDelegate>

@property (weak, nonatomic) _NSCollectionViewCore *collectionView;
@property (nonatomic) BOOL layoutRTL;
@property (retain, nonatomic) NSMapTable *scrollViewFromSectionMap;
@property (retain, nonatomic) NSMapTable *scrollViewToSectionMap;
@property (retain, nonatomic) NSHashTable *frontMostElements;
@property (retain, nonatomic) NSHashTable *elementsBelowOrthogonalScrollView;
@property (retain, nonatomic) NSIndexSet *currentOrthogonalSectionIndexes;
@property (retain, nonatomic) NSScrollView *scrollViewCurrentlyBeingConfigured;
@property (retain, nonatomic) NSUUID *lastUpdateIdentifier;
@property (nonatomic) BOOL shouldUpdateElementOrdering;
@property (setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property (setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_sectionScrollViewForIndexPath:(id)a0;
- (id)_addSectionScrollViewForIndexPath:(id)a0;
- (id)_addSectionScrollViewForSection:(long long)a0;
- (double)_adjustedDestinationForLocation:(double)a0 inScrollView:(id)a1 scrollsVertically:(BOOL)a2 velocity:(double)a3 pageSizeGetter:(id /* block */)a4;
- (void)_configureScrollView:(id)a0 forSection:(long long)a1 baseContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (struct CGSize { double x0; double x1; })_contentSizeForSection:(long long)a0 layout:(id)a1;
- (id)_managedScrollViews;
- (void)_placeView:(id)a0 belowOrthogonalScrollViewForSection:(long long)a1;
- (long long)_sectionForSectionScrollView:(id)a0;
- (id)_sectionScrollViewForSection:(long long)a0;
- (void)_updateElementOrdering;
- (void)_updateElementOrderingIfNecessary;
- (void)_updateEmbeddedScrollViewContentSizeForSection:(long long)a0;
- (void)addElementIfNeeded:(id)a0;
- (void)adjustElementHierarchyOrderingForOrthogonalElementIfNeeded:(id)a0 layoutAttributes:(id)a1;
- (void)contentViewDidScroll:(id)a0;
- (BOOL)hasOrthogonalSections;
- (id)initWithCollectionView:(id)a0;
- (BOOL)isElementInOrthogonalScrollingSection:(id)a0;
- (BOOL)isIndexPathInOrthogonalScrollingSection:(id)a0;
- (void)performLayout;
- (void)reconfigureOrthogonalSectionsForUpdate:(id)a0 identifier:(id)a1;
- (void)removeEmptyScrollViews:(id /* block */)a0;
- (double)scrollView:(id)a0 pageAlignedOriginOnAxis:(long long)a1 forProposedDestination:(double)a2 currentOrigin:(double)a3 initialOrigin:(double)a4 velocity:(double)a5;
- (void)scrollViewBeganMomentum:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)updateContentSizesForOrthogonalSections:(id)a0;

@end
