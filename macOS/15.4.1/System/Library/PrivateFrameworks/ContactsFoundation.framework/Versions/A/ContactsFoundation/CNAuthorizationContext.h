@class CNUnfairLock, NSString, CNAuditToken, NSObject, NSNumber;
@protocol OS_tcc_identity, CNTCC, CNTCCSettings, CNTCCSimulation;

@interface CNAuthorizationContext : NSObject <CNAuthorizationContext, CNTCCSimulation>

@property (class, readonly) CNAuthorizationContext *sharedInstance;

@property (retain, nonatomic) CNAuditToken *cnAuditToken;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (retain, nonatomic) id<CNTCC, CNTCCSettings, CNTCCSimulation> tccServices;
@property (retain, nonatomic) NSNumber *authorizationStatusCachedValue;
@property (retain, nonatomic) NSNumber *shouldAlwaysQueryAuthorizationStatusCachedValue;
@property (retain, nonatomic) NSNumber *isNotesAccessGrantedCachedValue;
@property (retain, nonatomic) NSNumber *isAddressingGrammarAccessGrantedCachedValue;
@property (retain, nonatomic) NSNumber *isClientTCCAllowedCachedValue;
@property (retain, nonatomic) NSNumber *isClientTCCRegionalAllowedCachedValue;
@property (retain, nonatomic) NSNumber *isClientFirstOrSecondPartyCachedValue;
@property (retain, nonatomic) NSString *clientBundleIdentifierCachedValue;
@property (retain, nonatomic) CNUnfairLock *authorizationStatusLock;
@property (retain, nonatomic) CNUnfairLock *notesAccessStatusLock;
@property (retain, nonatomic) CNUnfairLock *addressingGrammarAccessStatusLock;
@property (readonly, nonatomic) long long authorizationStatus;
@property (readonly, nonatomic) BOOL isAccessGranted;
@property (readonly, nonatomic) BOOL isFullAccessGranted;
@property (readonly, nonatomic) BOOL isLimitedAccessGranted;
@property (readonly, nonatomic) BOOL isNotesAccessGranted;
@property (readonly, nonatomic) BOOL isAddressingGrammarAccessGranted;
@property (readonly, nonatomic) BOOL isAccessRestricted;
@property (readonly, nonatomic) BOOL isAccessDenied;
@property (readonly, nonatomic) BOOL isAccessUnknown;
@property (readonly, nonatomic) BOOL isClientFirstOrSecondParty;
@property (readonly, nonatomic) BOOL isClientTCCAllowed;
@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (BOOL)shouldIgnoreAssumedIdentity:(id)a0;
+ (BOOL)shouldIgnoreAssumedIdentityForBundleIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isUnitTesting;
- (void)simulateStatus:(long long)a0;
- (BOOL)checkClientIsFirstOrSecondParty;
- (id)errorForStatus:(long long)a0;
- (BOOL)cachedAddressingGrammarAccessGranted;
- (long long)cachedAuthorizationStatus;
- (BOOL)cachedNotesAccessGranted;
- (BOOL)checkTCCEntitlementNamesAllowContacts:(id)a0;
- (id)clientBundleIdentifierImpl;
- (BOOL)doesClientHaveEntitlement:(id)a0;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1 tccServices:(id)a2;
- (BOOL)isAccessGrantedRequestingAccessIfNeeded;
- (BOOL)isAddressingGrammarAccessGrantedImpl;
- (BOOL)isClientFirstOrSecondPartyImpl;
- (BOOL)isClientTCCAllowedImpl;
- (BOOL)isClientTCCCoupledProcess;
- (BOOL)isClientTCCKilledOnAuthorizationChange;
- (BOOL)isClientTCCRegionalAllowed;
- (BOOL)isClientTCCRegionalAllowedImpl;
- (BOOL)isClientTCCUncoupledProcess;
- (BOOL)isFirstPartyAddressingGrammarEntitled;
- (BOOL)isFirstPartyNotesEntitled;
- (BOOL)isGreenTeaDevice;
- (BOOL)isNotesAccessGrantedImpl;
- (BOOL)isThirdPartyNotesEntitled;
- (BOOL)requestAccessWithError:(id *)a0;
- (void)requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;
- (id)requestAuthorizationFuture:(long long)a0;
- (void)resetCachedStatus;
- (long long)resolveRequestAuthorizationFuture:(id)a0;
- (void)saveAuthorizationRecord:(id)a0 dontKillApp:(BOOL)a1;
- (void)setAuthorizationStatus:(long long)a0 forBundleIdentifier:(id)a1 noKillApp:(BOOL)a2;
- (BOOL)shouldAlwaysQueryAuthorizationStatus;
- (BOOL)shouldAlwaysQueryAuthorizationStatusImpl;
- (void)stopSimulation;

@end
