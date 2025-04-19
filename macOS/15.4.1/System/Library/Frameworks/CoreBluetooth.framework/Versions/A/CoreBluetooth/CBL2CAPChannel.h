@class CBUUID, NSOutputStream, CBManager, NSMutableArray, NSInputStream, CBPeer;

@interface CBL2CAPChannel : NSObject {
    NSMutableArray *incomingPackets;
    id /* block */ pendingCompletionHandler;
    unsigned short maxQueuePayloadSize;
}

@property (retain, nonatomic) CBUUID *serviceUUID;
@property (nonatomic) BOOL isIncoming;
@property (nonatomic) BOOL isPacketBased;
@property unsigned short cid;
@property (readonly, nonatomic) int socketFD;
@property (weak, nonatomic) CBManager *manager;
@property unsigned short outgoingMTU;
@property (readonly, nonatomic) CBPeer *peer;
@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly, nonatomic) unsigned short PSM;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)readPacketsWithCompletionHandler:(id /* block */)a0;
- (void)handleChannelClosed:(id)a0;
- (void)handleDataReceived:(id)a0;
- (id)initWithPeer:(id)a0 manager:(id)a1 info:(id)a2;
- (void)managePendingData;
- (void)sendData:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)sendMsg:(int)a0 args:(id)a1 withReply:(id /* block */)a2;

@end
