@class NSMutableData, NSObject;
@protocol OS_dispatch_queue;

@interface HIDRemoteDeviceAACPServer : HIDRemoteDeviceServer {
    struct BTSessionImpl { } *_session;
    struct BTAccessoryManagerImpl { } *_manager;
    NSMutableData *_decodeBuff;
    HIDRemoteDeviceAACPServer *_me;
}

@property (retain) NSObject<OS_dispatch_queue> *btQueue;

- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (id)initWithQueue:(id)a0;
- (void)removeBTDevice:(struct BTDeviceImpl { } *)a0;
- (void)btSessionCreate;
- (void)addBTDevice:(struct BTDeviceImpl { } *)a0;
- (void)btAccessoryEventHandler:(struct BTDeviceImpl { } *)a0 event:(int)a1 state:(int)a2;
- (void)btDeviceMessageHandler:(struct BTDeviceImpl { } *)a0 type:(int)a1 data:(char *)a2 size:(unsigned long long)a3;
- (void)btServiceEventHandler:(struct BTDeviceImpl { } *)a0 services:(unsigned int)a1 eventType:(int)a2 event:(unsigned int)a3 result:(int)a4;
- (void)btSessionEventHandler:(struct BTSessionImpl { } *)a0 event:(int)a1 result:(int)a2;
- (void)btSessionInit:(struct BTSessionImpl { } *)a0;
- (BOOL)createRemoteDevice:(id)a0 deviceID:(unsigned long long)a1 property:(id)a2;
- (int)remoteDeviceGetReport:(id)a0 type:(long long)a1 reportID:(unsigned char)a2 report:(id)a3;
- (int)remoteDeviceSetReport:(id)a0 type:(long long)a1 reportID:(unsigned char)a2 report:(id)a3;
- (void)removeAllBTDevices;
- (int)sendMessageBTDevice:(struct BTDeviceImpl { } *)a0 data:(char *)a1 size:(unsigned long long)a2 transportVersion:(unsigned char)a3 side:(unsigned char)a4;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)stateHandler:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (unsigned long long)syncRemoteTimestamp:(unsigned long long)a0 forEndpoint:(id)a1;

@end
