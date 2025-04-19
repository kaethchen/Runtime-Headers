@class NSString;

@interface WBDeviceParameters : NSObject

@property (copy, nonatomic) NSString *creationDeviceIdentifier;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *deviceTypeIdentifier;
@property (nonatomic, getter=isRemoteDevice) BOOL remoteDevice;
@property (copy, nonatomic) NSString *title;

+ (id)localDeviceWithTitle:(id)a0 creationDeviceIdentifier:(id)a1 deviceIdentifier:(id)a2;
+ (id)remoteDeviceWithTitle:(id)a0 deviceIdentifier:(id)a1;

- (void).cxx_destruct;

@end
