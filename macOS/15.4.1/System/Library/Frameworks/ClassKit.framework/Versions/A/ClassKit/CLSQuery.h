@class NSString, CLSSearchSpecification, NSDate, NSMutableArray;

@interface CLSQuery : CLSDataObserver <NSLocking, CLSQuery> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (getter=isExecuting) BOOL executing;
@property (nonatomic) BOOL shouldAddResultsToDataStore;
@property (nonatomic) BOOL shouldFaultResults;
@property (retain) NSDate *startDate;
@property (retain) NSMutableArray *results;
@property (nonatomic) long long fetchLimit;
@property (readonly, nonatomic) CLSSearchSpecification *searchSpec;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryWithObjectType:(Class)a0 predicate:(id)a1;
+ (id)queryWithObjectType:(Class)a0 predicate:(id)a1 error:(id *)a2;
+ (id)queryWithQuerySpecification:(id)a0 completion:(id /* block */)a1 error:(id *)a2;
+ (id)queryWithSearchSpecification:(id)a0;

- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (void)reset;
- (void)_faultResultsAndComplete;
- (void)_notifyOfCompletionWithError:(id)a0;
- (void)_notifyOfCompletionWithResults:(id)a0 error:(id)a1;
- (oneway void)clientRemote_deliverObject:(id)a0;
- (oneway void)clientRemote_finishWithOffset:(unsigned long long)a0 error:(id)a1;
- (oneway void)clientRemote_invalidate;
- (id)initWithObjectType:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2 error:(id *)a3;
- (id)initWithQuerySpecification:(id)a0 completion:(id /* block */)a1 error:(id *)a2;
- (id)initWithQuerySpecification:(id)a0 error:(id *)a1;
- (id)initWithSearchSpecification:(id)a0 error:(id *)a1;

@end
