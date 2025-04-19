@class NSUUID, NSDate, NSString, HMDBackgroundOperationManager, NSPredicate, NSOperationQueue, NSDictionary, HMDHomeManager, NSMutableSet;
@protocol HMDBackgroundOperationDataSource;

@interface HMDBackgroundOperation : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSPredicate *predicate;

@property (readonly) NSMutableSet *dependencies;
@property BOOL finished;
@property (readonly) NSDictionary *userData;
@property (readonly) NSDate *scheduledDate;
@property (retain) NSDate *deferralDate;
@property (readonly) NSDate *expirationDate;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (nonatomic) BOOL isReadyToRun;
@property (nonatomic) BOOL isExpired;
@property (getter=isAlreadyScheduled) BOOL scheduled;
@property (retain, nonatomic) HMDBackgroundOperationManager *bgOpsManager;
@property (readonly, nonatomic) id<HMDBackgroundOperationDataSource> dataSource;
@property (nonatomic) long long failureCount;
@property (readonly, nonatomic) NSUUID *operationUUID;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) long long qualityOfService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addDependency:(id)a0;
- (void)removeDependency:(id)a0;
- (BOOL)isDeferred;
- (BOOL)runOperation:(id)a0;
- (id)logIdentifier;
- (id)initWithUserData:(id)a0;
- (id)attributeDescriptions;
- (id)dumpState;
- (id)AllDependencies;
- (void)deferWithFailureCount:(long long)a0;
- (BOOL)hasDependency:(id)a0;
- (id)initWithUUID:(id)a0 userData:(id)a1 backGroundOpsManager:(id)a2 scheduledDate:(id)a3 expirationDate:(id)a4 dataSource:(id)a5 dependentOperations:(id)a6;
- (id)initWithUserData:(id)a0 dataSource:(id)a1 backGroundOpsManager:(id)a2;
- (BOOL)mainWithError:(id *)a0;
- (void)markOperationFinished;

@end
