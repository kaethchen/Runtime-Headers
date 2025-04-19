@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SKAAccountProvider : NSObject <SKAAccountProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tokenFetchQueue;
@property (nonatomic) double cachedTimestamp;
@property (retain, nonatomic) NSMutableDictionary *cachedJwtTokenMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_authenticationType;
- (long long)_maxReauthCount;
- (long long)_authResetTime;
- (id)_jwtTokenForPrimaryAccountForIdentifier:(id)a0 withError:(id *)a1;
- (void)_markReauthAttempt;
- (id)_primarySystemiCloudAccountWithError:(id *)a0;
- (void)_refreshedJwtTokenForIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_shouldAttemptReauth;
- (id)presenceJwtTokenForPrimaryAccountWithError:(id *)a0;
- (void)refreshCredentialForPrimaryAccountWithCompletion:(id /* block */)a0;
- (void)refreshedPresenceJwtTokenForPrimaryAccountWithCompletion:(id /* block */)a0;
- (void)refreshedStatusJwtTokenForPrimaryAccountWithCompletion:(id /* block */)a0;
- (id)statusJwtTokenForPrimaryAccountWithError:(id *)a0;

@end
