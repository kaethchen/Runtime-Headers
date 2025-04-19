@class NSString, NSArray, NSDate, NSAttributedString, NSError;

@interface SUAdminAvailableUpdate : NSObject

@property (retain) NSString *majorOSVersion;
@property (retain) NSString *majorOSBundleIdentifier;
@property (retain) NSString *humanReadableName;
@property (retain) NSString *majorOSBundleShortVersion;
@property (readonly) BOOL criticalUpdate;
@property (readonly) BOOL configDataUpdate;
@property (readonly) BOOL firmwareUpdate;
@property (readonly) BOOL macOSUpdate;
@property (readonly) BOOL majorOSUpdate;
@property (readonly) BOOL restartRequiredUpdate;
@property (readonly) BOOL allowedToUseDoItLater;
@property (readonly) BOOL isRecommended;
@property (readonly) BOOL adminDeferred;
@property (readonly) NSDate *adminDeferralDate;
@property (readonly) NSString *productKey;
@property (readonly) NSString *title;
@property (readonly) NSString *version;
@property (readonly) NSArray *applicationIdentifiersToClose;
@property (readonly) NSString *serverMetadataURL;
@property (readonly) NSString *currentLocalization;
@property (readonly) NSAttributedString *licenseAgreement;
@property (readonly) NSDate *postDate;
@property (readonly) NSString *productVersion;
@property (readonly) NSString *productBuildVersion;
@property (readonly, getter=isAutoUpdateEligible) BOOL autoUpdateEligible;
@property (readonly) long long installStatus;
@property (readonly) NSError *lastError;
@property (readonly) double downloadPercentComplete;
@property (readonly) long long downloadSize;

- (void)dealloc;
- (id)description;
- (void)_setStatus:(id)a0;
- (id)_stringForInstallStatus;
- (id)initWithUpdateProduct:(id)a0 andStatus:(id)a1;

@end
