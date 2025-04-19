@class NSString, NSOperationQueue, NSMapTable;

@interface BookmarksOperationQueue : NSObject <BookmarksOperationCoalescerDelegate> {
    NSOperationQueue *_queue;
    NSMapTable *_operationClassesToCaches;
    NSMapTable *_operationClassesRequestingCacheDeletionOnBookmarksChange;
    NSMapTable *_operationClassesToCoalescers;
    NSMapTable *_overridableOperationClassesToMostRecentInstances;
}

@property unsigned long long maximumConcurrentOperationCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (void)_scheduleCoalesceableOperation:(id)a0;
- (void)bookmarksOperationCoalescer:(id)a0 didCoalesceOperationsIntoOperation:(id)a1;
- (void)_addOperationIgnoringCoalescing:(id)a0;
- (void)_bookmarksDidChange:(id)a0;
- (id)_initWithBookmarksController:(id)a0;
- (void)_overrideExistingOperationsWithOperationIfNecessary:(id)a0;
- (void)_setUpResultCachingOperationForOperationIfNecessary:(id)a0;
- (BOOL)_tryToReuseResultOfOperation:(id)a0 forOperation:(id)a1;
- (BOOL)_tryToUseCachedResultForOperation:(id)a0;

@end
