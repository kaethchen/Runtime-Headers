@class NSNumber;

@interface _TSF_TSDgPTPUnicastUDPv4EtEPort : _TSF_TSDgPTPFDEtEPort

@property (readonly, copy, nonatomic) NSNumber *destinationIPv4Address;

+ (id)diagnosticInfoForService:(id)a0;

- (void).cxx_destruct;
- (int)portType;
- (id)_destinationAddressString;
- (id)_destinationIPv4Address;
- (id)_sourceAddressString;
- (id)initWithService:(id)a0 pid:(int)a1;
- (id)propertiesForXPC;

@end
