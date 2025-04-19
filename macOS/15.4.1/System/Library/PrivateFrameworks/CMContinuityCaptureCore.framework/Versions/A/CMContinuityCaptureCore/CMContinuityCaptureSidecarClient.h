@class SidecarService, NSString, NSDate, SidecarRequest, CMContinuityCaptureMetricsReporter, NSMutableSet, CMContinuityCaptureTimeSyncClock, NSObject;
@protocol OS_dispatch_queue, ContinuityCaptureTaskDelegate, ContinuityCaptureTransportDevice;

@interface CMContinuityCaptureSidecarClient : CMContinuityCaptureSidecarTransportBase <ContinuityCaptureDeviceClient> {
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic BOOL _observerRegistered;
    long long _preferredTransport;
    unsigned long long _currentSessionID;
    unsigned long long _lastActivationTime;
    NSMutableSet *_activeEntities;
    CMContinuityCaptureTimeSyncClock *_timeSyncClock;
    id<ContinuityCaptureTaskDelegate> _delegate;
    CMContinuityCaptureMetricsReporter *_metricReporter;
    SidecarService *_service;
    SidecarRequest *_activeRequest;
    SidecarRequest *_oldRequest;
    BOOL _teardownInProgress;
    id /* block */ _entitySetupCompletion;
    id /* block */ _overallCompletion;
    id /* block */ _resetCompletion;
    id /* block */ _activationTimeoutBlock;
    id /* block */ _resetTimeoutBlock;
    NSMutableSet *_entityCompletionIdentifiers;
    NSMutableSet *_overallCompletionIdentifiers;
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
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)resetSession:(id /* block */)a0;
- (id)debugInfo;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_resetSession:(id /* block */)a0;
- (void)_teardownSidecarStreams:(id /* block */)a0;
- (void)abortRemoteSession;
- (void)activateEntity:(long long)a0 configuration:(id)a1 option:(unsigned long long)a2 entityCompletion:(id /* block */)a3 overallCompletion:(id /* block */)a4;
- (void)activateSidecarStreamsInitiatedByEntity:(long long)a0 configuration:(id)a1 option:(unsigned long long)a2 entitySetupCompletion:(id /* block */)a3 overallCompletion:(id /* block */)a4;
- (id)createSidecarRequest;
- (void)evaluatePendingActivateCompletion;
- (id)initWithDevice:(id)a0 queue:(id)a1 taskDelegate:(id)a2;
- (void)remoteSessionTerminationForIdentfier:(unsigned long long)a0;
- (void)resetTransportDevice:(id)a0;
- (void)setPreferredTransport:(long long)a0 resetConnection:(BOOL)a1 completion:(id /* block */)a2;
- (void)setupMediaSidecarStreamForIdentifier:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)setupSidebandSidecarStreamForIdentifier:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)setupSidecarStreamsInitiatedByEntity:(long long)a0 configuration:(id)a1 option:(unsigned long long)a2;
- (void)teardownSidecarStreams:(id /* block */)a0;
- (void)terminateEntity:(long long)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;

@end
