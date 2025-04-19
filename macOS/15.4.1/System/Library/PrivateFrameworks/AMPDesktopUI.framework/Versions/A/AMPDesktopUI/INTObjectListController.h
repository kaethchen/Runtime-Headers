@class NSString, NSViewSpy, NSOutlineView, ListNode, NSObject;

@interface INTObjectListController : NSViewController <NSOutlineViewDelegate, NSOutlineViewDataSource> {
    NSOutlineView *_outlineView;
}

@property (retain, nonatomic) NSObject *rootObject;
@property (retain, nonatomic) ListNode *currentTree;
@property (copy, nonatomic) NSString *filterText;
@property (nonatomic) BOOL showFilteredChildren;
@property (nonatomic) BOOL expanding;
@property (retain, nonatomic) NSObject *selectedObject;
@property (nonatomic) NSViewSpy *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)outlineViewItemDidExpand:(id)a0;
- (void)outlineViewSelectionDidChange:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)_updatePreferredSize;
- (BOOL)_shouldIncludeItem:(id)a0;
- (void)outlineViewSelectionWillChange:(id)a0;
- (id)_buildTreeRecurse:(id)a0;
- (void)_createMirrorTree;
- (void)_expandViewsWithWarnings:(id)a0;
- (id)_nodeForItem:(id)a0;
- (id)_nodeForItem:(id)a0 startingAt:(id)a1;
- (id)_recurseGetLargestStringForNode:(id)a0 indent:(int)a1 stringLength:(long long *)a2;
- (void)_refreshTree;
- (BOOL)_revealNode:(id)a0;
- (id)_selectedObjectNotRoot;
- (double)minInsetForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshCellDisplays;
- (void)rootSelectionChanged:(id)a0;
- (void)setRootObject:(id)a0 andCurrentSelection:(id)a1;
- (void)setTransparent;

@end
