@class NSMutableDictionary, NSArray, NSString, IMDService, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IMDRelayServiceReachabilityController : NSObject <IMDRelayPushHandlerListener>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *cleanupTimer;
@property (retain, nonatomic) NSMutableDictionary *pendingRequests;
@property (retain, nonatomic) NSMutableDictionary *signaturesToRequestIDs;
@property (readonly, nonatomic) IMDService *service;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)calculateReachabilityWithRequest:(id)a0 responseHandler:(id)a1;
- (void)_calculateReachabilityWithRequest:(id)a0 responseHandler:(id)a1;
- (BOOL)_dedupeRequestIfNeeded:(id)a0 responseHandler:(id)a1;
- (id)_expiredRequests;
- (void)_handleReachabilityResult:(id)a0 messageID:(id)a1 fromToken:(id)a2;
- (void)_startCleanupTimerIfNeeded;
- (void)_stopCleanupTimerIfNeeded;
- (void)_timeoutPendingRequest:(id)a0;
- (void)_timeoutPendingRequests;
- (void)handler:(id)a0 incomingReachabilityRequest:(id)a1 fromToken:(id)a2 fromIdentifier:(id)a3 toIdentifier:(id)a4 messageGUID:(id)a5;
- (void)handler:(id)a0 incomingReachabilityResponse:(id)a1 fromToken:(id)a2 messageGUID:(id)a3;

@end
