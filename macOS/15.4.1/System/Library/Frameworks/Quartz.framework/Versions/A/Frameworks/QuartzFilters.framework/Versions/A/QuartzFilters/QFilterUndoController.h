@class NSMapTable, NSUndoManager, NSMutableSet, NSString, NSObject;
@protocol QFilterUndoControllerDelegate;

@interface QFilterUndoController : NSObject

@property NSObject<QFilterUndoControllerDelegate> *delegate;
@property NSUndoManager *undoManager;
@property (retain) NSMutableSet *observedFilters;
@property (retain) NSMutableSet *observedComponents;
@property (retain) NSMapTable *undoGroupOldPropertiesPerObject;
@property (retain) NSString *undoGroupPresentablePropertyName;
@property BOOL undoGroupHasChangesToMultipleProperties;

- (void)dealloc;
- (id)init;
- (void)cleanup;
- (id)initWithDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_stopObservingFilterComponents:(id)a0;
- (void)_objectsWereAdded:(id)a0 atIndexes:(id)a1 toCollection:(id)a2 atKeyPath:(id)a3;
- (void)_objectsWereRemoved:(id)a0 atIndexes:(id)a1 fromCollection:(id)a2 atKeyPath:(id)a3;
- (void)_setObjectProperties:(id)a0;
- (void)_startObservingFilterComponents:(id)a0;
- (void)_startObservingFilters:(id)a0;
- (void)_startObservingGrowableItems:(id)a0 ofComponent:(id)a1;
- (void)_stopObservingFilters:(id)a0;
- (void)_stopObservingGrowableItems:(id)a0 ofComponent:(id)a1;
- (void)observeUndoManagerCheckpoint:(id)a0;
- (void)startObservingFiltersOfObject:(id)a0 withKeyPath:(id)a1 undoManager:(id)a2;
- (void)stopObservingFiltersOfObject:(id)a0 withKeyPath:(id)a1;

@end
