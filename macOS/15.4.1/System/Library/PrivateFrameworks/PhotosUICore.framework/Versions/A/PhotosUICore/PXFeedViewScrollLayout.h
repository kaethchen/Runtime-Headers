@class NSString, PXFeedViewModel, PXFeedContentLayout;

@interface PXFeedViewScrollLayout : PXGScrollLayout <PXGScrollLayoutDelegate> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isClearingLastVisibleAreaAnchoringInformation;
}

@property (readonly, nonatomic) PXFeedContentLayout *feedContentLayout;
@property (readonly, nonatomic) PXFeedViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)update;
- (void)_invalidateContentSize;
- (void)_updateContentSize;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateAnchorForVisibleArea;
- (void)_invalidateScrollParameters;
- (void)_updateAnchorForVisibleArea;
- (void)_updateScrollParameters;
- (void)clearLastVisibleAreaAnchoringInformation;
- (unsigned long long)contentChangeTrend;
- (id)initWithViewModel:(id)a0 displayingFeedContentLayout:(id)a1;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (void)referenceSizeDidChange;
- (void)scrollLayoutWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2 currentContentOffset:(struct CGPoint { double x0; double x1; })a3;
- (long long)scrollableAxis;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;

@end
