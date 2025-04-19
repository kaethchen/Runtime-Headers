@class WiFiAwareDiscoveryResult, NSString, WiFiMACAddress, NSData, NSDictionary;

@interface CUNANEndpoint : NSObject

@property (retain, nonatomic) WiFiAwareDiscoveryResult *discoveryResult;
@property (nonatomic) unsigned char instanceID;
@property (retain, nonatomic) WiFiMACAddress *macAddress;
@property (copy, nonatomic) NSData *customData;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *mockPeerEndpointString;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int port;
@property (nonatomic) int rssi;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSDictionary *textInfo;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)a0;
- (id)initWithEndpointID:(const char *)a0 error:(id *)a1;
- (unsigned int)updateWithDiscoveryResult:(id)a0;

@end
