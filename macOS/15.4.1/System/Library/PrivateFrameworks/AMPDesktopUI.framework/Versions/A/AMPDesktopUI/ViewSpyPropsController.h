@class NSMenu, NSViewSpy, NSString, NSSearchField, NSArray, NSOutlineView, NSObject, NSMutableArray;

@interface ViewSpyPropsController : NSViewController <NSOutlineViewDataSource, NSOutlineViewDelegate, NSSearchFieldDelegate> {
    NSOutlineView *mProperties;
    NSArray *mViewData;
    NSObject *mCurrentObject;
    NSViewSpy *mOwner;
    NSMutableArray *mLastExpandedSectionsDuringSearch;
}

@property (retain, nonatomic) NSSearchField *propertyFilter;
@property (retain, nonatomic) NSMenu *viewFilterMenu;
@property (nonatomic) unsigned long long focusedConstraintID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setOwner:(id)a0;
- (id)initWithOwner:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)controlTextDidChange:(id)a0;
- (void)copy:(id)a0;
- (void)loadView;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 rowViewForItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)performFindPanelAction:(id)a0;
- (void)searchFieldDidEndSearching:(id)a0;
- (void)searchFieldDidStartSearching:(id)a0;
- (void)viewDidLoad;
- (void)_outlineViewSelectionDidChange:(id)a0;
- (void)switchToObject:(id)a0;
- (id)_createItemLabelView:(id)a0;
- (void)applicationObjectWasUpdated:(id)a0 newData:(id)a1;
- (BOOL)canNavigateToObject:(id)a0;
- (void)changeConstraintFiltering:(id)a0;
- (id)currentVisualizationOptions;
- (id)defaultsKeyForSection:(id)a0;
- (void)dimForLoading;
- (BOOL)isValidTargetObject:(id)a0;
- (void)rebuildViewData:(id)a0;
- (void)setFocusedConstraintID:(unsigned long long)a0 active:(BOOL)a1;
- (void)setHighlightingForText:(id)a0;
- (void)showViewOptionsPopup:(id)a0;
- (void)updateForObject:(id)a0 includeViewData:(BOOL)a1;
- (void)visualizeSecondaryObject:(id)a0 activate:(BOOL)a1;

@end
