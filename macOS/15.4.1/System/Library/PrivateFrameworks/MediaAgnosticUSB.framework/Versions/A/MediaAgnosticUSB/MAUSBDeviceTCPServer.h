@class NSString, NSObject;
@protocol OS_nw_listener, OS_nw_connection, OS_dispatch_queue, MAUSBDeviceTCPServerDelegate;

@interface MAUSBDeviceTCPServer : MAUSBObject {
    id<MAUSBDeviceTCPServerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    NSObject<OS_nw_listener> *_listener;
    NSObject<OS_nw_connection> *_connection;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)cancelConnection;
- (void)connectionStateChanged:(int)a0 error:(id)a1 connection:(id)a2;
- (id)initWithDelegate:(id)a0 queue:(id)a1 name:(id)a2;
- (void)listenerStateChanged:(int)a0 error:(id)a1;
- (void)newConnection:(id)a0;
- (void)readNextMAUSBPacket;
- (void)readPacketPayloadForHeaderLength:(unsigned short)a0 headerData:(id)a1;
- (void)receiveNextPacket:(id)a0;
- (void)sendPacket:(id)a0;
- (void)startWithTextRecord:(id)a0;

@end
