@class NSString;

@interface HMDThreadNetworkWakeOnDeviceConnectionStateChangeEvent : NSObject

@property (readonly, nonatomic) NSString *eMACAddressAsString;
@property (readonly, nonatomic) long long connectionState;

- (void).cxx_destruct;
- (id)initWitheMACAddress:(id)a0 connectionState:(long long)a1;

@end
