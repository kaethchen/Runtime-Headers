@class NSData, _TSF_TSDgPTPUnicastUDPv6PtPPort;

@interface TSgPTPUnicastUDPv6PtPPort : TSgPTPFDPtPPort {
    _TSF_TSDgPTPUnicastUDPv6PtPPort *_impl;
}

@property (readonly, copy, nonatomic) NSData *destinationIPv6Address;

+ (id)keyPathsForValuesAffectingDestinationIPv6Address;

- (void).cxx_destruct;
- (id)initWithimplDC:(id)a0;
- (id)destinationIPv6Address;

@end
