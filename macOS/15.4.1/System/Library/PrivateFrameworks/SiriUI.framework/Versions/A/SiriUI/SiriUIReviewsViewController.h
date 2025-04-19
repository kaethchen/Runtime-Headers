@class SiriUIScrollView, NSString, NSView, SALocalSearchReviewList, NSMutableArray, NSCollectionView;
@protocol SiriUIReviewsViewControllerDelegate;

@interface SiriUIReviewsViewController : SiriUISnippetViewController <NSCollectionViewDataSource, NSCollectionViewDelegateFlowLayout> {
    NSMutableArray *_cellSizeForRowCache;
    NSCollectionView *_collectionView;
    SiriUIScrollView *_scrollView;
    struct { unsigned char didLoadCollectionView : 1; unsigned char viewForRatingForReview : 1; unsigned char offsetForRatingView : 1; } _delegateFlags;
}

@property (weak, nonatomic) id<SiriUIReviewsViewControllerDelegate> reviewsDelegate;
@property (retain, nonatomic) SALocalSearchReviewList *reviewList;
@property (nonatomic) long long reviewCharacterLimit;
@property (retain, nonatomic) NSView *totalRatingView;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } totalRatingViewOffset;
@property (nonatomic) double verticalSpaceNeededForRatingView;
@property (retain, nonatomic) NSView *providerView;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } providerViewOffset;
@property (copy, nonatomic) NSString *providerName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 shouldChangeItemsAtIndexPaths:(id)a1 toHighlightState:(long long)a2;
- (id)collectionView:(id)a0 shouldSelectItemsAtIndexPaths:(id)a1;
- (void)loadView;
- (void)updateSubtitle;
- (double)desiredHeightForWidth:(double)a0;
- (Class)headerViewClass;
- (id)_displayStringForReviewCount:(long long)a0 providerName:(id)a1 providerView:(id)a2;
- (double)_effectiveContentWidthForItemCellsForWidth:(double)a0;
- (double)_horizontalCellSpacing;
- (double)_minCellWidth;
- (long long)_numberOfCells;
- (long long)_numberOfColumnsForWidth:(double)a0;
- (long long)_numberOfRowsForWidth:(double)a0;
- (id)_punchoutForIndexPath:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_reviewCollectionInsets;
- (long long)_rowForItemAtIndex:(long long)a0 forWidth:(double)a1;
- (struct CGSize { double x0; double x1; })_sizeForCellAtIndex:(long long)a0 forWidth:(double)a1;
- (void)configureReusableHeaderView:(id)a0;
- (void)didEndDisplayingReusableHeaderView:(id)a0;
- (void)siriDidLayoutSnippetView;

@end
