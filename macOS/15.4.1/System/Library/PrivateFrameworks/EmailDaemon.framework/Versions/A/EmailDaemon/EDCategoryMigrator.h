@class NSString, EDMessagePersistence, NSConditionLock, EDMessageCategorizer, EFLocked, NSObject, EDActivityPersistence, EDCategoryPersistence;
@protocol OS_os_log, EFScheduler, EFCancelable, OS_dispatch_queue;

@interface EDCategoryMigrator : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id<EFScheduler> categorizationWriterScheduler;
@property (readonly, nonatomic) id<EFCancelable> haveAccessToDb;
@property (readonly, nonatomic) EDCategoryPersistence *categoryPersistence;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDActivityPersistence *activityPersistence;
@property (retain, nonatomic) EFLocked *activityForMailboxID;
@property (readonly, nonatomic) EDMessageCategorizer *categorizer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *categorizationQueue;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) NSConditionLock *categorizationQueueLock;
@property (nonatomic) unsigned long long numBatchesQueued;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initializeIfNeededWithCategoryPersistence:(id)a0 categorizer:(id)a1 messagePersistence:(id)a2 activityPersistence:(id)a3;
+ (void)migrateCategoryForQuery:(id)a0 cancelationToken:(id)a1 reason:(long long)a2 progressHandler:(id /* block */)a3 completion:(id /* block */)a4;

- (void).cxx_destruct;
- (void)_categorizeMessageBatch:(id)a0 cancelationToken:(id)a1 reason:(long long)a2;
- (void)_categorizeMessagesForQuery:(id)a0 cancelationToken:(id)a1 progressHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_endCategorization;
- (void)_migrateCategoryForQuery:(id)a0 cancelationToken:(id)a1 reason:(long long)a2 progressHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_updateCategorizationActivityForMessageBatch:(id)a0 isFinished:(BOOL)a1 cancelationToken:(id)a2;
- (id)initWithCategoryPersistence:(id)a0 categorizer:(id)a1 messagePersistence:(id)a2 activityPersistence:(id)a3;

@end
