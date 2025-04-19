@class NSXPCConnection, NSString, NSArray, NSMutableDictionary, NSDictionary, NSMapTable, NSNumber;

@interface SRAuthorizationClient : NSObject <SRSensorKitServiceClientAuthorizationListening> {
    int _registrationToken;
    NSXPCConnection *_connection;
    NSMapTable *_listeners;
    NSMutableDictionary *_actualAuthorizedServices;
    NSMutableDictionary *_deniedServices;
    NSMutableDictionary *_lastModifiedTimes;
    NSNumber *_prerequisites;
}

@property (class, retain, nonatomic) SRAuthorizationClient *authClient;
@property (class, readonly) SRAuthorizationClient *sharedInstance;

@property BOOL initialAuthNeeded;
@property (readonly, copy) NSDictionary *authorizedServices;
@property (readonly, nonatomic) NSArray *legacyResearchStudyBundleIDs;
@property (readonly, nonatomic) NSString *legacyResearchStudyEntitlement;
@property (nonatomic) BOOL dataCollectionEnabled;
@property (nonatomic) BOOL firstRunOnboardingCompleted;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)addListener:(id)a0 forBundleId:(id)a1;
- (void)authorizedServicesDidChange:(id)a0 deniedServices:(id)a1 prerequisites:(long long)a2 lastModifiedTimes:(id)a3 bundleIdentifier:(id)a4;
- (void)initialAuthorizationStateForBundleId:(id)a0 authorizationState:(id /* block */)a1;
- (void)reregisterAfterInterruption:(id)a0 effectiveBundleId:(id)a1;

@end
