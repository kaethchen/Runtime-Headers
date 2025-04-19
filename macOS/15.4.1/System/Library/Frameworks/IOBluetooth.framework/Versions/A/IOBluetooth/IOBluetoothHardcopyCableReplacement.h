@class NSString, IOBluetoothL2CAPChannel, IOBluetoothDevice;

@interface IOBluetoothHardcopyCableReplacement : HardcopyCableReplacement <IOBluetoothL2CAPChannelDelegate> {
    unsigned short commandChannel;
    unsigned short dataChannel;
    BOOL dataChannelIsOpen;
    BOOL commandChannelIsOpen;
    char *mBufferForOutgoingData;
    unsigned int mReadPointerInBuffer;
    unsigned int mWritePointerInBuffer;
}

@property (retain, nonatomic) IOBluetoothDevice *printer;
@property (copy) NSString *printer1284ID;
@property (retain, nonatomic) IOBluetoothL2CAPChannel *command;
@property (retain, nonatomic) IOBluetoothL2CAPChannel *data;
@property (readonly) BOOL isConnected;

+ (int)getControlChannelL2CAPPSM:(unsigned short *)a0 from:(id)a1;
+ (id)deviceHCRPServiceRecord:(id)a0;
+ (int)getDataChannelL2CAPPSM:(unsigned short *)a0 from:(id)a1;
+ (id)getPrinter1284ID:(id)a0;
+ (id)getRawPrinter1284ID:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)connectionComplete:(id)a0 status:(int)a1;
- (void)_connectionComplete:(id)a0 status:(int)a1;
- (void)_l2capChannelClosed:(id)a0;
- (void)_l2capChannelData:(id)a0 data:(void *)a1 length:(unsigned long long)a2;
- (void)_l2capChannelOpenComplete:(id)a0 status:(int)a1;
- (void)_l2capChannelWriteComplete:(id)a0 refcon:(void *)a1 status:(int)a2;
- (int)closeTransportConnection;
- (id)deviceHCRPServiceRecord;
- (void)dispatchToMainThreadIfNeeded:(id /* block */)a0;
- (void)l2capChannelClosed:(id)a0;
- (void)l2capChannelData:(id)a0 data:(void *)a1 length:(unsigned long long)a2;
- (void)l2capChannelOpenComplete:(id)a0 status:(int)a1;
- (void)l2capChannelWriteComplete:(id)a0 refcon:(void *)a1 status:(int)a2;
- (int)openTransportConnection;
- (void)printerDisconnected:(id)a0 forDevice:(id)a1;
- (int)reallocBufferForOutgoingDataForMore:(void *)a0 length:(unsigned int)a1;
- (void)sdpQueryComplete:(id)a0 status:(int)a1;
- (int)startOpenForL2CAPTransports:(id)a0;
- (unsigned short)transportConnectionMaximumTransferUnit;
- (int)transportSendPDU:(char *)a0;
- (int)writeOnTransport:(void *)a0 length:(unsigned int)a1 blocking:(BOOL)a2 numberOfWrittenBytes:(unsigned long long *)a3;
- (int)writeOnTransportBlocking:(void *)a0 length:(unsigned int)a1 numberOfWrittenBytes:(unsigned long long *)a2;
- (int)writeOnTransportNonBlocking:(void *)a0 length:(unsigned int)a1 numberOfWrittenBytes:(unsigned long long *)a2;

@end
