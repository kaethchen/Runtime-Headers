@class AVBInterface;

@interface AVBPTPEthernetPort : AVBPTPFDPtPPort

@property (readonly, weak) AVBInterface *interface;

+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;

- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (void)serviceTerminated;

@end
