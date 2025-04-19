@class NSData, _TSF_TSDgPTPUnicastLinkLayerEtEPort;

@interface TSgPTPUnicastLinkLayerEtEPort : TSgPTPFDEtEPort {
    _TSF_TSDgPTPUnicastLinkLayerEtEPort *_impl;
}

@property (readonly, copy, nonatomic) NSData *destinationMACAddress;

+ (id)keyPathsForValuesAffectingDestinationMACAddress;

- (void).cxx_destruct;
- (id)initWithImplDC:(id)a0;
- (id)destinationMACAddress;

@end
