@class NSString, TUCallProvider, NSArray, NSSet, NSDictionary, TUFeatureFlags, NSObject, NSMapTable;
@protocol OS_dispatch_queue, TUCallProviderManagerDataSource;

@interface TUCallProviderManager : NSObject <TUCallProviderManagerDataSourceDelegate>

@property (class, readonly, copy) NSSet *invitationPreferencesForRecentCall;
@property (class, readonly, copy, nonatomic) NSArray *defaultProviders;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<TUCallProviderManagerDataSource> dataSource;
@property (readonly, copy, nonatomic) NSDictionary *providersByIdentifier;
@property (retain, nonatomic) NSMapTable *delegateToQueue;
@property (readonly, nonatomic) TUFeatureFlags *featureFlags;
@property (readonly, nonatomic) TUCallProvider *superboxProvider;
@property (readonly, nonatomic) TUCallProvider *defaultProvider;
@property (readonly, nonatomic) TUCallProvider *emergencyProvider;
@property (readonly, nonatomic) TUCallProvider *voicemailProvider;
@property (readonly, nonatomic) TUCallProvider *telephonyProvider;
@property (readonly, nonatomic) TUCallProvider *faceTimeProvider;
@property (readonly, copy, nonatomic) NSArray *providers;
@property (readonly, nonatomic) TUCallProvider *defaultAppProvider;
@property (readonly, copy, nonatomic) NSArray *sortedProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)serviceForProvider:(id)a0 video:(BOOL)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)launchAppForDialRequest:(id)a0 completion:(id /* block */)a1;
- (id)providersPassingTest:(id /* block */)a0;
- (id)dialRequestForRecentCall:(id)a0;
- (void)donateUserIntentForProviderWithIdentifier:(id)a0;
- (id)initWithDataSource:(id)a0 type:(unsigned long long)a1 queue:(id)a2;
- (id)initWithLocalProviders;
- (id)initWithPairedHostDeviceProviders;
- (id)joinConversationRequestForRecentCall:(id)a0;
- (id)providerForRecentCall:(id)a0;
- (id)providerWithIdentifier:(id)a0;
- (id)providerWithService:(int)a0 video:(BOOL *)a1;
- (void)providersChangedForDataSource:(id)a0;
- (id)sortedProvidersPassingTest:(id /* block */)a0;

@end
