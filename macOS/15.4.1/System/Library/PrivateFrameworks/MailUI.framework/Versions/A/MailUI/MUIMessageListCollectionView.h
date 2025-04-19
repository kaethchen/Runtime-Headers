@class NSArray;

@interface MUIMessageListCollectionView : NSTableView

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } mui_safeVisibleBounds;
@property (readonly, nonatomic) NSArray *visibleCells;
@property (readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } adjustedContentInset;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;

- (long long)numberOfItemsInSection:(long long)a0;
- (id)cellForItemAtIndexPath:(id)a0;
- (void)deselectItemAtIndexPath:(id)a0 animated:(BOOL)a1;
- (id)cellsForItemAtIndexPath:(id)a0;
- (BOOL)mui_isIndexPathVisible:(id)a0;
- (void)mui_scrollToItemAtIndexPath:(id)a0 atScrollPosition:(long long)a1 animated:(BOOL)a2;
- (void)mui_selectItemAtIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(long long)a2;

@end
