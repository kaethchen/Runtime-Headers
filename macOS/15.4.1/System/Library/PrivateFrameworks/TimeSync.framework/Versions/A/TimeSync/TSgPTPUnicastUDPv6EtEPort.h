@class NSData, _TSF_TSDgPTPUnicastUDPv6EtEPort;

@interface TSgPTPUnicastUDPv6EtEPort : TSgPTPFDEtEPort {
    _TSF_TSDgPTPUnicastUDPv6EtEPort *_impl;
}

@property (readonly, copy, nonatomic) NSData *destinationIPv6Address;

+ (id)keyPathsForValuesAffectingDestinationIPv6Address;

- (void).cxx_destruct;
- (id)initWithImplDC:(id)a0;
- (id)destinationIPv6Address;

@end
