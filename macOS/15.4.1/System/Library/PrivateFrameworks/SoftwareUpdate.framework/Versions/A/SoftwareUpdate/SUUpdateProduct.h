@class NSData, NSString, NSArray, SUMajorProduct, NSAttributedString, NSDate, NSDictionary, NSURL;

@interface SUUpdateProduct : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *longDescriptionRTFData;
@property (retain) NSData *firmwareWarningRTFData;
@property (retain) NSData *licenseAgreementRTFData;
@property (retain) NSAttributedString *cachedLongDescription;
@property (retain) NSAttributedString *cachedFirmwareWarning;
@property (retain) NSAttributedString *cachedLicenseAgreement;
@property (readonly, retain) NSString *title;
@property (readonly, retain) NSString *versionString;
@property (readonly) int action;
@property (readonly, retain) NSString *currentLocalization;
@property (readonly, retain) NSAttributedString *longDescription;
@property (readonly, retain) NSAttributedString *firmwareWarning;
@property (readonly, retain) NSAttributedString *licenseAgreement;
@property (readonly, retain) NSString *productKey;
@property (readonly) long long serverState;
@property (readonly) long long type;
@property (readonly, retain) NSArray *applicationIdentifiersToClose;
@property (readonly, retain) NSArray *tags;
@property (readonly, retain) id auxInfo;
@property (readonly, retain) NSString *identifierForProductLabel;
@property (readonly, retain) NSString *versionForProductLabel;
@property (readonly, retain) NSString *serverMetadataURL;
@property (readonly) BOOL allowedToUseInstallLater;
@property (readonly) BOOL shouldAuthenticateReboot;
@property (readonly) BOOL shouldLaunchFirstLoginOptimization;
@property (readonly) BOOL isMajorOSUpdate;
@property (readonly) BOOL isMajorOSUpdateInternal;
@property (readonly, retain) SUMajorProduct *majorProduct;
@property (readonly) BOOL adminDeferred;
@property (readonly, retain) NSDate *adminDeferralDate;
@property (readonly, retain) NSDictionary *matchingDictionary;
@property (readonly, retain) NSDictionary *extraInfo;
@property (readonly) NSArray *packageIdentifiersToInstall;
@property (readonly) long long downloadSize;
@property BOOL doItLaterUpdateAndNowIsLater;
@property BOOL isFirmwareUpdate;
@property (readonly) NSString *productType;
@property (readonly) NSString *productBuildVersion;
@property (readonly) NSString *productVersion;
@property (readonly, getter=isAutoUpdateEligible) BOOL autoUpdateEligible;
@property (readonly) NSDate *postDate;
@property (readonly) NSDate *deferredEnablementDate;
@property (readonly) NSDictionary *updateInfo;
@property (readonly) long long shouldAutoInstallWithDelayInHours;
@property (readonly, retain) NSString *customCriticalNotificationTitle;
@property (readonly, retain) NSString *customCriticalNotificationText;
@property (readonly) BOOL showPostInstallNotification;
@property (readonly, retain) NSString *customTitleForPostInstallNotification;
@property (readonly, retain) NSString *customTextForPostInstallNotification;
@property (readonly, retain) NSURL *customURLForPostInstallNotification;

+ (id)stringForUpdateState:(long long)a0;
+ (id)stringForUpdateType:(long long)a0;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getObjectFromExtendedMetaInfoForKey:(id)a0;
- (id)initWithProductKey:(id)a0 title:(id)a1 versionString:(id)a2 longDescription:(id)a3;
- (id)initWithSUProduct:(id)a0;
- (id)updateLabel;

@end
