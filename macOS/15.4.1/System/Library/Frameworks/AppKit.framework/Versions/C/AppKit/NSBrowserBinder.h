@class NSArray, _NSTreeNodeObservingTracker;

@interface NSBrowserBinder : NSBinder {
    struct ___browserBinderFlags { unsigned char _ignoreChanges : 1; unsigned int _reservedOutlineViewBinder : 31; } _browserBinderFlags;
    NSArray *_selectedIndexPaths;
    _NSTreeNodeObservingTracker *_treeNodeObservingTracker;
}

+ (id)bindingCategory;
+ (id)bindingsForObject:(id)a0;
+ (BOOL)isUsableWithObject:(id)a0;

- (void)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)performAction:(id)a0;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_dealloc;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (void)_redisplayCellForNode:(id)a0;
- (void)_resumeObservationNotificationProcessing;
- (id)_selectionIndexPathsInBrowser:(id)a0;
- (void)_updateObservingRegistration:(BOOL)a0;
- (void)_updateSelectionIndexPaths:(id)a0;
- (void)adjustMatrix:(id)a0 numberOfRows:(unsigned long long)a1;
- (void)browser:(id)a0 createRowsForColumn:(long long)a1 inMatrix:(id)a2;
- (void)browser:(id)a0 willDisplayCell:(id)a1 atRow:(long long)a2 column:(long long)a3;
- (id)indexPathFromSelectionInBrowser:(id)a0 upToColumn:(unsigned long long)a1;
- (id)selectedIndexPaths;
- (void)setSelectedIndexPaths:(id)a0;

@end
