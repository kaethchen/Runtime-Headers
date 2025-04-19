@class NSURL, RCConfigurationManager, NSDate, NSObject, FCNewsAppConfig, FCAsyncSerialQueue, FCKeyValueStore, NSDictionary, NSString, NSHashTable, FCContextConfiguration, NFUnfairLock, NSArray, NSData;
@protocol FCCoreConfiguration, FCJSONEncodableObjectProviding, FCFeldsparIDProvider, FCAppActivityMonitor, FCNewsAppConfiguration, FCNetworkBehaviorMonitor, OS_dispatch_queue;

@interface FCConfigurationManager : NSObject <FCFeldsparIDProviderObserving, FCAppActivityObserving, FCNewsAppConfigurationManager, FCCoreConfigurationManager, FCMagazinesConfigurationManager, FCTodayFeedConfigurationManager, FCAudioFeedConfigManager> {
    BOOL _shouldIgnoreCache;
    BOOL _attemptedAppConfigFetch;
    BOOL _runningUnitTests;
    FCNewsAppConfig *_currentAppConfiguration;
    NSDate *_lastModificationDate;
    RCConfigurationManager *_remoteConfigurationManager;
    FCContextConfiguration *_contextConfiguration;
    id<FCFeldsparIDProvider> _feldsparIDProvider;
    NSString *_appShortVersionString;
    NSString *_buildNumberString;
    unsigned long long _applicationState;
    id<FCAppActivityMonitor> _appActivityMonitor;
    id<FCNetworkBehaviorMonitor> _networkBehaviorMonitor;
    NFUnfairLock *_accessLock;
    NSObject<OS_dispatch_queue> *_workQueue;
    FCAsyncSerialQueue *_remoteAppConfigSerialQueue;
    FCAsyncSerialQueue *_remoteWidgetConfigSerialQueue;
    FCAsyncSerialQueue *_remoteTodayConfigSerialQueue;
    FCAsyncSerialQueue *_remoteMagazineConfigSerialQueue;
    FCAsyncSerialQueue *_remoteAudioConfigSerialQueue;
    NSURL *_containerDirectory;
    FCKeyValueStore *_localStore;
    NSDictionary *_cachedWidgetConfigurationDict;
    NSData *_currentMagazinesConfiguration;
    NSData *_currentTodayFeedConfiguration;
    NSData *_currentAudioFeedConfiguration;
    NSHashTable *_appConfigObservers;
    NSHashTable *_coreConfigObservers;
}

@property (copy, nonatomic) NSArray *treatmentIDs;
@property (copy, nonatomic) NSArray *segmentSetIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<FCNewsAppConfiguration> appConfiguration;
@property (readonly, nonatomic) id<FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration;
@property (readonly, copy, nonatomic) NSString *feldsparID;
@property (readonly, nonatomic) id<FCNewsAppConfiguration> fetchedAppConfiguration;
@property (readonly, nonatomic) id<FCNewsAppConfiguration, FCJSONEncodableObjectProviding> jsonEncodableAppConfiguration;
@property (readonly, nonatomic) id<FCCoreConfiguration> configuration;
@property (readonly, nonatomic) NSData *magazinesConfigurationData;
@property (readonly, nonatomic) NSData *todayFeedConfigurationData;
@property (readonly, nonatomic) NSData *audioFeedConfigData;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initForTesting;
- (void)activityObservingApplicationDidEnterBackground;
- (void)activityObservingApplicationWillEnterForeground;
- (void)addAppConfigObserver:(id)a0;
- (void)feldsparIDProviderDidChangeFeldsparID:(id)a0;
- (void)fetchAppConfigurationIfNeededWithCompletion:(id /* block */)a0;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppWidgetConfigurationWithTodayLiteConfig:(BOOL)a0 additionalFields:(id)a1 completion:(id /* block */)a2;
- (void)fetchAudioFeedConfigIfNeededWithCompletionQueue:(id)a0 formatVersion:(id)a1 completion:(id /* block */)a2;
- (void)fetchConfigurationIfNeededWithCompletion:(id /* block */)a0;
- (void)fetchConfigurationIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)fetchMagazinesConfigurationIfNeededWithCompletionQueue:(id)a0 formatVersion:(id)a1 completion:(id /* block */)a2;
- (void)fetchTodayFeedConfigurationIfNeededWithCompletionQueue:(id)a0 feedType:(unsigned long long)a1 formatVersion:(id)a2 cachePolicy:(id)a3 networkActivityBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (id)initWithContextConfiguration:(id)a0 contentHostDirectoryFileURL:(id)a1 feldsparIDProvider:(id)a2;
- (id)initWithContextConfiguration:(id)a0 contentHostDirectoryFileURL:(id)a1 feldsparIDProvider:(id)a2 appShortVersionString:(id)a3 buildNumberString:(id)a4 networkBehaviorMonitor:(id)a5;
- (id)initWithContextConfiguration:(id)a0 contentHostDirectoryFileURL:(id)a1 feldsparIDProvider:(id)a2 appShortVersionString:(id)a3 buildNumberString:(id)a4 networkBehaviorMonitor:(id)a5 appActivityMonitor:(id)a6 applicationState:(unsigned long long)a7;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)a0 refreshCompletion:(id /* block */)a1;
- (void)removeAppConfigObserver:(id)a0;

@end
