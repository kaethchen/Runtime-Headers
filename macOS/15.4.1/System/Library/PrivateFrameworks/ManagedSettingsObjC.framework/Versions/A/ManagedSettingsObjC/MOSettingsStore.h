@class NSDictionary, MOGameCenterSettingsGroup, MOSiriSettingsGroup, MOCellularSettingsGroup, MOAppStoreSettingsGroup, MOAccountSettingsGroup, MOManagedSettingsSettingsGroup, MOFindMySettingsGroup, MOIntelligenceSettingsGroup, MOCarPlaySettingsGroup, MOAirDropSettingsGroup, MOMessagesSettingsGroup, MONewsSettingsGroup, MOShieldSettingsGroup, MOWebContentSettingsGroup, MOCameraSettingsGroup, MOApplicationSettingsGroup, MOAllowedClientSettingsGroup, MODeviceActivitySettingsGroup, MOScreenTimeSettingsGroup, MONotificationSettingsGroup, MOSafariSettingsGroup, MOUserSettingsGroup, MOUserSafetySettingsGroup, MOPrivacySettingsGroup, MOFaceTimeSettingsGroup, MOPasscodeSettingsGroup, MOCalculatorSettingsGroup, MOKeyboardSettingsGroup, MODateAndTimeSettingsGroup, MOMediaSettingsGroup;
@protocol MOSettingsReader, MOSettingsWriter;

@interface MOSettingsStore : NSObject

@property (class, readonly, nonatomic) NSDictionary *directoryAttributes;
@property (class, readonly, nonatomic) NSDictionary *fileAttributes;

@property (readonly, weak) id<MOSettingsReader> settingsReader;
@property (readonly, weak) id<MOSettingsWriter> settingsWriter;
@property (readonly, nonatomic) MOAccountSettingsGroup *account;
@property (readonly, nonatomic) MOAirDropSettingsGroup *airDrop;
@property (readonly, nonatomic) MOAllowedClientSettingsGroup *allowedClient;
@property (readonly, nonatomic) MOApplicationSettingsGroup *application;
@property (readonly, nonatomic) MOAppStoreSettingsGroup *appStore;
@property (readonly, nonatomic) MOCalculatorSettingsGroup *calculator;
@property (readonly, nonatomic) MOCameraSettingsGroup *camera;
@property (readonly, nonatomic) MOCarPlaySettingsGroup *carPlay;
@property (readonly, nonatomic) MOCellularSettingsGroup *cellular;
@property (readonly, nonatomic) MODateAndTimeSettingsGroup *dateAndTime;
@property (readonly, nonatomic) MODeviceActivitySettingsGroup *deviceActivity;
@property (readonly, nonatomic) MOFaceTimeSettingsGroup *faceTime;
@property (readonly, nonatomic) MOFindMySettingsGroup *findMy;
@property (readonly, nonatomic) MOGameCenterSettingsGroup *gameCenter;
@property (readonly, nonatomic) MOIntelligenceSettingsGroup *intelligence;
@property (readonly, nonatomic) MOKeyboardSettingsGroup *keyboard;
@property (readonly, nonatomic) MOManagedSettingsSettingsGroup *managedSettings;
@property (readonly, nonatomic) MOMediaSettingsGroup *media;
@property (readonly, nonatomic) MOMessagesSettingsGroup *messages;
@property (readonly, nonatomic) MONewsSettingsGroup *news;
@property (readonly, nonatomic) MONotificationSettingsGroup *notification;
@property (readonly, nonatomic) MOPasscodeSettingsGroup *passcode;
@property (readonly, nonatomic) MOPrivacySettingsGroup *privacy;
@property (readonly, nonatomic) MOSafariSettingsGroup *safari;
@property (readonly, nonatomic) MOScreenTimeSettingsGroup *screenTime;
@property (readonly, nonatomic) MOShieldSettingsGroup *shield;
@property (readonly, nonatomic) MOSiriSettingsGroup *siri;
@property (readonly, nonatomic) MOUserSettingsGroup *user;
@property (readonly, nonatomic) MOUserSafetySettingsGroup *userSafety;
@property (readonly, nonatomic) MOWebContentSettingsGroup *webContent;

+ (void)createSettingsDirectoryAtURL:(id)a0;
+ (id)createSettingsStoreErrorWithCode:(long long)a0;
+ (id)loadDataAtURL:(id)a0 outError:(id *)a1;
+ (id)loadEffectiveSettingsAtURL:(id)a0;
+ (void)migrateSettingsIfNecessary:(id)a0;
+ (BOOL)saveSettings:(id)a0 toURL:(id)a1;
+ (BOOL)settingAndGroupStringsFromSettingKey:(id)a0 outGroup:(id *)a1 outSetting:(id *)a2;
+ (id)settingKeyFromSetting:(id)a0 group:(id)a1;

- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (id)initStore;
- (BOOL)hasSensitiveDataInSettings:(id)a0;
- (id)metadataForSettingKey:(id)a0;
- (BOOL)setValue:(id)a0 forSettingKey:(id)a1 outError:(id *)a2;
- (id)valueForSettingKey:(id)a0;

@end
