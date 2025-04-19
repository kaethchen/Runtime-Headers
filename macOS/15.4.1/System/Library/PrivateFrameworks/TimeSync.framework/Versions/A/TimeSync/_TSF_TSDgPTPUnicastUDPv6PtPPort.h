@class NSData;

@interface _TSF_TSDgPTPUnicastUDPv6PtPPort : _TSF_TSDgPTPFDPtPPort

@property (readonly, copy, nonatomic) NSData *destinationIPv6Address;

+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0 andIPv6Address:(char *)a1;

- (void).cxx_destruct;
- (int)portType;
- (id)_destinationAddressString;
- (id)_destinationIPv6Address;
- (id)_sourceAddressString;
- (id)initWithService:(id)a0 pid:(int)a1;
- (id)propertiesForXPC;

@end
