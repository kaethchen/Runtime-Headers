@class NSString, NSMutableDictionary, NSMutableSet, C2Multipeer, NSObject;
@protocol OS_dispatch_queue;

@interface C2MultipeerConnection : NSObject

@property (weak, nonatomic) C2Multipeer *parent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *peerID;
@property (retain, nonatomic) NSMutableSet *oustandingDiscoveryRequestsByRequestUUID;
@property (retain, nonatomic) NSMutableDictionary *serverContextByRequestUUID;
@property (nonatomic) BOOL isClientConnection;

- (void).cxx_destruct;
- (void)startConnection;
- (void)handleData:(id)a0;
- (void)handleDiscoveryRequest:(id)a0;
- (id)initWithParent:(id)a0 queue:(id)a1 peerID:(id)a2 isClientConnection:(BOOL)a3;
- (void)sendMessageWithData:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopConnection;

@end
