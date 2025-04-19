@class NSString, NSArray, KHSelectionManager;

@interface KHSelectionManagerDebugViewController : UXTableViewController <KHSelectionObserver> {
    NSArray *_selections;
}

@property (readonly) KHSelectionManager *selectionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithSelectionManager:(id)a0;
- (void)_toggleAppearance:(id)a0;
- (void)selectionManager:(id)a0 didAddSelections:(id)a1;
- (void)selectionManager:(id)a0 didModifySelections:(id)a1;
- (void)selectionManager:(id)a0 didRemoveSelections:(id)a1;
- (void)selectionManager:(id)a0 didTouchSelections:(id)a1;

@end
