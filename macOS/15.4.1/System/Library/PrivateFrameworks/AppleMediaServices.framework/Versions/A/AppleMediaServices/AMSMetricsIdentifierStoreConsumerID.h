@interface AMSMetricsIdentifierStoreConsumerID : NSObject

+ (id)_accountForAltDSID:(id)a0;
+ (id)_applyExpiryForKey:(id)a0 inNamespace:(id)a1 accountID:(id)a2 bag:(id)a3 at:(id)a4 consumerIDResetInterval:(double)a5;
+ (id)_identifierInfoForKey:(id)a0 storeInfo:(id)a1 inDatabase:(id)a2 setValue:(id)a3 needsToSync:(BOOL *)a4 serverProvidedAt:(id)a5 resetInterval:(double)a6 error:(id *)a7;
+ (id)_identifierStoreInfoForKeys:(id)a0 inDatabase:(id)a1 date:(id)a2 started:(id)a3 updateStarted:(BOOL)a4 needsToSync:(BOOL *)a5 account:(id)a6 clientInfo:(id)a7 domain:(id)a8 resetInterval:(double)a9 error:(id *)a10;
+ (id)_promiseOfSunsetIdentifier:(id)a0 withStartedDate:(id)a1 lastSyncDate:(id)a2 forKey:(id)a3 database:(id)a4 account:(id)a5 clientInfo:(id)a6 domain:(id)a7 resetInterval:(double)a8 consumerIDResetInterval:(double)a9;
+ (void)_removeStoreForNamespace:(id)a0 accountID:(id)a1 bag:(id)a2;
+ (void)_setConsumerIdentifier:(id)a0 forKey:(id)a1 inNamespace:(id)a2 accountID:(id)a3 bag:(id)a4 at:(id)a5 serverProvidedAt:(id)a6;
+ (void)_setIdentifier:(id)a0 withStartedDate:(id)a1 forKey:(id)a2 database:(id)a3 account:(id)a4 clientInfo:(id)a5 domain:(id)a6 resetInterval:(double)a7 serverProvidedAt:(id)a8;
+ (id)_sunsetIdentifierInfoForKey:(id)a0 storeInfo:(id)a1 inDatabase:(id)a2 needsToSync:(BOOL *)a3 resetInterval:(double)a4 consumerIDResetInterval:(double)a5 error:(id *)a6;

@end
