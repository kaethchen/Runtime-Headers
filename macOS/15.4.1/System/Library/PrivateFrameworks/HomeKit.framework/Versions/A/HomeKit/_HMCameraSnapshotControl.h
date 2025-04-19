@class HMCameraSnapshot;
@protocol _HMCameraSnapshotControlDelegate;

@interface _HMCameraSnapshotControl : _HMCameraControl

@property (weak) id<_HMCameraSnapshotControlDelegate> delegate;
@property (retain) HMCameraSnapshot *mostRecentSnapshot;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)a0;
- (void)_fetchCameraSnapshotForBulletinContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleCreateSnapshotWithBulletinContext:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)_handleMostRecentSnapshot:(id)a0;
- (void)_handleMostRecentSnapshotUpdatedMessage:(id)a0;
- (void)_handleSnapshot:(id)a0 error:(id)a1 isMostRecent:(BOOL)a2;
- (void)_notifyDelegateOfDidTakeSnapshot:(id)a0 error:(id)a1;
- (void)_notifyDelegateOfMostRecentSnapshotUpdated;
- (void)_takeSnapshot;
- (void)fetchCameraSnapshotForBulletinContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCameraProfile:(id)a0 profileUniqueIdentifier:(id)a1 mostRecentSnapshot:(id)a2;
- (void)mergeNewSnapshotControl:(id)a0;
- (void)takeSnapshot;

@end
