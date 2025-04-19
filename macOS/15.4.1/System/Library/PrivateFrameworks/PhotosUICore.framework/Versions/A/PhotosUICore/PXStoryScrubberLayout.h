@class PXStoryModel, PXStoryScrubberContentLayout, PXStoryViewModel, PXStoryScrubberScrollLayout, NSDate, NSNumber, NSString;

@interface PXStoryScrubberLayout : PXGSplitLayout <PXChangeObserver, PXGViewSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isUpdatingWantsVisible;
    unsigned int _focusGuideSpriteIndex;
}

@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (retain, nonatomic) PXStoryModel *mainModel;
@property (retain, nonatomic) NSDate *currentSkipSegmentActionDate;
@property (retain, nonatomic) NSDate *lastScrubbedDate;
@property (retain, nonatomic) PXStoryScrubberContentLayout *contentLayout;
@property (retain, nonatomic) PXStoryScrubberScrollLayout *scrollLayout;
@property (retain, nonatomic) NSNumber *alphaOverride;
@property (nonatomic) unsigned short focusGuideContentVersion;
@property (nonatomic) BOOL isHidden;
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
- (id)axSpriteIndexes;
- (BOOL)allowsRepeatedSublayoutsUpdates;
- (void)_invalidateFocusGuide;
- (void)_invalidateLastScrubbedDate;
- (void)_invalidateMainModel;
- (void)_invalidateSkipSegmentActionDate;
- (void)_invalidateSublayouts;
- (void)_invalidateSublayoutsAlpha;
- (void)_invalidateVisibilityFraction;
- (void)_invalidateWantsVisible;
- (void)_loadSublayoutsIfNeeded;
- (void)_loadTVSublayoutsIfNeeded;
- (BOOL)_shouldEnableFocusGuide;
- (void)_updateFocusGuide;
- (void)_updateLastScrubbedDate;
- (void)_updateMainModel;
- (void)_updateSkipSegmentActionDate;
- (void)_updateSublayouts;
- (void)_updateSublayoutsAlpha;
- (void)_updateVisibilityFraction;
- (void)_updateWantsVisible;
- (void)alphaDidChange;
- (BOOL)disableDebugAssertionForSublayoutUpdates;
- (void)getDetailedPresentedPlacement:(id)a0 forItemReference:(id)a1;
- (id)preferredFocusLayouts;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (void)setDetailedPlacementOverride:(id)a0 forItemReference:(id)a1;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)willUpdate;

@end
