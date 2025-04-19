@class NSNumber, _TSF_TSDgPTPUnicastUDPv4PtPPort;

@interface TSgPTPUnicastUDPv4PtPPort : TSgPTPFDPtPPort {
    _TSF_TSDgPTPUnicastUDPv4PtPPort *_impl;
}

@property (readonly, copy, nonatomic) NSNumber *destinationIPv4Address;

+ (id)keyPathsForValuesAffectingDestinationIPv4Address;

- (void).cxx_destruct;
- (id)initWithImplDC:(id)a0;
- (id)destinationIPv4Address;

@end
