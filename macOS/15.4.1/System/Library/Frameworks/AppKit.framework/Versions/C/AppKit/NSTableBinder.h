@interface NSTableBinder : NSBinder {
    struct __tableBinderFlags { unsigned char _isAutoCreated : 1; unsigned char _ignoreChanges : 1; unsigned char _notifyContentControllerOfVisibleRowUpdates : 1; unsigned int _reservedTableBinder : 29; } _tableBinderFlags;
    unsigned long long _numberOfDisplayedObjects;
    id _modelObservingTracker;
}

+ (id)bindingCategory;
+ (BOOL)_autoCreateBinderForObject:(id)a0 withController:(id)a1;
+ (id)_editableBinderAtIndex:(unsigned long long)a0 forTableView:(id)a1;
+ (id)_editableBinderForTableColumn:(id)a0;
+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)dealloc;
- (void)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_copyDetailsFromBinder:(id)a0;
- (void)_handleContentChange:(void *)a0;
- (BOOL)_isAutoCreated;
- (BOOL)_isTableColumn:(id)a0 boundWithKeyPath:(id)a1;
- (void)_markAutoCreated:(BOOL)a0;
- (BOOL)_observeKeyPathForRelatedBinder:(id)a0 registerOrUnregister:(BOOL)a1;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_preparedContentRectForTableView:(id)a0;
- (void)_redisplayTableContentWithRowIndexes:(id)a0 columnIndexes:(id)a1;
- (void)_scrollSelectionToVisible;
- (void)_updateContent;
- (void)_updateObservingRegistration:(BOOL)a0;
- (void)_updateSelectionIndexes:(id)a0;
- (void)_updateSortDescriptors:(id)a0;
- (id)_visibleColumnIndexesForKeyPath:(id)a0;
- (id)_visibleRowIndexesForObject:(id)a0;
- (BOOL)isBindingReadOnly:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)tableView:(id)a0 didChangeToSelectedRowIndexes:(id)a1;
- (void)tableView:(id)a0 didChangeToSortDescriptors:(id)a1;
- (id)tableView:(id)a0 objectValueForRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldEditTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 updateVisibleRowInformation:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (Class)valueClassForBinding:(id)a0;

@end
