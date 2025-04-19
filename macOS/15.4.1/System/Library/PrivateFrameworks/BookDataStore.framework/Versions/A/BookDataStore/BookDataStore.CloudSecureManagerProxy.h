@protocol BCCloudSecureManaging;

@interface BookDataStore.CloudSecureManagerProxy : NSObject <BDSCloudKitSupportSignOutDissociate, BCCloudSecureManaging, BDSHandlesRemoteNotification> {
    void /* unknown type, empty encoding */ serviceProxy;
}

@property (class, nonatomic, retain) id<BCCloudSecureManaging> sharedManager;

@property (nonatomic, retain) void /* unknown type, empty encoding */ engagementManager;
@property (nonatomic, retain) void /* unknown type, empty encoding */ userDataManager;

- (id)init;
- (void).cxx_destruct;
- (void)setEnableCloudSync:(BOOL)a0;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)a0;
- (void)handleRemoteCKNotification:(id)a0;
- (void)handleRemoteNotification:(id)a0;

@end
