@interface ICQDaemonPlanRecommendation : NSObject

+ (void)calculateExtraQuotaNeededToSyncForAccountWithID:(id)a0 isAccountFull:(BOOL)a1 completion:(id /* block */)a2;
+ (id)accountForID:(id)a0;
+ (long long)calculateExtraQuotaNeededToSyncWithBackupSize:(long long)a0;
+ (id)fullBackupSize;
+ (void)getLocalPhotoLibrarySizeWithCompletion:(id /* block */)a0;
+ (BOOL)isBackupEnabledForAccount:(id)a0;
+ (BOOL)isICPLEnabledForAccount:(id)a0;
+ (BOOL)isPhotosLibraryIncludedInBackupForAccount:(id)a0;

@end
