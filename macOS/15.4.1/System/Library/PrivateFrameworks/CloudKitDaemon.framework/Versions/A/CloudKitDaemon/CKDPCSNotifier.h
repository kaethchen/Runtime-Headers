@class NSMutableDictionary, NSSet, NSMutableSet, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CKDPCSNotifier : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *pcsUpdateSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizeQueue;
@property (retain, nonatomic) NSMutableDictionary *missingIdentitiesContextMap;
@property (retain, nonatomic) NSMutableSet *mutableServicesNeedingDBRReauthentication;
@property (retain, nonatomic) NSMutableDictionary *testOverrides;
@property (readonly, nonatomic) NSSet *servicesNeedingDBRReauthentication;

+ (id)sharedNotifier;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addContext:(id)a0 forManagerUUID:(id)a1;
- (void)addMissingIdentityPublicKeys:(id)a0 forManagerUUID:(id)a1 withAccount:(id)a2;
- (void)addServicesNeedingDBRReauthentication:(id)a0;
- (void)addServicesWithMissingIdentities:(id)a0 forManagerUUID:(id)a1 withAccount:(id)a2;
- (void)addTestOverrides:(id)a0;
- (BOOL)checkAndClearTestOverrides:(id)a0;
- (void)clearContextIfUnnecessaryForManagerUUID:(id)a0;
- (void)clearServicesAndPublicKeysForManagerUUID:(id)a0;
- (void)clearServicesNeedingDBRReauthentication;
- (BOOL)hasOutstandingServicesNeedingDBRReauthentication;
- (void)securityViewBecameReady:(id)a0;
- (BOOL)serviceNeedsDBRReauthentication:(id)a0;
- (void)setupGuitarfishRepairNotificationHandling;
- (void)setupIdentityUpdateNotificationHandling;

@end
