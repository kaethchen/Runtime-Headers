@class NSString;

@interface MRConfigureConnectionServiceMessage : MRConfigureConnectionMessage

@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) NSString *sourceOutputDeviceUID;
@property (readonly, nonatomic) NSString *sourceOutputDeviceName;
@property (readonly, nonatomic) NSString *destinationOutputDeviceUID;
@property (readonly, nonatomic) NSString *destinationGroupUID;

- (unsigned long long)type;
- (id)initWithServiceType:(id)a0 sourceOutputDeviceUID:(id)a1 sourceOutputDeviceName:(id)a2;

@end
