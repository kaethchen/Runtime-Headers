@protocol ATXCloudStorageSettingsDelegate;

@interface ATXCloudStorageSettingsListener : NSObject

@property (retain, nonatomic) id<ATXCloudStorageSettingsDelegate> delegate;

+ (id)sharedInstance;
+ (BOOL)isBackupForContactsEnabled;
+ (BOOL)isBackupForSiriEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)handleBackupPreferencesDidChange;
- (void)handleDeleteDataRequest;
- (void)registerForCloudStorageDeletedByUserNotification;
- (void)registerForCloudStorageSettingsNotifications;
- (void)registerForCloudSyncPreferenceDidChangeNotification;

@end
