@class NSNumber, PXStoryViewModel, NSString;

@interface PXStoryViewLegibilityOverlayLayout : PXGLayout <PXGSolidColorSource, PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _solidDimmingSpriteIndex;
    unsigned int _topGradientDimmingSpriteIndex;
    unsigned int _bottomGradientDimmingSpriteIndex;
    unsigned short _gradientResizableCapInsetsIndex;
}

@property (retain, nonatomic) NSNumber *alphaOverride;
@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateContent;
- (void)update;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)axSpriteIndexes;
- (void)_invalidateContent;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)getDetailedPresentedPlacement:(id)a0 forItemReference:(id)a1;
- (id)imageConfigurationAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;
- (void)setDetailedPlacementOverride:(id)a0 forItemReference:(id)a1;

@end
