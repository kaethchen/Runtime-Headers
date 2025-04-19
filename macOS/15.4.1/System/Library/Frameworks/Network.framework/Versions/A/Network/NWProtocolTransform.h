@class NWEndpoint, NSObject;
@protocol OS_nw_protocol_transform;

@interface NWProtocolTransform : NSObject <NWPrettyDescription>

@property (retain) NSObject<OS_nw_protocol_transform> *internalTransform;
@property (nonatomic) BOOL noProxy;
@property (nonatomic) int multipathService;
@property (copy, nonatomic) NWEndpoint *replacementEndpoint;
@property (nonatomic) BOOL tfo;
@property (nonatomic) BOOL tfoNoCookie;
@property (nonatomic) int dataMode;
@property (nonatomic) unsigned long long fallbackMode;
@property (nonatomic) BOOL prohibitDirect;
@property (nonatomic) BOOL disablePathFallback;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)appendProtocol:(id)a0 atLevel:(int)a1;
- (void)clearProtocolsAtLevel:(int)a0;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (void)disableProtocol:(struct nw_protocol_identifier { char x0[32]; int x1; int x2; } *)a0;
- (BOOL)fastOpenForceEnable;
- (id)initWithCTransform:(id)a0;
- (id)privateDescription;
- (void)setFastOpenForceEnable:(BOOL)a0;

@end
