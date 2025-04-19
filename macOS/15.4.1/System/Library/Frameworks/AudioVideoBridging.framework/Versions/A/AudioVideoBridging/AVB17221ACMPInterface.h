@class NSMutableArray, AVBMACAddress, NSMutableDictionary;
@protocol AVB17221ACMPClient;

@interface AVB17221ACMPInterface : AVB1722ControlInterface {
    NSMutableDictionary *_commandHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _commandHandlersLock;
    unsigned short _nextSequenceID;
    BOOL _monitorMode;
    id<AVB17221ACMPClient> _monitorModeDelegate;
    NSMutableArray *_pendingResponses;
}

@property (readonly, copy) AVBMACAddress *multicastDestinationAddress;

+ (id)ACMPInterfaceWithInterfaceNamed:(id)a0;
+ (id)IOClassName;
+ (BOOL)removeFromInterfaceNamed:(id)a0 error:(id *)a1;
+ (id)ACMPInterfaceWithInterface:(id)a0;
+ (BOOL)addToInterfaceNamed:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0;
- (void)serviceTerminated;
- (void)_enableMonitorModeWithDelegate:(id)a0;
- (void)_disableMonitorMode;
- (void)receivedControlFrameWithInfo:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned short x5; unsigned long long x6; unsigned char x7[6]; unsigned char x8[6]; } *)a0 andPayload:(char *)a1 ofLength:(unsigned long long)a2;
- (void)removeHandlerForEntityID:(unsigned long long)a0;
- (BOOL)sendACMPCommandMessage:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)sendACMPMessage:(id)a0 error:(id *)a1;
- (BOOL)sendACMPResponseMessage:(id)a0 error:(id *)a1;
- (BOOL)sendACMPSyncCommandMessage:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)setHandler:(id)a0 forEntityID:(unsigned long long)a1;

@end
