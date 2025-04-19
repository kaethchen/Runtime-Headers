@class NSString, NSArray, NSDate, NSNumber;

@interface TPSDefaultsManager : NSObject

@property (class, nonatomic, readonly) long long crunchingIntervalInDays;
@property (class, nonatomic, readonly) long long triggerMinObservationCount;
@property (class, nonatomic, readonly) BOOL debugActiveIAPs;
@property (class, nonatomic, readonly) BOOL displayAllFeaturedTopics;
@property (class, nonatomic, readonly) BOOL ignoreCloud;
@property (class, nonatomic, readonly) BOOL ignoreTargetingValidator;
@property (class, nonatomic) BOOL isInternalDevice;
@property (class, nonatomic, readonly) BOOL resetDaemonData;
@property (class, nonatomic, readonly) BOOL resetDataCache;
@property (class, nonatomic, readonly) BOOL showAllCollections;
@property (class, nonatomic, readonly) BOOL showCollectionIntro;
@property (class, nonatomic, readonly) BOOL showPagingLabelOnLongPress;
@property (class, nonatomic, readonly) BOOL suppressNotifications;
@property (class, nonatomic, readonly) NSString *assetRequestHostURL;
@property (class, nonatomic, readonly) NSString *assetRatioIdentifier;
@property (class, nonatomic, readonly) NSString *assetURL;
@property (class, nonatomic, readonly) NSString *deviceModel;
@property (class, nonatomic, readonly) NSString *featuredCollection;
@property (class, nonatomic, readonly) NSString *notificationDocument;
@property (class, nonatomic, readonly) NSString *platform;
@property (class, nonatomic, readonly) NSString *requestHostURL;
@property (class, nonatomic, readonly) NSString *requestLanguage;
@property (class, nonatomic, readonly) NSString *requestModel;
@property (class, nonatomic, readonly) NSString *requestPlatform;
@property (class, nonatomic, readonly) NSString *releaseType;
@property (class, nonatomic, readonly) NSString *requestURL;
@property (class, nonatomic, readonly) NSString *requestVersion;
@property (class, nonatomic, readonly) NSString *widgetDocument;
@property (class, nonatomic, readonly) NSNumber *contentUpdatedDarwinNotificationInSeconds;
@property (class, nonatomic, readonly) NSNumber *contextualEventDaysSinceLastMajorUpdateInSeconds;
@property (class, nonatomic, readonly) NSNumber *holdoutGroup;
@property (class, nonatomic, readonly) NSNumber *requestInterval;
@property (class, nonatomic, readonly) NSNumber *standardNotificationInterval;
@property (class, nonatomic, readonly) NSNumber *userType;
@property (class, nonatomic, readonly) double contextualEventLookBackDaysInSeconds;
@property (class, nonatomic, readonly) double featuredDocumentInterval;
@property (class, nonatomic, readonly) double welcomeNotificationDelay;
@property (class, nonatomic, readonly) double welcomeNotificationGracePeriod;
@property (class, nonatomic, readonly) double sessionTimeoutIntervalInSeconds;
@property (class, nonatomic, readonly) NSDate *lastMajorVersionUpdateDate;
@property (class, nonatomic, readonly) NSArray *matchedClientConditions;
@property (class, nonatomic, readonly) NSArray *matchedClientConditionTargeting;

- (id)init;

@end
