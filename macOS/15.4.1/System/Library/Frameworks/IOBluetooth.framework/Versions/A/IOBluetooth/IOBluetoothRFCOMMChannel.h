@class CBUUID, NSString, IOBluetoothL2CAPChannel, IOBluetoothDevice, CBRFCOMMChannel, NSPort, NSObject, CBClassicPeer;
@protocol IOBluetoothRFCOMMChannelDelegate;

@interface IOBluetoothRFCOMMChannel : IOBluetoothObject <NSPortDelegate, NSStreamDelegate> {
    BOOL mChannelIsOpen;
    unsigned short mMTU;
    BOOL mIsIncoming;
    IOBluetoothDevice *mDevice;
    IOBluetoothL2CAPChannel *mL2Channel;
    NSPort *mDataAvailablePort;
    struct _IODataQueueMemory { unsigned int x0; unsigned int x1; unsigned int x2; struct _IODataQueueEntry { unsigned int x0; unsigned char x1[4]; } x3[1]; } *mIncomingDataQueue;
    id delegate;
    id mIncomingDataListener;
    void *mIncomingDataListenerRefCon;
    id mEventDataListener;
    void *mEventDataListenerRefCon;
    unsigned long long mObjectID;
    unsigned char mChannelID;
    void *_mReserved;
}

@property (nonatomic) unsigned char channelID;
@property (retain, nonatomic) CBUUID *serviceUUID;
@property (retain, nonatomic) CBClassicPeer *classicPeer;
@property (retain, nonatomic) CBRFCOMMChannel *rfcommchannel;
@property (retain, nonatomic) IOBluetoothDevice *device;
@property (weak, nonatomic) NSObject<IOBluetoothRFCOMMChannelDelegate> *channelDelegate;
@property (nonatomic) BOOL isTransmissionPaused;
@property BOOL isOpeningRFCOMM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)channelFromCBRFCOMMChannel:(id)a0;
+ (id)registerForChannelOpenNotifications:(id)a0 selector:(SEL)a1;
+ (id)registerForChannelOpenNotifications:(id)a0 selector:(SEL)a1 withChannelID:(unsigned char)a2 direction:(int)a3;
+ (id)withObjectID:(unsigned long long)a0;
+ (id)withRFCOMMChannelRef:(struct OpaqueIOBluetoothObjectRef { } *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (int)setDelegate:(id)a0;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (BOOL)isOpen;
- (int)closeChannel;
- (id)_initWithDevice:(id)a0 andClassicPeer:(id)a1 channelID:(unsigned char)a2 withServiceUUID:(id)a3 delegate:(id)a4;
- (BOOL)channelStateIsOpen;
- (unsigned char)getChannelID;
- (id)getDevice;
- (unsigned short)getMTU;
- (unsigned long long)getObjectID;
- (struct OpaqueIOBluetoothObjectRef { } *)getRFCOMMChannelRef;
- (id)initWithCBRFCOMMChannel:(id)a0 delegate:(id)a1;
- (id)initWithDevice:(id)a0 andClassicPeer:(id)a1 channelID:(unsigned char)a2 delegate:(id)a3;
- (BOOL)isIncoming;
- (void)peerConnected:(id)a0 error:(long long)a1;
- (void)peerDisconnected:(id)a0 withError:(long long)a1;
- (void)peerRFCOMMChannelConnected:(id)a0 error:(long long)a1;
- (void)peerRFCOMMChannelDisconnected:(id)a0 error:(long long)a1;
- (id)registerForChannelCloseNotification:(id)a0 selector:(SEL)a1;
- (void)removeRFCOMMChannelforDevice;
- (int)sendRemoteLineStatus:(int)a0;
- (int)setSerialParameters:(unsigned int)a0 dataBits:(unsigned char)a1 parity:(int)a2 stopBits:(unsigned char)a3;
- (void)setupRFCOMMChannelForDevice;
- (int)waitforChanneOpen;
- (int)write:(void *)a0 length:(unsigned short)a1 sleep:(BOOL)a2;
- (int)writeAsync:(void *)a0 length:(unsigned short)a1 refcon:(void *)a2;
- (int)writeSimple:(void *)a0 length:(unsigned short)a1 sleep:(BOOL)a2 bytesSent:(unsigned int *)a3;
- (int)writeSync:(void *)a0 length:(unsigned short)a1;

@end
