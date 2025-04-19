@class NSMutableDictionary, NSString, NSObject, CBScalablePipeManager;
@protocol OS_dispatch_queue;

@interface WPDPipeManager : WPDManager <CBScalablePipeManagerDelegate, NSStreamDelegate> {
    unsigned long long _wpPipeDataSignPostID;
}

@property (weak) NSObject<OS_dispatch_queue> *queue;
@property (retain) CBScalablePipeManager *pipeManager;
@property (retain) NSMutableDictionary *endpointsDict;
@property (retain) NSMutableDictionary *peerPipesDict;
@property (retain) NSMutableDictionary *connectionInitiators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)update;
- (id)initWithServer:(id)a0;
- (void)scalablePipeManager:(id)a0 didRegisterEndpoint:(id)a1 error:(id)a2;
- (void)scalablePipeManager:(id)a0 didUnregisterEndpoint:(id)a1;
- (void)scalablePipeManager:(id)a0 pipeDidConnect:(id)a1;
- (void)scalablePipeManager:(id)a0 pipeDidDisconnect:(id)a1 error:(id)a2;
- (void)channelHasData:(id)a0;
- (void)_signpostBegin;
- (void)_signpostEnd;
- (id)generateStateDumpStrings;
- (void)handleIncomingPipeData:(id)a0 data:(char *)a1 dataSize:(long long)a2;
- (void)invalidatePipeInfo:(id)a0 forPeer:(id)a1;
- (id)pipeInfo:(id)a0 forClient:(id)a1;
- (id)pipeManagerState:(long long)a0;
- (void)receivedAck:(id)a0 data:(char *)a1 dataSize:(long long)a2;
- (void)receivedConnectStatus:(id)a0 data:(char *)a1 dataSize:(long long)a2;
- (void)receivedError:(id)a0 data:(char *)a1 dataSize:(long long)a2;
- (void)receivedPayload:(id)a0 data:(char *)a1 dataSize:(long long)a2;
- (void)receivedVersionInfo:(id)a0 data:(char *)a1 dataSize:(long long)a2;
- (void)registerEndpoint:(id)a0 requireAck:(BOOL)a1 requireEncryption:(BOOL)a2 forClient:(id)a3;
- (void)sendAck:(id)a0 errorCode:(unsigned char)a1;
- (void)sendChannelData:(id)a0;
- (void)sendConnectStatus:(id)a0 connectStatus:(unsigned char)a1;
- (void)sendData:(id)a0 forPeer:(id)a1 forClient:(id)a2;
- (void)sendErrorResponse:(id)a0 errorCode:(unsigned char)a1;
- (void)sendRemainingData:(id)a0 wpClient:(id)a1;
- (BOOL)sendVersionInfo:(id)a0;
- (void)setConnectionInitiator:(BOOL)a0 forPeer:(id)a1 forClient:(id)a2;
- (void)setPipeClientConnectionStatus:(BOOL)a0 forPeer:(id)a1 forClient:(id)a2;
- (id)streamEvent:(unsigned long long)a0;
- (void)unregisterEndpoint:(id)a0 forClient:(id)a1;
- (long long)writeDataToPipe:(id)a0 pipe:(id)a1;

@end
