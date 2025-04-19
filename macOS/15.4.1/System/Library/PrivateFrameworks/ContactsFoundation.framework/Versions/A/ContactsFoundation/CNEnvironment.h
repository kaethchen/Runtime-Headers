@class NSDistributedNotificationCenter, NSString, NSNumber, CNUserDefaults, NSLocale, CNEnvironmentBase, NSNotificationCenter;
@protocol CNFileManager, CNFeatureFlags, CNAuthorizationContext, CNEntitlementVerification, CNSchedulerProvider, CNLocalizationServices, CNProbabilityUtility, CNTimeProvider, CNWatchdog, _TtP18ContactsFoundation24CNKeychainFacadeProtocol_;

@interface CNEnvironment : CNEnvironmentBase {
    NSString *_defaultCountryCode;
    NSString *_homeCountryCode;
    NSString *_currentCountryCode;
    NSLocale *_currentLocaleOverride;
    NSString *_currentRegionCode;
    NSNumber *_isInternalBuildStorage;
    NSNumber *_isExtendedGreenTeaDeviceStorage;
    NSNumber *_isGreenTeaDeviceStorage;
    NSNumber *_isCommLimitsEnabledStorage;
    NSNumber *_isKeychainEnabledStorage;
}

@property (class, readonly) CNEnvironment *currentEnvironment;
@property (class, readonly) CNEnvironmentBase *defaultEnvironment;

@property (nonatomic, readonly) id<_TtP18ContactsFoundation24CNKeychainFacadeProtocol_> keychainFacade;
@property (readonly) id<CNFileManager> fileManager;
@property (readonly) CNUserDefaults *userDefaults;
@property (readonly) id<CNFeatureFlags> featureFlags;
@property (readonly) id<CNSchedulerProvider> schedulerProvider;
@property (readonly) id<CNTimeProvider> timeProvider;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (readonly) id<CNEntitlementVerification> entitlementVerifier;
@property (readonly) id<CNAuthorizationContext> authorizationContext;
@property (readonly) id<CNLocalizationServices> localizationServices;
@property (readonly) id<CNProbabilityUtility> probabilityUtility;
@property (readonly) id<CNWatchdog> watchdog;
@property (readonly) NSString *mainBundleIdentifier;
@property (readonly) NSString *defaultCountryCode;
@property (readonly) NSString *homeCountryCode;
@property (readonly) NSString *currentCountryCode;
@property (readonly) NSLocale *currentLocale;
@property (readonly, getter=isInternalBuild) BOOL internalBuild;
@property (readonly, getter=isGreenTeaDevice) BOOL greenTeaDevice;
@property (readonly, getter=isExtendedGreenTeaDevice) BOOL extendedGreenTeaDevice;
@property (readonly, getter=getCurrentRegionCode) NSString *currentRegionCode;
@property (readonly, getter=isCommLimitsEnabled) BOOL commLimitsEnabled;
@property (readonly, getter=isKeychainEnabled) BOOL keychainEnabled;
@property (readonly, getter=isAquaSession) BOOL aquaSession;

+ (char *)environmentStackKey;
+ (id)os_log;

- (id)init;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)getCurrentCountryCode;
- (id)getDefaultCountryCode;
- (id)getHomeCountryCode;
- (BOOL)isCommLimitsEnabledImpl;
- (BOOL)isKeychainEnabledImpl;
- (id)valueForKey:(id)a0 onCacheMiss:(id /* block */)a1;

@end
