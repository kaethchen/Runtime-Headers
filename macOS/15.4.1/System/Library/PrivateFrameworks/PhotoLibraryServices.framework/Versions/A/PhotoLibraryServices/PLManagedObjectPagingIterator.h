@class NSString, NSArray, NSPredicate, NSDate, NSMutableArray, NSManagedObjectID;

@interface PLManagedObjectPagingIterator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSManagedObjectID *_lock_resumeObjectID;
    unsigned long long _lock_countRemaining;
    NSDate *_lock_lastFetchCountTime;
    BOOL _lock_isFinished;
    NSMutableArray *_lock_resultQueue;
}

@property (readonly, copy, nonatomic) NSString *entityName;
@property (readonly, nonatomic) unsigned long long resultType;
@property (readonly, nonatomic) NSManagedObjectID *resumeObjectID;
@property (readonly, nonatomic) NSPredicate *additionalPredicate;
@property (readonly, nonatomic) unsigned long long batchSize;
@property (readonly, copy, nonatomic) NSArray *propertiesToFetch;
@property (readonly, copy, nonatomic) NSArray *relationshipKeyPathsToPrefetch;

+ (id)_nextBatchOfResultsWithManagedObjectContext:(id)a0 entityName:(id)a1 resultType:(unsigned long long)a2 resumeObjectID:(id)a3 additionalPredicate:(id)a4 batchSize:(unsigned long long)a5 propertiesToFetch:(id)a6 relationshipKeyPathsToPrefetch:(id)a7;

- (void).cxx_destruct;
- (void)reset;
- (BOOL)_lock_shouldFetchCountRemaining;
- (id)_neverCallWithLock_refillResultQueueWithManagedObjectContext:(id)a0;
- (void)_updateResumeObjectIDWithObject:(id)a0 progressCount:(unsigned long long)a1;
- (id)countRemainingWithManagedObjectContext:(id)a0 logger:(id)a1;
- (id)initWithEntityName:(id)a0 resultType:(unsigned long long)a1 resumeObjectID:(id)a2 additionalPredicate:(id)a3;
- (id)initWithEntityName:(id)a0 resultType:(unsigned long long)a1 resumeObjectID:(id)a2 additionalPredicate:(id)a3 batchSize:(unsigned long long)a4 propertiesToFetch:(id)a5 relationshipKeyPathsToPrefetch:(id)a6;
- (id)nextBatchWithManagedObjectContext:(id)a0;
- (id)nextObjectWithManagedObjectContext:(id)a0;

@end
