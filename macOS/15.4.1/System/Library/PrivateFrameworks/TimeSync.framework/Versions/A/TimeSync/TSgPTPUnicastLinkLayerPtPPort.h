@class NSData, _TSF_TSDgPTPUnicastLinkLayerPtPPort;

@interface TSgPTPUnicastLinkLayerPtPPort : TSgPTPFDPtPPort {
    _TSF_TSDgPTPUnicastLinkLayerPtPPort *_impl;
}

@property (readonly, copy, nonatomic) NSData *destinationMACAddress;

+ (id)keyPathsForValuesAffectingDestinationMACAddress;

- (void).cxx_destruct;
- (id)initWithImplDC:(id)a0;
- (id)destinationMACAddress;

@end
