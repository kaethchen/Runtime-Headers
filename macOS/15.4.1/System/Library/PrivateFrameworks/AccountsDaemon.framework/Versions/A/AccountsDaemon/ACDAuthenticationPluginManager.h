@class NSLock, NSMutableDictionary, NSObject, NSMutableSet, ACRateLimiter, ACDQueueDictionary;
@protocol OS_dispatch_queue;

@interface ACDAuthenticationPluginManager : NSObject {
    ACDQueueDictionary *_verificationHandlerQueues;
    ACDQueueDictionary *_renewalHandlerQueues;
    ACDQueueDictionary *_discoveryHandlerQueues;
    ACRateLimiter *_renewalRateLimiter;
    NSMutableSet *_keysForRateExceededBugSent;
    NSLock *_verificationHandlersLock;
    NSLock *_renewalHandlersLock;
    NSLock *_discoveryHandlersLock;
    NSMutableDictionary *_authenticationPluginsByType;
    NSObject<OS_dispatch_queue> *_authenticationPluginQueue;
}

@property (retain) ACRateLimiter *renewalRateLimiter;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isPushSupportedForAccount:(id)a0;
- (id)_sanitizeError:(id)a0;
- (id)_authCapableParentAccountForAccount:(id)a0;
- (id)_authenticationTypeForAccount:(id)a0;
- (id)_descriptionForRenewalResult:(long long)a0;
- (void)_handleDiscoveryCompletionResult:(id)a0 forAccount:(id)a1 discoveryID:(id)a2 accountStore:(id)a3 shouldSave:(BOOL)a4 error:(id)a5;
- (void)_handleRenewalCompletionResult:(long long)a0 forAccount:(id)a1 renewalID:(id)a2 accountStore:(id)a3 error:(id)a4;
- (void)_handleVerificationCompletionForAccount:(id)a0 verifiedAccount:(id)a1 error:(id)a2 store:(id)a3 shouldSave:(BOOL)a4;
- (id)_pluginForAuthenticationType:(id)a0;
- (BOOL)_renewalRequestIsWithinLimitsForAccount:(id)a0 accountStore:(id)a1;
- (id)_unsanitizeOptionsDictionary:(id)a0;
- (void)credentialForAccount:(id)a0 client:(id)a1 store:(id)a2 handler:(id /* block */)a3;
- (void)discoverPropertiesForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)renewCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)renewalCredentialTimeout;
- (void)verifyCredentialsForAccount:(id)a0 accountStore:(id)a1 options:(id)a2 handler:(id /* block */)a3;

@end
