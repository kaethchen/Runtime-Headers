@class NSMutableDictionary, NSMutableArray;
@protocol AVB17221AECPClient;

@interface AVB17221AECPInterface : AVB1722ControlInterface {
    NSMutableDictionary *_commandHandlers;
    NSMutableDictionary *_responseHandlers;
    unsigned short _nextSequenceID;
    BOOL _monitorMode;
    id<AVB17221AECPClient> _monitorModeDelegate;
    NSMutableArray *_pendingResponses;
}

+ (id)AECPInterfaceWithInterfaceNamed:(id)a0;
+ (id)IOClassName;
+ (BOOL)removeFromInterfaceNamed:(id)a0 error:(id *)a1;
+ (id)AECPInterfaceWithInterface:(id)a0;
+ (BOOL)addToInterfaceNamed:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0;
- (void)serviceTerminated;
- (void)_enableMonitorModeWithDelegate:(id)a0;
- (void)_disableMonitorMode;
- (void)aaCommandTimeoutHandler:(id)a0;
- (void)aemCommandTimeoutHandler:(id)a0;
- (void)avcCommandTimeoutHandler:(id)a0;
- (void)receivedControlFrameWithInfo:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned short x5; unsigned long long x6; unsigned char x7[6]; unsigned char x8[6]; } *)a0 andPayload:(char *)a1 ofLength:(unsigned long long)a2;
- (void)removeCommandHandlerForEntityID:(unsigned long long)a0;
- (void)removeResponseHandlerForControllerEntityID:(unsigned long long)a0;
- (void)scheduleAATimeoutWithPendingResponse:(id)a0;
- (void)scheduleAEMTimeoutWithPendingResponse:(id)a0;
- (void)scheduleAVCTimeoutWithPendingResponse:(id)a0;
- (void)scheduleVendorUniqueWithTimeout:(long long)a0 WithPendingResponse:(id)a1;
- (BOOL)sendAAMessage:(id)a0 toMACAddress:(id)a1 isResponse:(BOOL)a2 error:(id *)a3;
- (BOOL)sendAASyncCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)sendAEMCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)sendAEMMessage:(id)a0 toMACAddress:(id)a1 isResponse:(BOOL)a2 error:(id *)a3;
- (BOOL)sendAEMResponse:(id)a0 toMACAddress:(id)a1 error:(id *)a2;
- (BOOL)sendAEMSyncCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)sendAddressAccessCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)sendAddressAccessResponse:(id)a0 toMACAddress:(id)a1 error:(id *)a2;
- (BOOL)sendCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)sendLegacyAVCCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)sendLegacyAVCMessage:(id)a0 toMACAddress:(id)a1 isResponse:(BOOL)a2 error:(id *)a3;
- (BOOL)sendLegacyAVCResponse:(id)a0 toMACAddress:(id)a1 error:(id *)a2;
- (BOOL)sendLegacyAVCSyncCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)sendResponse:(id)a0 toMACAddress:(id)a1 error:(id *)a2;
- (BOOL)sendVendorUniqueCommand:(id)a0 toMACAddress:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)sendVendorUniqueCommand:(id)a0 toMACAddress:(id)a1 expectResponseWithinTimeout:(long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)sendVendorUniqueMessage:(id)a0 toMACAddress:(id)a1 isResponse:(BOOL)a2 error:(id *)a3;
- (BOOL)sendVendorUniqueResponse:(id)a0 toMACAddress:(id)a1 error:(id *)a2;
- (BOOL)setCommandHandler:(id)a0 forEntityID:(unsigned long long)a1;
- (BOOL)setResponseHandler:(id)a0 forControllerEntityID:(unsigned long long)a1;
- (void)vendorCommandTimeout:(long long)a0 handler:(id)a1;

@end
