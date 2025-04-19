@class NSString, NSArray, NSData, NSNumber;

@interface HMDPrimaryNetworkInterfaceDetails : HMFObject

@property (readonly, copy) NSNumber *primaryInterfaceType;
@property (readonly, copy) NSString *primaryInterfaceName;
@property (readonly, copy) NSString *wifiSSID;
@property (readonly, copy) NSArray *primaryIPv4Addresses;
@property (readonly, copy) NSArray *primaryIPv6Addresses;
@property (readonly, copy) NSData *primaryIPv4NetworkSignature;
@property (readonly, copy) NSData *primaryIPv6NetworkSignature;
@property (readonly) NSNumber *hashWifiSSID;
@property (readonly, copy) NSArray *hashPrimaryIPv4Addresses;
@property (readonly, copy) NSArray *hashPrimaryIPv6Addresses;
@property (readonly) NSNumber *hashPrimaryIPv4NetworkSignature;
@property (readonly) NSNumber *hashPrimaryIPv6NetworkSignature;

- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)_computeHashValues;
- (id)generateStatusKitPayload;
- (id)initWithPrimaryInterfaceType:(id)a0 primaryInterfaceName:(id)a1 wifiSSID:(id)a2 primaryIPv4Addresses:(id)a3 primaryIPv6Addresses:(id)a4 primaryIPv4NetworkSignature:(id)a5 primaryIPv6NetworkSignature:(id)a6;

@end
