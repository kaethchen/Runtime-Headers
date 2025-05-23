@class PXPhotosLayoutSpec, NSString, PXPhotosViewModel, PXGItemPlacement, NSIndexSet, PXAssetsDataSource, PXSectionsBlurController;
@protocol PXPhotosSectionBodyLayoutProvider, PXPhotosSectionHeaderLayoutProvider;

@interface PXPhotosSectionedLayout : PXGStackLayout <PXGSublayoutProvider, PXChangeObserver, PXGSublayoutFaultingDelegate, PXAssetsSectionLayoutDelegate, PXPhotosSectionBodyLayoutProviderInvalidationDelegate, PXPhotosSectionHeaderLayoutProviderInvalidationDelegate, PXBlurrableSectionsSource, PXGCaptureSpriteSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    BOOL _isRecreatingContentLayouts;
    BOOL _shouldRecreateHeaderLayouts;
    BOOL _shouldRecreateBodyLayouts;
    BOOL _isUpdatingSublayouts;
    struct { BOOL invalidationDelegate; BOOL floatingHeaderSnapshot; BOOL configureSectionHeaderLayout; } _headerProviderRespondsTo;
    long long _dataSourceIdentifierOfCachedSectionsWithSelectedItems;
    NSIndexSet *_cachedSectionsWithSelectedItems;
    long long _numberOfForcedSections;
    PXSectionsBlurController *_sectionsBlurController;
    unsigned int _captureSpriteIndex;
}

@property (nonatomic) double interSectionSpacing;
@property (nonatomic) double horizontalScrollingHintFactor;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } preferredCornerRadius;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (retain, nonatomic) PXPhotosLayoutSpec *spec;
@property (retain, nonatomic) id<PXPhotosSectionHeaderLayoutProvider> headerLayoutProvider;
@property (retain, nonatomic) id<PXPhotosSectionBodyLayoutProvider> bodyLayoutProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskRect;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } maskCornerRadius;
@property (retain, nonatomic) PXGItemPlacement *placementOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (id)initWithViewModel:(id)a0;
- (void)didUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateSublayoutsDataSource;
- (BOOL)allowsDanglingUpdatesAssertions;
- (id /* block */)assetsIteratorForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)axSpriteIndexes;
- (BOOL)_configureSectionLayout:(id)a0 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (id)_createAnimationForChangeFromDataSource:(id)a0 toDataSource:(id)a1 changeDetails:(id)a2;
- (void)_forceSectionIfNeeded:(long long)a0;
- (void)_invalidateCaptureSprite;
- (void)_invalidatePreferredCornerRadius;
- (void)_invalidateSectionsBlur;
- (void)_invalidateSublayoutTransforms;
- (void)_invalidateSublayoutsConfiguration;
- (void)_invalidateSublayoutsSpec;
- (void)_performAddActionForSectionLayout:(id)a0;
- (BOOL)_shouldFaultInSection:(long long)a0 inDataSource:(id)a1;
- (void)_updateCaptureSprite;
- (void)_updatePreferredCornerRadius;
- (void)_updateSectionsBlur;
- (void)_updateSublayoutGridConfiguratorForLayout:(id)a0;
- (void)_updateSublayoutTransforms;
- (void)_updateSublayoutsConfiguration;
- (void)_updateSublayoutsDataSource;
- (void)_updateSublayoutsSpec;
- (BOOL)allowsSublayoutUpdateCycleAssertions;
- (id /* block */)assetCollectionsIteratorForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)assetSectionLayoutDidConfigureLayouts:(id)a0;
- (void)assetSectionLayoutDidUpdateVisibleRectOvershootFactor:(id)a0;
- (unsigned long long)behaviorForCaptureSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id /* block */)dateIntervalFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;
- (void)didFaultInSublayout:(id)a0 atIndex:(long long)a1 fromEstimatedContentSize:(struct CGSize { double x0; double x1; })a2;
- (void)enumerateAssetsSectionSublayoutsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateAssetsSectionSublayoutsUsingBlock:(id /* block */)a0;
- (void)enumerateBlurrableSectionsIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 using:(id /* block */)a1;
- (void)enumerateItemsGeometriesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumerateSectionBoundariesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (id)layout:(id)a0 navigationObjectReferenceForSublayoutAtIndex:(long long)a1;
- (BOOL)layout:(id)a0 shouldPreventFaultOutOfSublayout:(id)a1;
- (id)layoutSnapshotDataSource;
- (id /* block */)locationNamesFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)navigationObjectReferenceForLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)photosSectionBodyLayoutInvalidateConfiguredLayouts:(id)a0;
- (void)photosSectionHeaderLayoutInvalidateConfiguredLayouts:(id)a0;
- (id)presentedItemsGeometryForSection:(unsigned long long)a0 inDataSource:(id)a1;
- (void)setBlurIntensity:(double)a0 forSectionAt:(long long)a1;
- (BOOL)shouldApplyItemChangeDetailsToSublayout:(id)a0;
- (BOOL)shouldApplySpriteTransformToSublayouts;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id)topmostHeaderSnapshotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)visibleRectDidChange;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)willUpdate;

@end
