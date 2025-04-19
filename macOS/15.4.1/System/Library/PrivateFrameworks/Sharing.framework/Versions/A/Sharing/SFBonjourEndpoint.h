@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_nw_connection, OS_nw_endpoint;

@interface SFBonjourEndpoint : NSObject

@property BOOL initiatedConnection;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ didConnectHandler;
@property (copy, nonatomic) id /* block */ didDisconnectHandler;
@property (copy, nonatomic) id /* block */ didReceiveDataHandler;
@property (readonly) NSObject<OS_nw_endpoint> *remoteEndpoint;
@property (readonly) NSObject<OS_nw_connection> *connection;
@property (readonly) BOOL isAdvToBrowserConnection;
@property BOOL isConnected;
@property (retain, nonatomic) NSString *localUniqueIDString;
@property (retain, nonatomic) NSString *remoteUniqueIDString;
@property (retain, nonatomic) NSMutableSet *remoteAdvDataSet;

+ (id)createConnectionParameters;

- (void).cxx_destruct;
- (void)cancel;
- (id)_getServerRemoteUUIDFromConnectionMetadata:(id)a0 isAdvToBrowserConnection:(BOOL)a1;
- (void)_handleUUIDHeaders;
- (void)_startConnection;
- (id)initWithConnection:(id)a0 isAdvToBrowserConnection:(BOOL)a1 localUniqueID:(id)a2 withQueue:(id)a3;
- (void)receiveNextMessage;
- (void)sendDataMessage:(id)a0 completion:(id /* block */)a1;

@end
