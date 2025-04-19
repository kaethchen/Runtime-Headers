@class NSString, NSObject;
@protocol OS_dispatch_source, MAUSBHostTCPClientDelegate, OS_nw_endpoint, OS_dispatch_queue, OS_nw_connection;

@interface MAUSBHostTCPClient : MAUSBObject {
    id<MAUSBHostTCPClientDelegate> _delegate;
    NSObject<OS_nw_endpoint> *_endpoint;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_dispatch_source> *_connectionTimer;
    NSString *_name;
    NSString *_port;
}

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)startConnection;
- (void)connectionTimedOut;
- (void)cancelConnection;
- (void)connectionReady;
- (void)cancelConnectionTimer;
- (void)connectionCancelled;
- (void)connectionFailedWithError:(id)a0;
- (id)getProtocolDefinition;
- (void)initConnection;
- (id)initWithDelegate:(id)a0 queue:(id)a1 endpoint:(id)a2;
- (id)initWithDelegate:(id)a0 queue:(id)a1 name:(id)a2 port:(id)a3;
- (void)receiveNextPacket;
- (void)receivedMessageWithData:(id)a0 error:(id)a1;
- (void)sendPacket:(id)a0;
- (void)startConnectionTimer;

@end
