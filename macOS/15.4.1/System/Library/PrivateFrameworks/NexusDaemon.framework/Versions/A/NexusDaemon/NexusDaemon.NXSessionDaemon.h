@class NSString;

@interface NexusDaemon.NXSessionDaemon : NSObject <IDSSessionDelegate> {
    void /* unknown type, empty encoding */ _clients;
    void /* unknown type, empty encoding */ connectionEndedHandler;
    void /* unknown type, empty encoding */ _daemon;
    void /* unknown type, empty encoding */ _dispatchQueue;
    void /* unknown type, empty encoding */ endpoint;
    void /* unknown type, empty encoding */ _idsServiceID;
    void /* unknown type, empty encoding */ _invalidateCoreCalled;
    void /* unknown type, empty encoding */ invalidationHandler;
    void /* unknown type, empty encoding */ _messageContext;
    void /* unknown type, empty encoding */ _operations;
    void /* unknown type, empty encoding */ serverEventHandler;
    void /* unknown type, empty encoding */ verboseLogging;
    void /* unknown type, empty encoding */ _sessionState;
    void /* unknown type, empty encoding */ _sessionStepError;
    void /* unknown type, empty encoding */ _idsAccount;
    void /* unknown type, empty encoding */ _idsInvitationState;
    void /* unknown type, empty encoding */ _idsSessionStarted;
    void /* unknown type, empty encoding */ _idsService;
    void /* unknown type, empty encoding */ _idsSession;
    void /* unknown type, empty encoding */ _nanDataSession;
    void /* unknown type, empty encoding */ _nanDataSessionTimer;
    void /* unknown type, empty encoding */ _nanDiscoverTimer;
    void /* unknown type, empty encoding */ _nanEndpointFound;
    void /* unknown type, empty encoding */ _nanPeerAddressString;
    void /* unknown type, empty encoding */ _nanSubscriber;
    void /* unknown type, empty encoding */ _needsNexusBluetoothAdvertiser;
    void /* unknown type, empty encoding */ _networkIsClient;
    void /* unknown type, empty encoding */ _networkConnection;
    void /* unknown type, empty encoding */ _networkReceiving;
    void /* unknown type, empty encoding */ _messageUpperID;
    void /* unknown type, empty encoding */ _outstandingOperationItems;
    void /* unknown type, empty encoding */ _outstandingRequests;
    void /* unknown type, empty encoding */ _sendQueue;
    void /* unknown type, empty encoding */ _pairingCompleted;
    void /* unknown type, empty encoding */ _pairingReported;
    void /* unknown type, empty encoding */ _pairingSession;
    void /* unknown type, empty encoding */ _pairingStartTicks;
    void /* unknown type, empty encoding */ _securityAuthTagLength;
    void /* unknown type, empty encoding */ _securityStream;
}

@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)sessionStarted:(id)a0;
- (void)session:(id)a0 receivedInvitationAcceptFromID:(id)a1;
- (void)session:(id)a0 receivedInvitationCancelFromID:(id)a1;
- (void)session:(id)a0 receivedInvitationDeclineFromID:(id)a1;
- (void)sessionEnded:(id)a0 withReason:(unsigned int)a1 error:(id)a2;

@end
