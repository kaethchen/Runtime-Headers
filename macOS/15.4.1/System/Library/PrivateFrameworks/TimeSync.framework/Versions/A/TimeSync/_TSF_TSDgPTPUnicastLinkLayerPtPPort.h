@class NSData;

@interface _TSF_TSDgPTPUnicastLinkLayerPtPPort : _TSF_TSDgPTPFDPtPPort

@property (readonly, copy, nonatomic) NSData *destinationMACAddress;

+ (id)diagnosticInfoForService:(id)a0;

- (void).cxx_destruct;
- (int)portType;
- (id)_destinationAddressString;
- (id)_destinationMACAddress;
- (id)_sourceAddressString;
- (id)initWithService:(id)a0 pid:(int)a1;
- (id)propertiesForXPC;

@end
