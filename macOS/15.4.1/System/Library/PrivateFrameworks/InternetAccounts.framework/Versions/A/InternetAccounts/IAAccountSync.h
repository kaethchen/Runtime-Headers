@interface IAAccountSync : NSObject

+ (BOOL)accountSyncCloudStatus;
+ (BOOL)accountSyncisEnabled;
+ (void)accountWasAddedWithUID:(id)a0 pluginID:(id)a1;
+ (void)accountWasDeletedWithUID:(id)a0;
+ (void)accountWasDeletedWithUID:(id)a0 mergeData:(BOOL)a1;
+ (void)accountWasPresentedWithUID:(id)a0;
+ (void)accountsChangedExternally;
+ (void)clearDeletedAccountUIDs;
+ (id)deletedAccountUIDs;
+ (id)getDevices;
+ (id)newlySyncedAccountUIDs;
+ (void)postNotificationForNewAccount:(id)a0 user:(id)a1 pluginID:(id)a2 device:(id)a3;
+ (id)presentedAccountUIDs;
+ (void)syncAccounts;

@end
