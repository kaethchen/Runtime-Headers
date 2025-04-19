@class NSDictionary, NSArray, NSString, SUOSUProduct, NSDate, SUOSUCloudDevice, NSNumber;

@interface SUOSUUpdatesAvailablePolicy : NSObject

@property (retain) NSArray *eligibleProducts;
@property (retain) SUOSUProduct *minorProduct;
@property (retain) SUOSUProduct *majorProduct;
@property (retain) SUOSUProduct *splatProduct;
@property BOOL splatAppliedRestartNow;
@property double minimumNotificationInterval;
@property BOOL alreadyPostedFinalNotification;
@property BOOL offerLater;
@property BOOL restartRequired;
@property (retain) SUOSUCloudDevice *alignedCloudDevice;
@property (retain) NSArray *availableProducts;
@property (retain) NSDate *lastNotificationDate;
@property (retain) NSString *lastNotificationProductKey;
@property NSNumber *minimumNotificationIntervalOverride;
@property unsigned long long notificationCount;
@property (retain) NSDictionary *firstInstallTonightDates;
@property BOOL availableProductsDownloaded;
@property BOOL autoDownloadEnabled;
@property BOOL notificationsDisabled;
@property BOOL settingsIsActive;
@property BOOL setupAssistantIsActive;
@property BOOL ddmEnforcedWithin24Hours;
@property BOOL majorOSUpdatesManaged;
@property BOOL installTonightArmed;
@property BOOL installInProgress;
@property struct { long long majorVersion; long long minorVersion; long long patchVersion; } currentOSVersion;
@property (retain) NSArray *cloudDevices;
@property (readonly) SUOSUProduct *primaryProduct;

+ (long long)_reminderDaysForCount:(unsigned long long)a0;
+ (long long)_reminderDaysForCount:(unsigned long long)a0 finalNotification:(BOOL *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_nowExceedsLastNotificationDate;
- (void)_determineEligibleProducts;
- (void)_determineNotificationInterval;
- (unsigned long long)_determineNotificationType;
- (BOOL)_shouldShowDeviceCompatibilityNotificationForDevice:(id *)a0;
- (BOOL)_shouldShowNotificationWithReason:(id *)a0;
- (BOOL)_shouldShowSecurityAdvisoryNotification;
- (BOOL)shouldShowNotification:(unsigned long long *)a0;

@end
