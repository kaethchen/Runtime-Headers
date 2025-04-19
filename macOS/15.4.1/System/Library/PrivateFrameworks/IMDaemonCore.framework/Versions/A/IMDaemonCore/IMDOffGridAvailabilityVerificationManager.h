@class SKStatusSubscriptionService, NSString, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface IMDOffGridAvailabilityVerificationManager : NSObject <SKStatusSubscriptionServiceDelegate>

@property (retain, nonatomic) SKStatusSubscriptionService *offGridAvailabilitySubscriptionService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (retain, nonatomic) NSCache *subscriptionValidationTokenByHandleIDCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)subscriptionInvitationReceived:(id)a0;
- (void)subscriptionReceivedStatusUpdate:(id)a0;
- (void)subscriptionServiceDaemonDisconnected:(id)a0;
- (void)subscriptionStateChanged:(id)a0;
- (id)cachedAvailabilityTokensForHandleID:(id)a0;
- (void)populateCacheForHandleID:(id)a0;
- (void)verifyOffGridSubscriptionMatchesSubscriptionValidationToken:(id)a0 encryptionValidationToken:(id)a1 receivedByHandleID:(id)a2 fromHandleID:(id)a3 messageDate:(id)a4;

@end
