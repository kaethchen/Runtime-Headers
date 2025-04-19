@class NSData, NFSecureElementReaderProxyListener, STSTimer, STSHelperLibrary, STSCASessionStats, STSXPCClientNotificationListener, NFSecureElementManagerSession, NFSession, NSObject, STSHardwareManagerWrapper;
@protocol OS_dispatch_queue, NFSession;

@interface STSReader : NSObject <STSXPCClientNotificationListenerDelegate>

@property (retain, nonatomic) STSXPCClientNotificationListener *stsNotificationListener;
@property (retain, nonatomic) NFSession *handoverSession;
@property (copy, nonatomic) id /* block */ tnepStatusHandler;
@property (copy, nonatomic) id /* block */ sessionStartCompletion;
@property (copy, nonatomic) id /* block */ connectionHandler;
@property (copy, nonatomic) id /* block */ sendRequestCompletion;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) BOOL alternativeCarrierConnected;
@property (retain, nonatomic) STSTimer *responseTimeout;
@property (nonatomic) long long state;
@property (nonatomic) BOOL queuePaused;
@property (retain, nonatomic) NSData *sessionTranscriptBytes;
@property (nonatomic) long long transmissionState;
@property (retain, nonatomic) STSHardwareManagerWrapper *nfHwManager;
@property (retain, nonatomic) STSHelperLibrary *stsHelper;
@property (nonatomic) unsigned long long engagementConfiguration;
@property (retain, nonatomic) STSCASessionStats *caSessionStats;
@property (retain, nonatomic) NSObject<NFSession> *initiatingSession;
@property (retain, nonatomic) NFSecureElementManagerSession *proxyReaderSESession;
@property (retain, nonatomic) NFSecureElementReaderProxyListener *seProxyListener;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)xpcInterrupted;
- (void)xpcInvalidated;
- (void)_activateInvalidationHandler:(id)a0;
- (void)_activateOnConnectCompletion;
- (void)_activateSendRequestCompletion:(id)a0 terminationRequested:(BOOL)a1 error:(id)a2;
- (void)_activateSessionStartCompletion:(id)a0;
- (void)_activateTnepStatusHandler:(id)a0;
- (void)_seProxyCleanup:(id /* block */)a0;
- (id)_translateNfcdXPCHelperError:(id)a0;
- (id)_translateSTSXPCHelperError:(id)a0;
- (id)_translateXPCClientNotificationStatus:(unsigned long long)a0;
- (void)alternativeCarrierConnectedWithStatus:(unsigned long long)a0;
- (void)alternativeCarrierDisconnectedWithStatus:(unsigned long long)a0;
- (void)alternativeCarrierReceived:(id)a0 dataPending:(BOOL)a1;
- (void)executeOnSEProxyWithBlock:(id /* block */)a0;
- (id)initWithType:(unsigned long long)a0 queue:(id)a1;
- (void)invalidateWithCode:(unsigned int)a0;
- (void)invalidateWithCodeSync:(unsigned int)a0;
- (void)notificationClientConnected;
- (void)receiveISO18013DeviceResponse:(id)a0 sessionDataStatus:(id)a1 mDocResponseStatus:(id)a2 error:(id)a3;
- (void)relinquishSEProxy;
- (void)sendDocumentRequest:(id)a0 timeoutInterval:(double)a1 sessionTermination:(BOOL)a2 responseHandler:(id /* block */)a3;
- (void)sessionTranscriptGenerated:(id)a0;
- (id)startWithConfiguration:(id)a0 connectionHandler:(id /* block */)a1 tnepStatusHandler:(id /* block */)a2 invalidationHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (id)startWithHandoverType:(unsigned long long)a0 connectionHandler:(id /* block */)a1 tnepStatusHandler:(id /* block */)a2 invalidationErrorHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)transactionEndedWithIdentifier:(id)a0 error:(id)a1;
- (void)transactionStarted:(unsigned long long)a0;

@end
