@class NSNumber, MAUSBRouteString;

@interface MAUSBHostUSBDeviceInfo : MAUSBObject

@property (readonly) MAUSBRouteString *routeString;
@property (readonly) unsigned char speed;
@property (readonly) NSNumber *hubDeviceHandle;
@property (readonly) NSNumber *parentHighSpeedHubDeviceHandle;
@property (readonly) NSNumber *parentHighSpeedHubPort;
@property (readonly) BOOL mtt;
@property (readonly) NSNumber *laneSpeedExponent;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithRouteString:(id)a0 speed:(unsigned char)a1 hubDeviceHandle:(id)a2 parentHighSpeedHubDeviceHandle:(id)a3 parentHighSpeedHubPort:(id)a4 mtt:(BOOL)a5 laneSpeedExponent:(id)a6;

@end
