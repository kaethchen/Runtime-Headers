@class NSString, NSPredicate, EKEventStore;

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation> {
    id /* block */ _callback;
    Class _entityClass;
    NSPredicate *_predicate;
    EKEventStore *_store;
    id _cancellationToken;
    BOOL _finished;
    BOOL _isCancelled;
    int _retryCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchWithEntityClass:(Class)a0 predicate:(id)a1 store:(id)a2;
+ (id)signpostHandle;

- (void).cxx_destruct;
- (void)cancel;
- (void)terminate;
- (id)_createOSActivity;
- (void)_fetchObjectIDsActualWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1 queue:(id)a2;
- (void)_startActivityWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1 queue:(id)a2;
- (void)_startActualWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1 queue:(id)a2;
- (void)_startFetchObjectIDsActivityWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1 queue:(id)a2;
- (void)_startProcessingWithCompletion:(id /* block */)a0 synchronous:(BOOL)a1 processor:(id /* block */)a2 queue:(id)a3;
- (id)fetchObjectIDs;
- (void)filterSkippedReminders:(id)a0;
- (id)initWithEntityClass:(Class)a0 predicate:(id)a1 store:(id)a2;
- (id)runSynchronously;
- (void)signpostEndWithError:(int)a0 count:(unsigned long long)a1;
- (void)signpostStart;
- (id)startWithCompletion:(id /* block */)a0 queue:(id)a1;

@end
