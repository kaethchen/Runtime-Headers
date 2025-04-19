@class NSString, AMSMetricsDatabase, ACAccount, AMSProcessInfo;

@interface AMSMetricsIdentifierStore : NSObject {
    AMSMetricsDatabase *_database;
}

@property (retain, nonatomic) AMSMetricsIdentifierStore *debugUserIdStore;
@property (nonatomic) BOOL shouldEmitDiagnosticFields;
@property (nonatomic) BOOL shouldEmitPreviousUserId;
@property (retain) ACAccount *account;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSString *domain;
@property BOOL includeAccountMatchStatus;
@property BOOL isActiveITunesAccountRequired;
@property double resetInterval;

+ (id)_sync;
+ (id)_sharedQueue;
+ (id)identifierForAccount:(id)a0 bag:(id)a1 bagNamespace:(id)a2 keyName:(id)a3;
+ (id)identifierStoreWithAccount:(id)a0 bagNamespace:(id)a1 bag:(id)a2;
+ (id)_parametersForBag:(id)a0 bagNamespace:(id)a1;
+ (id)_accountIdentifierForAccount:(id)a0;
+ (id)_applyExpiryForKey:(id)a0 inNamespace:(id)a1 accountID:(id)a2 bag:(id)a3 at:(id)a4 consumerIDResetInterval:(double)a5;
+ (id)_database;
+ (id)_generateIdentifierKey:(id)a0 storeInfo:(id)a1 period:(long long)a2 resetInterval:(double)a3;
+ (id)_generateStoreKeyForAccount:(id)a0 domain:(id)a1 clientInfo:(id)a2;
+ (id)_identifierStoreInfoForKeys:(id)a0 inDatabase:(id)a1 date:(id)a2 needsToSync:(BOOL *)a3 account:(id)a4 clientInfo:(id)a5 domain:(id)a6 resetInterval:(double)a7 error:(id *)a8;
+ (id)_identifierStoreWithAccount:(id)a0 parameters:(id)a1;
+ (long long)_periodFrom:(double)a0 storeInfoStarted:(id)a1 now:(id)a2;
+ (void)_removeStoreForNamespace:(id)a0 accountID:(id)a1 bag:(id)a2;
+ (void)_setConsumerIdentifier:(id)a0 forKey:(id)a1 inNamespace:(id)a2 accountID:(id)a3 bag:(id)a4 at:(id)a5 serverProvidedAt:(id)a6;
+ (void)cleanupIdentifiers;
+ (void)removeIdentifiersForAccount:(id)a0;
+ (void)removeIdentifiersForStore:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)generateEventFieldsForKeys:(id)a0;
- (id)_generateEventFieldsForKeys:(id)a0 date:(id)a1;
- (void)_generateFutureIdentifiersIfNeededForKeys:(id)a0 storeInfo:(id)a1 afterPeriod:(long long)a2 inDatabase:(id)a3 date:(id)a4;
- (id)_identifierInfoForKey:(id)a0 storeInfo:(id)a1 period:(long long)a2 inDatabase:(id)a3 date:(id)a4 setValue:(id)a5 lastSyncDate:(id)a6 needsToSync:(BOOL *)a7 error:(id *)a8;
- (id)_identifiersForKeys:(id)a0 currentDate:(id)a1;
- (void)_setIdentifier:(id)a0 withStartedDate:(id)a1 forKey:(id)a2;
- (void)_setIdentifier:(id)a0 withStartedDate:(id)a1 lastSyncDate:(id)a2 forKey:(id)a3;
- (id)generateEventFieldsForKeys:(id)a0 date:(id)a1;
- (id)identifierForKey:(id)a0;
- (id)identifierIfExistsForKey:(id)a0;
- (BOOL)isAccountValidForKey:(id)a0 activeItunesAccountDSID:(inout id *)a1;
- (void)setIdentifier:(id)a0 forKey:(id)a1;

@end
