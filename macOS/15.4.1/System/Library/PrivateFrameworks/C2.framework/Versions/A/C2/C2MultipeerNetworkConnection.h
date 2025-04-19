@class NSMutableData, NSObject;
@protocol OS_nw_connection;

@interface C2MultipeerNetworkConnection : C2MultipeerConnection

@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (nonatomic) int connectionState;
@property (retain, nonatomic) NSMutableData *receiveLengthBuffer;
@property (retain, nonatomic) NSMutableData *receiveMessageBuffer;

- (void).cxx_destruct;
- (void)startConnection;
- (void)receiveNextMessage;
- (id)initWithParent:(id)a0 queue:(id)a1 connection:(id)a2 peerID:(id)a3 isClientConnection:(BOOL)a4;
- (void)sendMessageWithData:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopConnection;

@end
