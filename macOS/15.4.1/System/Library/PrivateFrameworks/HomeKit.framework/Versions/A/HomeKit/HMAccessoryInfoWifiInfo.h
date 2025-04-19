@class NSString;

@interface HMAccessoryInfoWifiInfo : NSObject

@property (readonly) NSString *macAddress;
@property (readonly) NSString *networkSSID;

- (void).cxx_destruct;
- (id)protoData;
- (id)initWithMacAddress:(id)a0 networkSSID:(id)a1;
- (id)hmfWifiNetworkInfo;
- (id)initWithProtoData:(id)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithWifiNetworkInfo:(id)a0;
- (id)protoPayload;

@end
