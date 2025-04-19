@class NSString, NSSet, NSObject, NSManagedObjectContext;
@protocol OS_dispatch_queue, ICCoreDataIndexerDelegate, ICItemIdentifier;

@interface ICCoreDataIndexer : NSObject <NSFetchedResultsControllerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadDataSerialQueue;
@property (nonatomic) BOOL needsFetchedResultsControllerUpdate;
@property (weak, nonatomic) id<ICCoreDataIndexerDelegate> delegate;
@property (readonly, nonatomic) NSManagedObjectContext *legacyManagedObjectContext;
@property (readonly, nonatomic) NSManagedObjectContext *modernManagedObjectContext;
@property (readonly, nonatomic) id<ICItemIdentifier> firstRelevantItemIdentifier;
@property (nonatomic) BOOL shouldIncludeOutlineParentItems;
@property (readonly, copy, nonatomic) NSString *expansionStateContext;
@property (readonly, nonatomic) NSSet *activeFetchedResultsControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)controller:(id)a0 didChangeContentWithDifference:(id)a1;
- (void)deleteWithDecisionController:(id)a0 completion:(id /* block */)a1;
- (void)didIndex;
- (id)indexObjectsInSection:(id)a0 sectionIndex:(unsigned long long)a1 fetchedResultsController:(id)a2;
- (void)indexObjectsWithCompletion:(id /* block */)a0;
- (id)initWithLegacyManagedObjectContext:(id)a0 modernManagedObjectContext:(id)a1;
- (id)newSnapshotFromIndex;
- (id)newSnapshotFromIndexWithLegacyManagedObjectContext:(id)a0 modernManagedObjectContext:(id)a1;
- (id)nextRelevantItemIdentifierAfter:(id)a0;
- (void)performAndWaitForFetchedResultsControllers:(id)a0 block:(id /* block */)a1;
- (void)reloadData:(id /* block */)a0;
- (void)reloadDataAndWait;
- (id)sectionIdentifierForHeaderInSection:(long long)a0;
- (id)sectionIdentifiersForSectionType:(unsigned long long)a0;
- (void)unsafelyIndexAllObjectsForFetchedResultsController:(id)a0;
- (void)unsafelyReloadData;
- (void)updateLegacyFetchedResultsControllers;
- (void)updateModernFetchedResultsControllers;
- (void)willIndex;

@end
