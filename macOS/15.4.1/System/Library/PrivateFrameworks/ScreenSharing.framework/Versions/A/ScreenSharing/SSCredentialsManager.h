@class NSLock, NSMutableDictionary;

@interface SSCredentialsManager : NSObject {
    NSLock *mRequestsMapLock;
    NSLock *mOptionsLock;
    NSMutableDictionary *mRequestsToIDsMap;
    NSMutableDictionary *mRequestsToOptionsMap;
}

+ (void)initialize;
+ (id)sharedManager;
+ (id)kerberosCacheActiveSet;
+ (id)kerberosCacheSet;
+ (id)kerberosUniquePrincipalNamesInSet:(id)a0;

- (void)dealloc;
- (id)init;
- (void)requestCredentialsForVNCAuthenticationForRequester:(id)a0 withOptions:(id)a1;
- (void)_endRequestForRequester:(id)a0 closeNetAuth:(BOOL)a1;
- (int)_killNetAuthProcesses;
- (void)cleanupAllRequests;
- (void)displayError:(id)a0 forRequester:(id)a1;
- (void)endRequestForRequester:(id)a0;
- (void)gatherCredentialsWithOptions:(id)a0 forRequester:(id)a1;
- (void)gatherCredentialsWithoutNetAuthWithOptions:(id)a0 forRequester:(id)a1;
- (id)optionsForRequester:(id)a0;
- (void)removeRequestIDForRequester:(id)a0;
- (void)requestCredentialsForAskToControlForRequester:(id)a0 withOptions:(id)a1;
- (void)requestCredentialsForAskToObserveForRequester:(id)a0 withOptions:(id)a1;
- (void)requestCredentialsForAuthType:(id)a0 forRequester:(id)a1 withOptions:(id)a2;
- (void)requestCredentialsForDiffieHellmanNamePasswordForRequester:(id)a0 withOptions:(id)a1;
- (void)requestCredentialsForInvalidAuthenticationTypeForRequester:(id)a0 withOptions:(id)a1;
- (void)requestCredentialsForKerberosForRequester:(id)a0 withOptions:(id)a1;
- (void)requestCredentialsForKerberosNoUIForRequester:(id)a0 withOptions:(id)a1;
- (void)requestCredentialsForKerberosTGTForRequester:(id)a0 withOptions:(id)a1;
- (void)requestCredentialsForNoAuthenticationNeededForRequester:(id)a0 withOptions:(id)a1;
- (void)requestCredentialsForPriorAuthorized:(id)a0 withOptions:(id)a1;
- (void)requestCredentialsForRSAForRequester:(id)a0 withOptions:(id)a1;
- (void)requestCredentialsForSRPForRequester:(id)a0 withOptions:(id)a1;
- (void *)requestIDForRequester:(id)a0;
- (id)requesterForRequestID:(void *)a0;
- (void)returnClientPrincipal:(id)a0 servicePrincipal:(id)a1 forCompositeKey:(id)a2 withStatus:(int)a3;
- (void)returnCompositeKey:(id)a0 withStatus:(int)a1;
- (void)returnCredentials:(id)a0 forCompositeKey:(id)a1 withStatus:(int)a2;
- (void)returnPassword:(id)a0 forCompositeKey:(id)a1 withStatus:(int)a2;
- (void)returnRequestGuestAccessForCompositeKey:(id)a0;
- (void)returnUsername:(id)a0 password:(id)a1 authtype:(id)a2 label:(id)a3 serverSupportsSRP:(BOOL)a4 forCompositeKey:(id)a5 withStatus:(int)a6;

@end
