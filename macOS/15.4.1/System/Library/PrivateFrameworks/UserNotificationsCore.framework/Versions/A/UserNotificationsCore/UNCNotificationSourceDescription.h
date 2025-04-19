@class NSString, NSDictionary, NSURL, NSArray, UNCNotificationSourceSettingsDescription;

@interface UNCNotificationSourceDescription : NSObject <UNCNotificationSourceDescription>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *intentsBundleIdentifier;
@property (copy, nonatomic) NSString *universalApplicationIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *pushEnvironment;
@property (copy, nonatomic) NSString *defaultIconFile;
@property (copy, nonatomic) NSString *subordinateIconFile;
@property (copy, nonatomic) NSString *settingsIconFile;
@property (copy, nonatomic) NSString *settingsSheetIconFile;
@property (copy, nonatomic) NSString *carPlayIconFile;
@property (copy, nonatomic) NSString *watchQuickLookSmallIconFile;
@property (copy, nonatomic) NSString *watchQuickLookLargeIconFile;
@property (copy, nonatomic) NSString *watchListSmallIconFile;
@property (copy, nonatomic) NSString *watchListLargeIconFile;
@property (copy, nonatomic) NSString *watchQuickLook394hIconFile;
@property (copy, nonatomic) NSString *watchQuickLook448hIconFile;
@property (copy, nonatomic) NSString *watchList394hIconFile;
@property (copy, nonatomic) NSString *watchList448hIconFile;
@property (copy, nonatomic) NSString *watchQuickLook430hIconFile;
@property (copy, nonatomic) NSString *watchQuickLook484hIconFile;
@property (copy, nonatomic) NSString *watchList430hIconFile;
@property (copy, nonatomic) NSString *watchList484hIconFile;
@property (copy, nonatomic) NSString *customSettingsBundle;
@property (copy, nonatomic) NSString *customSettingsDetailControllerClass;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSURL *dataContainerURL;
@property (copy, nonatomic) NSDictionary *groupContainerURLS;
@property (copy, nonatomic) NSArray *defaultCategories;
@property (retain, nonatomic) UNCNotificationSourceSettingsDescription *defaultSettings;
@property (copy, nonatomic) NSArray *defaultTopics;
@property (copy, nonatomic) NSArray *activityTypes;
@property (nonatomic) BOOL allowCriticalAlerts;
@property (nonatomic) BOOL allowTimeSensitive;
@property (nonatomic) BOOL allowCalls;
@property (nonatomic) BOOL allowIntercom;
@property (nonatomic) BOOL allowMessages;
@property (nonatomic) BOOL allowPrivateProperties;
@property (nonatomic) BOOL allowUnlimitedContentBody;
@property (nonatomic) BOOL allowAlternateLaunchBundleIdentifiers;
@property (nonatomic) BOOL allowServiceExtensionFiltering;
@property (nonatomic) BOOL hideSettings;
@property (nonatomic) BOOL automaticallyShowSettings;
@property (nonatomic) BOOL suppressDismissalSync;
@property (nonatomic) BOOL suppressIconMask;
@property (nonatomic) BOOL suppressUserAuthorizationPrompt;
@property (nonatomic) BOOL useDefaultDataProvider;
@property (nonatomic) BOOL usesCloudKit;
@property (nonatomic) BOOL requiresTopics;
@property (nonatomic) BOOL supportsContentAvailableRemoteNotifications;
@property (nonatomic, getter=isRestricted) BOOL restricted;
@property (nonatomic) BOOL daemonShouldReceiveBackgroundResponses;
@property (nonatomic) BOOL daemonShouldReceiveNotificationSettingsUpdates;
@property (nonatomic) BOOL daemonShouldReceiveApplicationEvents;
@property (nonatomic) BOOL isAppClip;
@property (nonatomic) BOOL wantsEphemeralNotifications;
@property (nonatomic) BOOL supportsProvisionalAlerts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionWithBundleIdentifier:(id)a0 path:(id)a1 allowServiceExtensionFiltering:(BOOL)a2;

@end
