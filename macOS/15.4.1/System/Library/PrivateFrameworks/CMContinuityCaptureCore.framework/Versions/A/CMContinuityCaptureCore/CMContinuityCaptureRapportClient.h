@class NSDate, NSString, CMContinuityCaptureTransportRapportDevice, NSArray, CMContinuityCaptureMetricsReporter, RPRemoteDisplaySession, CMContinuityCaptureTimeSyncClock, NSMutableSet, NSObject, RPStreamServer;
@protocol OS_dispatch_group, ContinuityCaptureTransportDevice, ContinuityCaptureTaskDelegate, OS_dispatch_queue;

@interface CMContinuityCaptureRapportClient : CMContinuityCaptureRapportTransportBase <ContinuityCaptureDeviceClient> {
    NSObject<OS_dispatch_queue> *_queue;
    long long _preferredTransport;
    unsigned long long _currentSessionID;
    _Atomic unsigned long long _lastActivationTime;
    NSMutableSet *_activeEntities;
    CMContinuityCaptureTimeSyncClock *_timeSyncClock;
    id<ContinuityCaptureTaskDelegate> _delegate;
    CMContinuityCaptureMetricsReporter *_metricReporter;
    RPRemoteDisplaySession *_rpDisplaySession;
    RPStreamServer *_rpStreamServer;
    CMContinuityCaptureTransportRapportDevice *_device;
    id /* block */ _pendingDisplaySetupCompletionBlock;
    id /* block */ _pendingEntityActivationCompletionBlock;
    id /* block */ _pendingOverallActivationCompletionBlock;
    NSObject<OS_dispatch_group> *_streamActivationGroup;
    NSObject<OS_dispatch_group> *_pendingTerminateCompleteGroup;
    id /* block */ _terminationCompletionBlock;
    NSObject<OS_dispatch_group> *_sessionInvalidationGroup;
    NSString *_peerAddress;
    NSMutableSet *_pendingActivationIdentifiers;
    NSMutableSet *_pendingTerminationRPIdentifiers;
    NSArray *_inActiveEntitiesForConnectionChange;
    NSMutableSet *_pendingEntityActivationIdentifiers;
    NSDate *_sessionActivationStartTime;
    BOOL _sessionInvalidated;
    BOOL _waitForRemoteTermination;
    id /* block */ _streamActivateTimeoutBlock;
}

@property (readonly) long long preferredTransport;
@property (readonly) unsigned long long currentSessionID;
@property (readonly, retain) id<ContinuityCaptureTransportDevice> device;
@property (readonly, retain) CMContinuityCaptureMetricsReporter *metricReporter;
@property (readonly) unsigned long long lastActivationTime;
@property (readonly, retain) NSDate *sessionActivationStartTime;
@property (readonly, weak) id<ContinuityCaptureTaskDelegate> delegate;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, retain) CMContinuityCaptureTimeSyncClock *timeSyncClock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)resetSession:(id /* block */)a0;
- (id)debugInfo;
- (void)_completePendingTermination;
- (void)_streamActivationCompletion:(long long)a0 error:(id)a1;
- (void)abortRemoteSession;
- (void)activateEntity:(long long)a0 configuration:(id)a1 option:(unsigned long long)a2 entityCompletion:(id /* block */)a3 overallCompletion:(id /* block */)a4;
- (void)completePendingActivationWithError:(id)a0;
- (id)infoToRelayAtSessionStart:(id)a0;
- (id)initWithDevice:(id)a0 queue:(id)a1 taskDelegate:(id)a2;
- (void)invalidateCurrentSession:(id /* block */)a0;
- (void)remoteSessionTerminationForIdentfier:(unsigned long long)a0;
- (void)resetTransportDevice:(id)a0;
- (void)setPreferredTransport:(long long)a0 resetConnection:(BOOL)a1 completion:(id /* block */)a2;
- (void)setupRPDisplaySessionForConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)setupStreamServerForConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)streamSessionInfoToRelayAtSessionStart;
- (void)terminateEntity:(long long)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;

@end
