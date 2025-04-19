@class _NSTreeNodeObservingTracker;

@interface NSOutlineViewBinder : NSBinder {
    struct ___outlineViewBinderFlags { unsigned char _isAutoCreated : 1; unsigned int _reservedOutlineViewBinder : 31; } _outlineViewBinderFlags;
    long long _ignoreChangesCount;
    struct _NSRange { unsigned long long location; unsigned long long length; } _previousVisibleRange;
    _NSTreeNodeObservingTracker *_treeNodeObservingTracker;
    id _contentBindingController;
}

+ (id)bindingCategory;
+ (BOOL)_autoCreateBinderForObject:(id)a0 withController:(id)a1;
+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;

- (void)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_childrenChangedForNode:(id)a0;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_dealloc;
- (BOOL)_isAutoCreated;
- (void)_markAutoCreated:(BOOL)a0;
- (BOOL)_observeKeyPathForRelatedBinder:(id)a0 registerOrUnregister:(BOOL)a1;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (void)_scrollSelectionToVisible;
- (void)_updateObservingRegistration:(BOOL)a0;
- (void)_updateSelectionIndexPaths:(id)a0;
- (void)_updateSortDescriptors:(id)a0;
- (void)beginIgnoreChanges;
- (void)endIgnoreChanges;
- (void)expandIndexPath:(id)a0;
- (void)modifyObservingOutlineViewChildrenOfItem:(id)a0 withOption:(unsigned long long)a1;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (void)outlineView:(id)a0 didExpandItem:(id)a1;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (void)outlineView:(id)a0 willCollapseItem:(id)a1;
- (void)outlineView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (void)outlineView:(id)a0 willDisplayOutlineCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (void)startObservingOutlineViewChildrenOfItem:(id)a0;
- (void)stopObservingOutlineViewChildrenOfItem:(id)a0;
- (void)tableView:(id)a0 didChangeToSelectedRowIndexes:(id)a1;
- (void)tableView:(id)a0 didChangeToSortDescriptors:(id)a1;
- (id)tableView:(id)a0 objectValueForRow:(long long)a1;
- (void)tableView:(id)a0 updateVisibleRowInformation:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
