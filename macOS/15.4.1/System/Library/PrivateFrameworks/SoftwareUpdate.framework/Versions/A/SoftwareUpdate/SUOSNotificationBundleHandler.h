@class NSString, NSDate;

@interface SUOSNotificationBundleHandler : NSObject

@property (retain) NSDate *deferralDate;
@property (nonatomic) BOOL notificationPending;
@property (nonatomic) BOOL notificationBundleExists;
@property BOOL mdmInitiatedNotificationBundleInstall;
@property (copy, nonatomic) id /* block */ notificationBundleDidChangeHandler;
@property (readonly) NSString *notificationBundlePath;

+ (id)sharedNotificationBundleHandler;

- (void)dealloc;
- (id)init;
- (void)archiveToCoder:(id)a0;
- (void)_handleMajorOSBundleInstalled:(BOOL)a0;
- (void)_listenForNotificationInfoPlistChangesIfExists;
- (void)_notificationDeferralDate:(id /* block */)a0;
- (id)_subundleFromSUTags;
- (void)clearNotificationPending;
- (id)getOSNotificationBundleProperties;
- (void)listenForNotificationBundleChanges;
- (id)osNotificationBundlePath;
- (void)restoreFromCoder:(id)a0;
- (void)sendMajorOSAvailableNotification;
- (void)shouldNotifyForMajorOSAvailable:(id /* block */)a0;

@end
