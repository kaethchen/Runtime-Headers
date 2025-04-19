@class NSString, PLPhotoLibraryBundleCriteriaTuple, PLBackgroundJobWorkerCoordinator, PLBackgroundJobStatusCenter, NSMutableArray;
@protocol PLBackgroundJobLibraryCoordinatorDelegate;

@interface PLBackgroundJobLibraryCoordinator : NSObject <PLBackgroundJobWorkerCoordinatorDelegate> {
    PLBackgroundJobStatusCenter *_statusCenter;
    NSMutableArray *_pendingPhotoLibraryBundles;
    PLPhotoLibraryBundleCriteriaTuple *_currentPhotoLibraryBundle;
    PLBackgroundJobWorkerCoordinator *_workerCoordinator;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<PLBackgroundJobLibraryCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_handleAllBundlesCompleted;
- (void)_handleBundleComplete:(id)a0;
- (void)_submitNextQueuedBundle;
- (id)initWithStatusCenter:(id)a0;
- (id)initWithWorkerCoordinator:(id)a0;
- (id)initWithWorkerCoordinator:(id)a0 statusCenter:(id)a1;
- (id)pendingJobsOnBundles:(id)a0;
- (BOOL)shouldDeferActivity;
- (void)startBackgroundJobsOnBundles:(id)a0 withCriteria:(id)a1;
- (void)stopBackgroundJobsOnAllBundles;
- (void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)a0;

@end
