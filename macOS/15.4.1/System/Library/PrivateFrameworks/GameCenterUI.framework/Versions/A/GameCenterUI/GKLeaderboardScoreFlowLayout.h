@interface GKLeaderboardScoreFlowLayout : NSCollectionViewFlowLayout

@property (nonatomic) BOOL isInsertingItemsAbove;
@property (nonatomic) double heightOfInsertedItems;
@property (nonatomic) struct CGSize { double width; double height; } contentSizeBeforeInsertingItemsAbove;
@property (nonatomic) double initialContentOffset;

@end
