@interface IMBackgroundMessagingAPIDataAccess : NSObject

+ (void)deleteAllData;
+ (unsigned long long)enabledPhoneNumbersForBundleID:(id)a0;
+ (id)appBundleIDs;
+ (unsigned long long)numberOfAppsUsingBackgroundMessaging;
+ (id)recipientsForBundleID:(id)a0;
+ (id)recipientsForBundleIDFromPreferences:(id)a0;
+ (void)resetStorageIfNeeded;
+ (void)saveAppBundleIDs:(id)a0;
+ (void)saveRecipients:(id)a0 forBundleID:(id)a1;
+ (void)saveRecipientsToPreferences:(id)a0 forBundleID:(id)a1;
+ (void)toggleEnablement:(BOOL)a0 forRecipient:(id)a1 inAppBundleID:(id)a2;

@end
