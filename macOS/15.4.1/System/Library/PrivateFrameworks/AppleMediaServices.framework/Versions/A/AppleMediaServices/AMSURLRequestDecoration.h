@interface AMSURLRequestDecoration : NSObject

+ (id)_addGUIDParameterToRequest:(id)a0 fromPromise:(id)a1 shouldPreserveEncoding:(BOOL)a2;
+ (BOOL)_shouldSendGUIDForRequest:(id)a0 patterns:(id)a1 schemes:(id)a2;
+ (id)addAbsintheHeadersToRequest:(id)a0 buyParams:(id)a1 bag:(id)a2 shouldUseRemoteSigningIfAvailable:(BOOL)a3;
+ (id)addAnisetteHeadersToRequest:(id)a0 account:(id)a1 type:(long long)a2 bag:(id)a3;
+ (id)addFPDIHeadersToRequest:(id)a0 buyParams:(id)a1 bag:(id)a2 retryCount:(long long)a3 fairPlayDeviceIdentity:(id)a4 fpdiNetworkProvider:(id)a5;
+ (id)addGUIDParameterToRequest:(id)a0 bag:(id)a1 preservingQueryEncoding:(BOOL)a2;
+ (id)addMescalHeaderToRequest:(id)a0 type:(long long)a1 bag:(id)a2 logKey:(id)a3;
+ (id)addPaymentHardwareStatusToRequest:(id)a0;
+ (id)addStoreFrontHeaderToRequest:(id)a0 forAccount:(id)a1 mediaType:(id)a2 bag:(id)a3;
+ (id)addTreatmentHeadersToRequest:(id)a0 forTreatmentNamespace:(id)a1;

@end
