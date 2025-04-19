@class NSXPCConnection;
@protocol IOBluetoothDaemonNSXPCDelegate;

@interface IOBluetoothDaemonNSXPCClient : NSObject

@property (retain) id<IOBluetoothDaemonNSXPCDelegate> delegate;
@property (retain) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)aacpCommandStatusEvent:(unsigned short)a0 reason:(unsigned short)a1 forDevice:(id)a2;
- (void)aacpCustomDataEvent:(unsigned int)a0 withData:(id)a1 forDevice:(id)a2;
- (void)aacpRelayMessageEvent:(id)a0 type:(unsigned char)a1 forDevice:(id)a2 source:(id)a3;
- (void)aacpStreamingStateEvent:(unsigned char)a0 forDevice:(id)a1 accessory:(id)a2;
- (void)switchEvent:(unsigned int)a0;
- (void)captureAccessoryLogs:(id /* block */)a0;
- (void)clearAccessoryCrashLog;
- (void)debugMessage;
- (void)getAccessoryAddressString:(id /* block */)a0;
- (void)sendAACPCustomData:(unsigned int)a0 withData:(id)a1 forDevice:(id)a2;

@end
