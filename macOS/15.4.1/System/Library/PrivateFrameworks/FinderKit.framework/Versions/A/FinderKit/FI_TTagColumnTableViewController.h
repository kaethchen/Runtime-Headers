@class NSString, FI_TContainerLayoutManager, NSArray, NSIndexSet, NSObject, FI_TKeyValueObserverGlue;
@protocol TTagColumnTableViewControllerDelegate;

@interface FI_TTagColumnTableViewController : FI_TTableViewController <NSMenuDelegate, NSMenuItemValidation, TMarkTornDown> {
    struct TNSWeakPtr<NSObject<TTagColumnTableViewControllerDelegate>> { NSObject<TTagColumnTableViewControllerDelegate> *fWeakObject; } _weakDelegate;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _clickedNodeForMenuEvent;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _selectedObjectsObserver;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _contentInsetsDidChangeObserver;
    FI_TContainerLayoutManager *_containerLayoutManager;
}

@property (retain, nonatomic) FI_TContainerLayoutManager *containerLayoutManager;
@property (nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } editedNode;
@property (nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } selectedNode;
@property (weak, nonatomic) NSObject<TTagColumnTableViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isTornDown) BOOL tornDown;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)tableView:(id)a0 didAddRowView:(id)a1 forRow:(long long)a2;
- (id)nibName;
- (void)menuNeedsUpdate:(id)a0;
- (void)tableView:(id)a0 didRemoveRowView:(id)a1 forRow:(long long)a2;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)validateMenuItem:(id)a0;
- (void)aboutToTearDown;
- (void)configureView;
- (Class)dataSourceClass;
- (unsigned long long)indexOfTagNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)aboutToShowContextMenu:(id)a0;
- (id)initWithDelegate:(id)a0 containerLayoutManager:(id)a1;
- (long long)rowForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)selectTag:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)selectTagWithName:(const void *)a0;
- (void)selectedObjectsChanged;
- (id)tagColumnDataSource;
- (void)updateSubviewContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
