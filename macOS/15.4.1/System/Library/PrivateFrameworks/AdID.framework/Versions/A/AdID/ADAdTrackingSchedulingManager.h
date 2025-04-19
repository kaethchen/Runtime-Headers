@class APSConnection, NSString, ADLoggingProfileMonitor;
@protocol NSObject;

@interface ADAdTrackingSchedulingManager : NSObject <APSConnectionDelegate>

@property (retain, nonatomic) ADLoggingProfileMonitor *loggingProfileMonitor;
@property (retain, nonatomic) id<NSObject> storeFrontNotifyToken;
@property (retain, nonatomic) id<NSObject> accountChangedNotifyToken;
@property (retain, nonatomic) APSConnection *pushConnection;
@property (nonatomic) BOOL isConfigRequestInFlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (id)currentBundleID;
- (void)forceExpiration;
- (BOOL)_shouldSaveConfig;
- (void)handleAccountChange;
- (void)handleConfiguration;
- (BOOL)isAdEnabledLocality;
- (BOOL)isNewsOrStocksEnabledLocality;
- (BOOL)isSearchAdsEnabled;
- (BOOL)isSearchOrSegmentEnabled;
- (long long)latestPersonalizedConsentVersion;
- (void)migratePersonalizedAdsFromLAT;
- (void)migratePersonalizedAdsOnboarding;
- (void)pushDisable;
- (void)pushEnable;
- (void)refreshConfiguration:(id /* block */)a0;
- (id)retrieveNewsRecord:(id *)a0;
- (void)setSessionManagementDefaults;

@end
