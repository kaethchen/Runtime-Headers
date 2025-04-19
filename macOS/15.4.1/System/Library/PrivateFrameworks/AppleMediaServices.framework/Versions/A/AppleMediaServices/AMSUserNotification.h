@class NSDate, NSString, NSArray, NSURL, NSSet, NSMutableDictionary, NSDictionary, AMSBagKeySet, ACAccount, AMSUserNotificationAction;

@interface AMSUserNotification : NSObject <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property BOOL anonymizeMetrics;
@property long long intent;
@property (retain) NSString *categoryIdentifier;
@property BOOL shouldSuppressDefaultAction;
@property (retain) NSString *threadIdentifier;
@property (retain) ACAccount *account;
@property (retain) NSURL *artworkUrl;
@property (retain) NSURL *videoUrl;
@property (retain) NSArray *buttonActions;
@property (retain) NSString *centerBundleIdentifier;
@property (retain) AMSUserNotificationAction *defaultAction;
@property BOOL explicitContent;
@property (retain) NSString *identifier;
@property (retain) NSString *informativeText;
@property (retain) NSString *logKey;
@property (retain) NSDictionary *metricsEvent;
@property (retain) NSDate *scheduledTime;
@property (retain) NSSet *subsections;
@property (retain) NSString *subtitle;
@property (retain) NSString *title;
@property (retain) NSMutableDictionary *userInfo;
@property unsigned long long interruptionLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleNotificationResponse:(id)a0 bag:(id)a1;
+ (BOOL)shouldDeleteNotificationForPayload:(id)a0 outIdentifier:(id *)a1 scheduledOnly:(BOOL *)a2;
+ (id)_cachedImagePathForIdentifier:(id)a0 assetURL:(id)a1;
+ (BOOL)_canParseNotificationWithIdentifier:(id)a0 userInfo:(id)a1;
+ (id)_dateFromString:(id)a0;
+ (id)_downloadAssetAtUrl:(id)a0 withIdentifier:(id)a1 logKey:(id)a2 bag:(id)a3;
+ (id)_identifierFromPayload:(id)a0;
+ (id)createBagForSubProfile;
+ (id)handleNotificationResponse:(id)a0 bagContract:(id)a1;
+ (void)handleServiceExtensionNotificationRequest:(id)a0 bag:(id)a1 withContentHandler:(id /* block */)a2;
+ (id)notificationCenter:(id)a0 didChangeSettings:(id)a1 bag:(id)a2;
+ (id)notificationCenter:(id)a0 openSettingsForNotification:(id)a1 bag:(id)a2;
+ (id)notificationWithPayload:(id)a0 andConfig:(id)a1;
+ (void)openAppUsingBundleIdentifier:(id)a0;
+ (BOOL)shouldHandleNotificationResponse:(id)a0;
+ (BOOL)shouldHandleServiceExtensionNotificationRequest:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (id)_generatePayloadWithBase:(id)a0;
- (void)addButtonAction:(id)a0;
- (id)createNSUserNotification;
- (id)createUNNotificationActions;
- (id)createUNNotificationContent;
- (id)createUNNotificationRequestFromContent:(id)a0;
- (id)determineSelectedActionFromResponse:(id)a0 error:(id *)a1;
- (id)handleSelectedButton:(id)a0 bag:(id)a1;
- (id)handleSelectedButton:(id)a0 bagContract:(id)a1;
- (id)initWithNSUserNotification:(id)a0;
- (id)initWithPayload:(id)a0 andConfig:(id)a1;
- (id)initWithTitle:(id)a0 intent:(long long)a1;
- (id)initWithUNNotification:(id)a0;

@end
