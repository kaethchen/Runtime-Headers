@class NSSet, CORoleDefaultsMonitor, NSString, COClusterMemberRoleSnapshot, NSObject;
@protocol OS_dispatch_queue, CORoleAddOnDelegate;

@interface CORoleAddOn : COMeshAddOn <CORoleDefaultsMonitorDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) CORoleDefaultsMonitor *defaultsMonitor;
@property (retain, nonatomic) COClusterMemberRoleSnapshot *currentDeviceSnapshot;
@property (retain, nonatomic) NSSet *nodeCache;
@property (nonatomic, getter=havePendingChanges) BOOL pendingChanges;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) id<CORoleAddOnDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateState;
- (void)_notifyDelegate;
- (void)_withLock:(id /* block */)a0;
- (id)_memberForNode:(id)a0;
- (void)_enableForPairLegacySupport;
- (BOOL)_isLegacyStereoPair;
- (BOOL)_isLegacyStereoPairPeer:(id)a0;
- (id)_memberForCurrentDevice;
- (id)_roleForCurrentDevice;
- (id)_roleForNode:(id)a0;
- (void)_updateCurrentDeviceState;
- (void)didChangeNodesForMeshController:(id)a0;
- (void)meshController:(id)a0 didTransitionToState:(unsigned long long)a1;
- (void)meshController:(id)a0 willTransitionToState:(unsigned long long)a1;
- (void)monitor:(id)a0 defaultChanged:(unsigned long long)a1;

@end
