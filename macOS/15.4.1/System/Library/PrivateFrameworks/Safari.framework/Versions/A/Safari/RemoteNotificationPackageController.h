@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_os_transaction;

@interface RemoteNotificationPackageController : NSObject {
    NSMutableArray *_pendingPersistentNotificationEvents;
    NSObject<OS_os_transaction> *_transactionForPendingPersistentNotificationEvents;
}

@property (retain, nonatomic) NSMutableDictionary *permissions;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_ensureMutableSettingsForIdentifier:(id)a0;
- (void)_loadPackageInformationIfNecessary;
- (BOOL)_notificationBundleExistsForIdentifier:(id)a0;
- (id)_packagePathForIdentifier:(id)a0;
- (void)_queueSavePackageInformation;
- (void)addPendingPersistentNotificationClick:(id)a0;
- (void)addPendingPersistentNotificationClose:(id)a0;
- (void)addPendingPersistentNotificationEvent:(id)a0 eventType:(id)a1;
- (void)denyPermissionForIdentifier:(id)a0;
- (id)deviceTokenForIdentifier:(id)a0;
- (void)fetchPendingPersistentNotificationEvents:(id /* block */)a0;
- (void)forgetPermissionForIdentifier:(id)a0;
- (void)generateNotificationBundlesIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)getRemoteNotificationInformationForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)grantPermissionForIdentifier:(id)a0 withDeviceToken:(id)a1;
- (id)identifiersAddedBetweenDate:(id)a0 andDate:(id)a1 withAllowedPermissions:(BOOL)a2 withDeniedPermissions:(BOOL)a3;
- (void)migrateAllBundlesToAppIconForIdentifiers:(id)a0;
- (id)notificationCenterBundlePathForIdentifier:(id)a0;
- (void)setAllowedDomains:(id)a0 toSettingsForIdentifier:(id)a1;
- (void)setPackageLocation:(id)a0 name:(id)a1 allowedDomains:(id)a2 referrerURL:(id)a3 forIdentifier:(id)a4;

@end
