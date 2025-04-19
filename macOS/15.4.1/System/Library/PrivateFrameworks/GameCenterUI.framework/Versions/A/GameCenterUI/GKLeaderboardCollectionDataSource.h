@class GKLeaderboardSectionHeaderView;

@interface GKLeaderboardCollectionDataSource : GKGameLayerCollectionDataSource

@property (weak) GKLeaderboardSectionHeaderView *sectionHeaderView;

- (void).cxx_destruct;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (double)topMargin;
- (double)cellSpacing;
- (double)headerSpacing;
- (long long)allowedColumnCount:(long long)a0;
- (void)collectionView:(id)a0 updateLayoutForSectionHeader:(id)a1;
- (void)collectionViewFrameDidChange:(id)a0;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)a0;
- (void)updateHighlightsInSectionHeader:(id)a0;

@end
