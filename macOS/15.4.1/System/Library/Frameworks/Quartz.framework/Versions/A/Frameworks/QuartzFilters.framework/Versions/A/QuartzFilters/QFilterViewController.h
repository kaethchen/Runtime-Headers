@class NSMenu, NSOutlineView, QFilter, NSMutableDictionary, NSDictionary, NSMutableArray, QFilterUndoController, NSButton;
@protocol QFilterViewControllerDelegate;

@interface QFilterViewController : NSViewController <QFilterUndoControllerDelegate>

@property (retain) NSDictionary *componentClassToViewInfoMap;
@property (retain) NSMutableDictionary *cachedMeasurementViews;
@property (retain) QFilterUndoController *undoController;
@property (readonly) id<QFilterViewControllerDelegate> delegate;
@property (copy, nonatomic) NSMutableArray *filterItems;
@property (readonly, nonatomic) QFilter *selectedFilter;
@property (retain, nonatomic) NSMenu *actionMenu;
@property (retain, nonatomic) NSOutlineView *filterView;
@property (retain, nonatomic) NSButton *removeFilterButton;

+ (void)initialize;
+ (long long)_compareFilterItem:(id)a0 withItem:(id)a1;
+ (void)_updateLockButton:(id)a0 forFilterInfo:(id)a1;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)delete:(id)a0;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (double)outlineView:(id)a0 heightOfRowByItem:(id)a1;
- (BOOL)outlineView:(id)a0 isGroupItem:(id)a1;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (id)outlineView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)outlineViewSelectionDidChange:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)help:(id)a0;
- (void)valueChangedAtKeyPath:(id)a0 ofObject:(id)a1;
- (void)_addComponentWithID:(int)a0 toFilter:(id)a1;
- (id)_cachedMeasurementViewForItemOfClass:(Class)a0;
- (id)_enclosingTableViewOfView:(id)a0 row:(long long *)a1;
- (void)_ensureCustomCategoryExists;
- (id)_filterFromActionMenuItemSender:(id)a0;
- (void)_sendDidAddFilterNotification:(id)a0;
- (void)_sendDidModifyFilterNotification:(id)a0;
- (void)_sendDidRemoveFilterNotification:(id)a0;
- (void)addComponentAssignProfileAction:(id)a0;
- (void)addComponentButtonCLicked:(id)a0;
- (void)addComponentCommentsAction:(id)a0;
- (void)addComponentConverToProfileAction:(id)a0;
- (void)addComponentDefaultProfileAction:(id)a0;
- (void)addComponentDomainsAction:(id)a0;
- (void)addComponentImageCompressionAction:(id)a0;
- (void)addComponentImageConvolutionAction:(id)a0;
- (void)addComponentImageSamplingAction:(id)a0;
- (void)addComponentIntermediateTransformAction:(id)a0;
- (void)addComponentMonoImageSamplingAction:(id)a0;
- (void)addComponentPDFPoliciesAction:(id)a0;
- (void)addComponentPDFX3Action:(id)a0;
- (void)addComponentRenderingIntentAction:(id)a0;
- (unsigned long long)countOfFilterItems;
- (void)filterAddButtonAction:(id)a0;
- (void)filterApplyButtonAction:(id)a0;
- (void)filterDuplicateAction:(id)a0;
- (id)filterItemsAtIndexes:(id)a0;
- (void)filterLockUnlockAction:(id)a0;
- (void)filterRemoveButtonAction:(id)a0;
- (void)insertFilterItems:(id)a0 atIndexes:(id)a1;
- (id)objectInFilterItemsAtIndex:(unsigned long long)a0;
- (void)objectsWereAdded:(id)a0 toCollection:(id)a1 atIndexes:(id)a2 keyPath:(id)a3;
- (void)objectsWereRemoved:(id)a0 fromCollection:(id)a1 atIndexes:(id)a2 keyPath:(id)a3;
- (void)removeComponentButtonClicked:(id)a0;
- (void)removeFilterItemsAtIndexes:(id)a0;

@end
