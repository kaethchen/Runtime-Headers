@class CBUUID, CBClassicPeer, NSString, NSPort, CBL2CAPChannel, NSObject, IOBluetoothDevice;
@protocol IOBluetoothL2CAPChannelDelegate;

@interface IOBluetoothL2CAPChannel : IOBluetoothObject <IOBluetoothCoreBluetoothCoordinatorDelegate, NSStreamDelegate, NSPortDelegate> {
    NSPort *mDataAvailablePort;
    struct _IODataQueueMemory { unsigned int x0; unsigned int x1; unsigned int x2; struct _IODataQueueEntry { unsigned int x0; unsigned char x1[4]; } x3[1]; } *mIncomingDataQueue;
    BOOL mIncomingChannel;
    id mL2CAPChannelConnectionHandler;
    void /* function */ *mIncomingDataListener;
    void *mIncomingDataListenerRefCon;
    void /* function */ *mEventDataListener;
    void *mEventDataListenerRefCon;
    unsigned short mRemoteChannelID;
    BOOL mIsClosed;
    id _mReserved;
}

@property (retain, nonatomic) CBClassicPeer *classicPeer;
@property (retain, nonatomic) CBL2CAPChannel *cbChannel;
@property (weak, nonatomic) NSObject<IOBluetoothL2CAPChannelDelegate> *channelDelegate;
@property (nonatomic) BOOL isOpeningL2CAP;
@property (retain) IOBluetoothDevice *device;
@property unsigned short PSM;
@property (retain) CBUUID *serviceUUID;
@property unsigned long long objectID;
@property (readonly) unsigned short outgoingMTU;
@property (readonly) unsigned short incomingMTU;
@property (readonly) unsigned short localChannelID;
@property (readonly) unsigned short remoteChannelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registerForChannelOpenNotifications:(id)a0 selector:(SEL)a1 withPSM:(unsigned short)a2 direction:(int)a3;
+ (id)channelFromCBL2CAPChannel:(id)a0;
+ (id)registerForChannelOpenNotifications:(id)a0 selector:(SEL)a1;
+ (id)withL2CAPChannelRef:(struct OpaqueIOBluetoothObjectRef { } *)a0;
+ (id)withObjectID:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (int)setDelegate:(id)a0;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)connectionComplete:(id)a0 status:(int)a1;
- (int)closeChannel;
- (id)_initWithDevice:(id)a0 andClassicPeer:(id)a1 PSM:(unsigned short)a2 withServiceUUID:(id)a3;
- (BOOL)channelStateIsOpen;
- (int)configureChannel:(id)a0;
- (int)configureChannelID:(unsigned short)a0 local:(BOOL)a1;
- (int)configureMTU:(unsigned short)a0 maxIncomingMTU:(unsigned short)a1;
- (id)getDevice;
- (unsigned short)getIncomingMTU;
- (struct OpaqueIOBluetoothObjectRef { } *)getL2CAPChannelRef;
- (unsigned short)getLocalChannelID;
- (unsigned long long)getObjectID;
- (unsigned short)getOutgoingMTU;
- (unsigned short)getPSM;
- (unsigned short)getRemoteChannelID;
- (id)initWithCBL2CAPChannel:(id)a0;
- (id)initWithDevice:(id)a0 andClassicPeer:(id)a1 PSM:(unsigned short)a2;
- (id)initWithIOService:(unsigned int)a0;
- (BOOL)isIncoming;
- (void)peerConnected:(id)a0 error:(long long)a1;
- (void)peerDisconnected:(id)a0 withError:(long long)a1;
- (void)peerL2CAPChannelConnected:(id)a0 error:(long long)a1;
- (void)peerL2CAPChannelDisconnected:(id)a0 error:(long long)a1;
- (id)registerForChannelCloseNotification:(id)a0 selector:(SEL)a1;
- (int)registerIncomingDataListener:(void /* function */ *)a0 refCon:(void *)a1;
- (int)registerIncomingEventListener:(void /* function */ *)a0 refCon:(void *)a1;
- (void)removeL2CAPChannelforDevice;
- (int)requestRemoteMTU:(unsigned short)a0;
- (int)setDelegate:(id)a0 withConfiguration:(id)a1;
- (void)setupL2CAPChannelForDevice;
- (int)startStopFlow:(BOOL)a0;
- (void)updateFromNewIOService:(unsigned int)a0;
- (int)waitforChanneOpen;
- (int)write:(void *)a0 length:(unsigned short)a1;
- (int)writeAsync:(void *)a0 length:(unsigned short)a1 refcon:(void *)a2;
- (int)writeAsyncTrap:(void *)a0 length:(unsigned short)a1 refcon:(void *)a2;
- (int)writeSync:(void *)a0 length:(unsigned short)a1;

@end
