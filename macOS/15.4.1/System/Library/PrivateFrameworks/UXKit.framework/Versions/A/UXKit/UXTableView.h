@class NSColor, NSIndexPath, NSMenu;
@protocol UXTableViewDelegate, UXTableViewDataSource;

@interface UXTableView : UXCollectionView {
    struct { unsigned char delegateImplementsTitleForHeaderInSection : 1; unsigned char delegateImplementsTitleForFooterInSection : 1; unsigned char delegateImplementsHeaderViewForSection : 1; unsigned char delegateImplementsFooterViewForSection : 1; unsigned char delegateImplementsHeightForHeaderInSection : 1; unsigned char delegateImplementsHeightForRowAtIndexPath : 1; unsigned char delegateImplementsDidSelectionRowAtIndexPath : 1; unsigned char delegateImplementsShouldHighlightRowAtIndexPath : 1; unsigned char delegateImplementsDidHighlightRowAtIndexPath : 1; unsigned char delegateImplementsDidUnhighlightRowAtIndexPath : 1; unsigned char delegateImplementsEditingStyleForRowAtIndexPath : 1; unsigned char delegateImplementsDidDeselectRowAtIndexPath : 1; } _tableViewDelegateFlags;
    struct { unsigned char dataSourceImplementsNumberOfSectionsInTableView : 1; unsigned char dataSourceImplementsCanEditRowAtIndexPath : 1; unsigned char dataSourceImplementsCommitEditingStyleForRowAtIndexPath : 1; } _tableViewDataSourceFlags;
    NSIndexPath *_highlightedIndexPath;
    NSMenu *_observedMenu;
}

@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic, setter=_setFloatingHeadersDisabled:) BOOL _floatingHeadersDisabled;
@property (weak, nonatomic) id<UXTableViewDataSource> tableViewDataSource;
@property (weak, nonatomic) id<UXTableViewDelegate> tableViewDelegate;
@property (nonatomic) double rowHeight;
@property (nonatomic) double alpha;
@property (nonatomic) long long separatorStyle;
@property (copy, nonatomic) NSColor *separatorColor;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } separatorInset;

+ (unsigned long long)collectionViewScrollPositionFromScrollPosition:(long long)a0;
+ (Class)documentClass;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (void)_menuDidBeginTracking:(id)a0;
- (void)_menuDidEndTracking:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)beginUpdates;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)deleteWordBackward:(id)a0;
- (void)endUpdates;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)moveRight:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setDataSource:(id)a0;
- (void)setNeedsDisplay:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (long long)numberOfRowsInSection:(long long)a0;
- (id)dequeueReusableCellWithReuseIdentifier:(id)a0 forIndexPath:(id)a1;
- (void)moveRowAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (id)cellForRowAtIndexPath:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)deleteRowsAtIndexPaths:(id)a0 withRowAnimation:(long long)a1;
- (void)deleteSections:(id)a0 withRowAnimation:(long long)a1;
- (id)dequeueReusableCellWithIdentifier:(id)a0;
- (id)dequeueReusableCellWithIdentifier:(id)a0 forIndexPath:(id)a1;
- (id)dequeueReusableHeaderFooterViewWithIdentifier:(id)a0;
- (void)deselectRowAtIndexPath:(id)a0 animated:(BOOL)a1;
- (id)footerViewForSection:(long long)a0;
- (id)headerViewForSection:(long long)a0;
- (id)indexPathForSelectedRow;
- (id)indexPathsForVisibleRows;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)insertRowsAtIndexPaths:(id)a0 withRowAnimation:(long long)a1;
- (void)insertSections:(id)a0 withRowAnimation:(long long)a1;
- (void)registerClass:(Class)a0 forCellReuseIdentifier:(id)a1;
- (void)registerClass:(Class)a0 forHeaderFooterViewReuseIdentifier:(id)a1;
- (void)reloadRowsAtIndexPaths:(id)a0 withRowAnimation:(long long)a1;
- (void)scrollToRowAtIndexPath:(id)a0 atScrollPosition:(long long)a1 animated:(BOOL)a2;
- (void)selectRowAtIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(long long)a2;
- (BOOL)overdrawEnabled;
- (void)_checkForAccessoryViewsInScrollerAreas;
- (void)collectionView:(id)a0 itemWasRightClickedAtIndexPath:(id)a1 withEvent:(id)a2;
- (void)collectionView:(id)a0 layout:(id)a1 supplementaryViewDidBeginFloatingAtIndexPath:(id)a2 kind:(id)a3;
- (void)collectionView:(id)a0 layout:(id)a1 supplementaryViewDidEndFloatingAtIndexPath:(id)a2 kind:(id)a3;
- (id)dequeueReusableHeaderFooterViewWithReuseIdentifier:(id)a0 forSection:(long long)a1;
- (id)indexPathForClickedRow;
- (void)setOverdrawEnabled:(BOOL)a0;

@end
