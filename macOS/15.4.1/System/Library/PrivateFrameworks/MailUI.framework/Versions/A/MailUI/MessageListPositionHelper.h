@class NSArray, MUIMessageListCollectionView, MUIMessageListDiffableDataSource;
@protocol EMCollectionItemID;

@interface MessageListPositionHelper : NSObject

@property (retain, nonatomic) MUIMessageListCollectionView *collectionView;
@property (retain, nonatomic) MUIMessageListDiffableDataSource *dataSource;
@property (nonatomic) double startingContentOffset;
@property (retain, nonatomic) id<EMCollectionItemID> firstVisibleItemID;
@property (nonatomic) long long firstVisibleIndex;
@property (nonatomic) double firstVisibleCellOrigin;
@property (nonatomic) BOOL userIsScrolling;
@property (readonly, nonatomic) NSArray *actuallyVisibleItemIDs;

- (void).cxx_destruct;
- (void)reset;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_calculateStartingPositionForCollectionView:(id)a0 dataSource:(id)a1;
- (id)_firstVisibleIndexPathForCollectionView:(id)a0;
- (id)_sortedIndexPathsForVisibleItemsInCollectionView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleRectInMessageList;
- (id)initWithCollectionView:(id)a0 dataSource:(id)a1;
- (void)recalculateFirstVisibleIndex;

@end
