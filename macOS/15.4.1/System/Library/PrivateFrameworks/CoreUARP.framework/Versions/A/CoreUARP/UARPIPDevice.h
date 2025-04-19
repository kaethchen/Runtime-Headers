@class NSObject;
@protocol OS_os_log, OS_dispatch_source, OS_dispatch_queue, UARPIPDeviceDelegate;

@interface UARPIPDevice : NSObject {
    id<UARPIPDeviceDelegate> _delegate;
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_recvSource;
    struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *_socketAddress;
    int _socketFileDescriptor;
    unsigned char _socketAddressFamily;
    unsigned int _socketAddressLength;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)connect;
- (BOOL)sendData:(id)a0;
- (BOOL)initSocketWithIPv6Address:(id)a0 port:(unsigned short)a1;
- (BOOL)initSocketWithIPv4Address:(id)a0 port:(unsigned short)a1;
- (BOOL)initRecvSource;
- (id)initWithIPAddress:(id)a0 port:(unsigned short)a1 delegate:(id)a2;
- (id)initWithIPAddress:(id)a0 port:(unsigned short)a1 family:(unsigned char)a2 delegate:(id)a3;
- (BOOL)recvUARPMsg;

@end
