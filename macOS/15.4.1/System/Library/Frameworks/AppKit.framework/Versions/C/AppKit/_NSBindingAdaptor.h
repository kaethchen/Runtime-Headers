@class NSMutableArray;

@interface _NSBindingAdaptor : NSObject {
    NSMutableArray *_binders;
    id _editableBinder;
    id _referenceBinder;
    id _contentBinder;
}

+ (void)copyBindingsFromObject:(id)a0 toObject:(id)a1;
+ (void)reconnectBindings:(id)a0;
+ (id)returnDisconnectedBindingsOfObject:(id)a0;

- (void)dealloc;
- (id)init;
- (id)binders;
- (id)referenceBinder;
- (void)selectionMechanismWasDismissed:(id)a0;
- (void)window:(id)a0 didChangeToVisibleState:(BOOL)a1;
- (void)_discardEditingForAllBinders;
- (void)_editor:(id)a0 didChangeEditingState:(BOOL)a1 bindingAdaptor:(id)a2;
- (BOOL)_handleValidationError:(id)a0 description:(id)a1 inEditor:(id)a2 errorUserInterfaceHandled:(BOOL *)a3 bindingAdaptor:(id)a4;
- (void)_objectDidTriggerAction:(id)a0 bindingAdaptor:(id)a1;
- (BOOL)_validateAndCommitValueInEditor:(id)a0 editingIsEnding:(BOOL)a1 errorUserInterfaceHandled:(BOOL *)a2 bindingAdaptor:(id)a3;
- (void)addBinder:(id)a0;
- (long long)boundOutlineView:(id)a0 isItemExpandable:(id)a1;
- (void)browser:(id)a0 createRowsForColumn:(long long)a1 inMatrix:(id)a2;
- (BOOL)browser:(id)a0 selectRow:(long long)a1 inColumn:(long long)a2;
- (void)browser:(id)a0 willDisplayCell:(id)a1 atRow:(long long)a2 column:(long long)a3;
- (void)collectionView:(id)a0 didChangeToSelectionIndexes:(id)a1;
- (id)contentBinder;
- (void)controller:(id)a0 didChangeToFilterPredicate:(id)a1;
- (void)controller:(id)a0 didChangeToSelectionIndexPaths:(id)a1;
- (void)controller:(id)a0 didChangeToSelectionIndexes:(id)a1;
- (void)controller:(id)a0 didChangeToSortDescriptors:(id)a1;
- (id)defaultSortDescriptorPrototypeForTableColumn:(id)a0;
- (void)drawer:(id)a0 didChangeToState:(BOOL)a1;
- (id)editableBinder;
- (void)editorDidBeginEditing:(id)a0;
- (void)editorDidEndEditing:(id)a0;
- (BOOL)handleValidationError:(id)a0 description:(id)a1 inEditor:(id)a2 errorUserInterfaceHandled:(BOOL *)a3;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)objectDidTriggerAction:(id)a0;
- (void)objectDidTriggerDoubleClickAction:(id)a0;
- (void)outlineColumn:(id)a0 willDisplayCell:(id)a1 row:(long long)a2;
- (void)outlineColumn:(id)a0 willDisplayOutlineCell:(id)a1 row:(long long)a2;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (void)outlineView:(id)a0 didExpandItem:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (void)outlineView:(id)a0 willCollapseItem:(id)a1;
- (void)outlineView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (void)outlineView:(id)a0 willDisplayOutlineCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (void)removeBinder:(id)a0;
- (void)resumeBinderObserving;
- (void)searchFieldCellOrControlDidClearRecents:(id)a0;
- (id)searchMenuTemplate;
- (BOOL)setEnabledStateForMenuItem:(id)a0 printDebuggingExplanation:(BOOL)a1;
- (BOOL)setEnabledStateForToolbarItem:(id)a0;
- (void)suspendBinderObserving;
- (void)tabView:(id)a0 didSelectTabViewItem:(id)a1;
- (void)tableColumn:(id)a0 didChangeToWidth:(double)a1;
- (void)tableColumn:(id)a0 willDisplayCell:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 didChangeToSelectedRowIndexes:(id)a1;
- (void)tableView:(id)a0 didChangeToSortDescriptors:(id)a1;
- (id)tableView:(id)a0 objectValueForRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldEditTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 updateVisibleRowInformation:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (id)updateInvalidatedFont:(id)a0 forObject:(id)a1;
- (id)updateInvalidatedObjectValue:(id)a0 forObject:(id)a1;
- (id)updateInvalidatedTextColor:(id)a0 forObject:(id)a1;
- (BOOL)validateAndCommitValueInEditor:(id)a0 editingIsEnding:(BOOL)a1 errorUserInterfaceHandled:(BOOL *)a2;
- (void)window:(id)a0 didSetTitle:(id)a1;
- (void)windowDidResize:(id)a0;

@end
