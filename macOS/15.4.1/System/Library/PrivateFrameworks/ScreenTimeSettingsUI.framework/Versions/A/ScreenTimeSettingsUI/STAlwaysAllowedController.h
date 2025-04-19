@class NSFetchedResultsController, STCoreUser, NSArray, NSString, NSMutableArray, STUsageReporter;

@interface STAlwaysAllowedController : NSObject <NSFetchedResultsControllerDelegate>

@property (retain) NSFetchedResultsController *installedFetchedResultsController;
@property (retain) NSFetchedResultsController *alwaysAllowedFetchedResultsController;
@property (retain) STUsageReporter *usageReporter;
@property (retain, nonatomic) NSMutableArray *mutableAllVisibleItems;
@property (retain, nonatomic) NSMutableArray *mutableAlwaysAllowedItems;
@property (retain, nonatomic) NSMutableArray *mutableAvailableItems;
@property (nonatomic) BOOL newsVisible;
@property (copy, nonatomic) id /* block */ deduplication_block;
@property (retain, nonatomic) STCoreUser *user;
@property (readonly, copy, nonatomic) NSArray *alwaysAllowedItems;
@property (readonly, copy, nonatomic) NSArray *allVisibleItems;
@property (readonly, copy, nonatomic) NSArray *availableItems;
@property (nonatomic) long long sortOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)controller:(id)a0 didChangeObject:(id)a1 atIndexPath:(id)a2 forChangeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (void)controllerDidChangeContent:(id)a0;
- (id)objectInAllVisibleItemsAtIndex:(unsigned long long)a0;
- (void)removeAlwaysAllowedItemsObject:(id)a0;
- (void)_fetchAlwaysAllowedItems;
- (void)_fetchInstalledItems;
- (void)_fetchUsage;
- (void)_insertItemToSortedAlwaysAllowedItems:(id)a0;
- (void)_insertItemToSortedAvailableItems:(id)a0;
- (void)_insertItemToSortedLocation:(id)a0;
- (unsigned long long)_insertionIndexOfItem:(id)a0 inItems:(id)a1;
- (void)_moveItemToSortedLocation:(id)a0;
- (void)_sortAllVisibleItems;
- (void)_sortItems:(id)a0;
- (void)_updateAllVisibleItems;
- (void)_updateAlwaysAllowedItems;
- (void)_updateUsage:(id)a0;
- (void)addAllVisibleItemsObject:(id)a0;
- (void)addAlwaysAllowedItem:(id)a0;
- (id)allVisibleItemsAtIndexes:(id)a0;
- (unsigned long long)countOfAllVisibleItems;
- (unsigned long long)countOfAlwaysAllowedItems;
- (unsigned long long)countOfAvailableItems;
- (void)insertObject:(id)a0 inAllVisibleItemsAtIndex:(unsigned long long)a1;
- (void)insertObject:(id)a0 inAlwaysAllowedItemsAtIndex:(unsigned long long)a1;
- (void)insertObject:(id)a0 inAvailableItemsAtIndex:(unsigned long long)a1;
- (id)objectInAlwaysAllowedItemsAtIndex:(unsigned long long)a0;
- (id)objectInAvailableItemsAtIndex:(unsigned long long)a0;
- (void)removeAllVisibleItemsObject:(id)a0;
- (void)removeAlwaysAllowedItem:(id)a0;
- (void)removeAvailableItemsObject:(id)a0;
- (void)removeObjectFromAllVisibleItemsAtIndex:(unsigned long long)a0;
- (void)removeObjectFromAlwaysAllowedItemsAtIndex:(unsigned long long)a0;
- (void)removeObjectFromAvailableItemsAtIndex:(unsigned long long)a0;

@end
