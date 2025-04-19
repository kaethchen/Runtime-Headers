@class MRDeviceInfo, MRExternalDeviceTransportConnection;

@interface MRExternalDeviceTransportConnectionHandle : NSObject

@property (readonly, nonatomic) MRExternalDeviceTransportConnection *connection;
@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;

- (id)description;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 deviceInfo:(id)a1;

@end
