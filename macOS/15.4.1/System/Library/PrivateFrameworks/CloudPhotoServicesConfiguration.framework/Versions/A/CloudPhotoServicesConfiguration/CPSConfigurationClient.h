@class NSArray, NSXPCConnection, NSMutableDictionary, NSSet, NSObject, NSString;
@protocol OS_dispatch_queue, CPSStatusInformation;

@interface CPSConfigurationClient : NSObject <CPSConfigurationServiceClient>

@property (retain, nonatomic) NSObject<CPSStatusInformation> *cachedStatusInformation;
@property (retain) NSArray *observers;
@property (retain) NSXPCConnection *serviceConnection;
@property long long state;
@property (retain) NSMutableDictionary *pendingRequests;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (copy) id /* block */ pendingStartCompletionHandler;
@property (retain) NSSet *statusProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceBundleIdentifier;
+ (id)configurationClient;
+ (BOOL)hasUnimportedAssets;
+ (BOOL)openPhotosApplicationPreferencesToiCloudPane;
+ (BOOL)isLegacyMyPhotoStreamEnabled;
+ (BOOL)isLegacySharedPhotoStreamEnabled;
+ (id)legacyMyPhotoStreamLibraryIdentifier;
+ (BOOL)osxPhotosApplicationIsPresent;
+ (void)willLogOutOfCurrentiCloudAccount;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isStarted;
- (void)shutdown;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)addConfigurationChangeObserver:(id)a0;
- (void)cloudPhotoLibraryServiceStatusWithReply:(id /* block */)a0;
- (void)estimateLibrarySizeWithOptions:(id)a0 progress:(id *)a1 completionHandler:(id /* block */)a2;
- (void)requestCloudPhotoServiceStateChange:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupServiceConnection;
- (void)addInformationAboutClientAndRequest:(id)a0 toStateChangeRequestInformation:(id)a1;
- (void)cloudPhotoLibraryFitsOnLocalDiskWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)cloudPhotoServicesStatusWithCompletionHandler:(id /* block */)a0;
- (void)cloudPhotoServicesStatusWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)didChangeLoggedInAccountStatus;
- (void)didChangePreferencesForServiceIdentifiers:(id)a0;
- (void)didChangeStateForServiceIdentifiers:(id)a0;
- (void)didChangeSystemPhotoLibraryStatus;
- (void)didReceiveLegacyStateChangeNotification:(id)a0;
- (id)installedCompatibleLegacyPhotoApplicationBundleIdentifiers;
- (id)installedIncompatibleLegacyPhotoApplicationBundleIdentifiers;
- (void)notifyObserversImplementingSelector:(SEL)a0 notifier:(id /* block */)a1;
- (BOOL)osxPhotosApplicationIsPresent;
- (void)removeConfigurationChangeObserver:(id)a0;
- (BOOL)shouldReturnLegacyPhotoApplicationStatusInformation;
- (BOOL)shouldTargetLegacyPhotoApplicationsAndRunInProcessForRequest:(id)a0;
- (void)startListeningToLegacyStateChangeNotification;
- (void)stopListeningToLegacyStateChangeNotification;
- (void)testServiceAbortWithCompletionHandler:(id /* block */)a0;
- (void)testServiceErrorWithCompletionHandler:(id /* block */)a0;
- (void)transitionToStartedState;
- (void)updateCachedConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)waitForStartedStateWithCompletionHandler:(id /* block */)a0;

@end
