@class NSNumber, _TSF_TSDgPTPUnicastUDPv4EtEPort;

@interface TSgPTPUnicastUDPv4EtEPort : TSgPTPFDEtEPort {
    _TSF_TSDgPTPUnicastUDPv4EtEPort *_impl;
}

@property (readonly, copy, nonatomic) NSNumber *destinationIPv4Address;

+ (id)keyPathsForValuesAffectingDestinationIPv4Address;

- (void).cxx_destruct;
- (id)initWithImplDC:(id)a0;
- (id)destinationIPv4Address;

@end
