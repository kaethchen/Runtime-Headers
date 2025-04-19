@class SOCorrectionCollectionViewItem, NSString, NSCollectionView, NSCollectionViewFlowLayout, NSTrackingArea, NSMutableArray, SOCorrectionCollectionHeaderView;

@interface SOCorrectionViewController : NSViewController <NSCollectionViewDataSource, NSCollectionViewDelegate, NSCollectionViewDelegateFlowLayout, NSWindowDelegate>

@property (readonly, nonatomic) NSString *selectedString;
@property (retain, nonatomic) NSMutableArray *suggestions;
@property (readonly, nonatomic) unsigned long long badgeDigits;
@property (readonly, nonatomic) struct CGSize { double width; double height; } badgeSize;
@property (readonly, nonatomic) unsigned long long rows;
@property (readonly, nonatomic) unsigned long long columns;
@property (retain) SOCorrectionCollectionHeaderView *sizingHeaderView;
@property (retain) SOCorrectionCollectionViewItem *sizingViewItem;
@property (retain) NSCollectionView *collectionView;
@property (retain) NSCollectionViewFlowLayout *collectionLayout;
@property (retain) NSTrackingArea *correctionsTrackingArea;
@property (retain) NSString *selectedAlternativeString;
@property (copy) id /* block */ completionBlock;
@property BOOL keyInWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)loadView;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLayout;
- (double)_itemWidthForColumns:(unsigned long long)a0;
- (id)initWithSelectedString:(id)a0 alternativeStrings:(id)a1 emojiStrings:(id)a2;

@end
