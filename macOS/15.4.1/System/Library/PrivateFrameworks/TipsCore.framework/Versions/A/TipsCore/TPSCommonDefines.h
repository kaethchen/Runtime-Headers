@class TPSTipStatusController, NSString, NSMutableDictionary, NSMutableArray, NSDate, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface TPSCommonDefines : NSObject {
    NSMutableArray *_cloudDevices;
    NSString *_userLanguage;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *collectionStatusMap;
@property (nonatomic) int maxVersion;
@property (nonatomic) BOOL supportsUIApplication;
@property (readonly, nonatomic) BOOL tipsAccessAllowed;
@property (readonly, nonatomic) long long daysSinceLastMajorVersionUpdate;
@property (retain, nonatomic) NSString *majorVersion;
@property (retain, nonatomic) NSDate *lastMajorVersionUpdateDate;
@property (retain, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *userLanguage;
@property (readonly, nonatomic) NSUserDefaults *appGroupDefaults;
@property (retain, nonatomic) NSMutableDictionary *appBundleIDMap;
@property (readonly, nonatomic) long long assetRatioType;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;

+ (id)sharedInstance;
+ (id)deviceFamily;
+ (double)displayScale;
+ (id)deviceName;
+ (id)osBuild;
+ (id)productVersion;
+ (id)deviceClass;
+ (BOOL)isInternalBuild;
+ (BOOL)hardwareChanged;
+ (id)mainBundleIdentifier;
+ (id)clientBundleIdentifier;
+ (int)buttonType;
+ (BOOL)isGreenTeaDevice;
+ (BOOL)isInternalDevice;
+ (id)appGroupIdentifier;
+ (BOOL)supportsFaceID;
+ (id)spotlightBundleIdentifier;
+ (BOOL)isSeniorUser;
+ (id)notificationBundleIdentifier;
+ (BOOL)isAppValidWithBundleIdentifier:(id)a0;
+ (BOOL)isMacUI;
+ (BOOL)isPadUI;
+ (id)_tipStatusArchivalURL;
+ (BOOL)callerIsTipsdWithSource:(id)a0;
+ (id)checklistCollectionIdentifier;
+ (id)deviceGuideIdentifier;
+ (id)deviceMarketingName;
+ (id)deviceSymbol;
+ (id)hardwareWelcomeCollectionIdentifier;
+ (BOOL)isAppRestrictedWithBundleIdentifier:(id)a0;
+ (BOOL)isChecklistCollectionWithIdentifier:(id)a0;
+ (BOOL)isPhoneUI;
+ (BOOL)isRecordValid:(id)a0;
+ (BOOL)isSavedTipsCollectionIdentifier:(id)a0;
+ (BOOL)isVisionUI;
+ (int)maxRequestVersion;
+ (id)softwareWelcomeCollectionIdentifier;
+ (BOOL)supportsCloudDeviceUserGuide;
+ (BOOL)supportsUserGuide;
+ (id)switcherWelcomeCollectionIdentifier;
+ (id)tipsCoreFrameworkBundle;

- (id)init;
- (void).cxx_destruct;
- (long long)userType;
- (void)clearDataCache;
- (long long)daysSinceLastMajorVersionUpdate;
- (id)activateDateForCollectionIdentifier:(id)a0;
- (void)activatedCollection:(id)a0;
- (void)activatedCollections:(id)a0;
- (id)appBundleIDForInstalledAppWithIdentifier:(id)a0;
- (id)archivedTipStatuses;
- (id)collectionIdentifierForCurrentUserType;
- (id)collectionIdentifierToUseForCollectionIdentifiers:(id)a0;
- (id)collectionStatusForCollectionIdentifier:(id)a0;
- (id)dateForCollectionIdentifier:(id)a0 dateType:(unsigned long long)a1;
- (void)deleteTipStatusArchivalDirectory;
- (void)featuredCollection:(id)a0;
- (BOOL)hasLocaleChanged;
- (id)lastMajorVersionUpdateDate;
- (void)notifiedCollection:(id)a0;
- (id)reloadAppGroupDefaults;
- (void)reloadModelInformation;
- (void)resetCollectionStatusMap;
- (void)setLastMajorVersionUpdateDate:(id)a0;
- (void)setUserLanguage:(id)a0;
- (void)syncCollectionStatusMap;
- (void)updateCollectionStatus:(unsigned long long)a0 collections:(id)a1;
- (id)userLanguage;
- (void)viewedCollection:(id)a0;

@end
