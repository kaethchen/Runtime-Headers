@class NSMutableDictionary, NSMutableArray;

@interface HIDRemoteEndpoint : NSObject {
    NSMutableDictionary *_devices;
    NSMutableArray *_prevDeviceLog;
}

@property unsigned long long endpointID;
@property unsigned char primarySide;

- (void).cxx_destruct;
- (id)initWithID:(unsigned long long)a0;
- (void)addDevice:(id)a0;
- (void)removeDevice:(id)a0;
- (void)removeAllDevices;
- (void)removeDeviceID:(unsigned long long)a0;
- (id)copyState;
- (id)getDevice:(unsigned long long)a0;

@end
