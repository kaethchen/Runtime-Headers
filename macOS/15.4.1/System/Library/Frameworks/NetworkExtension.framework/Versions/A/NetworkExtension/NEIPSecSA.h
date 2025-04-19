@class NWAddressEndpoint, NSString, NSData;

@interface NEIPSecSA : NSObject <NEPrettyDescription, NSCopying> {
    unsigned int _spi;
    unsigned int _internalSAID;
}

@property (readonly) unsigned int spi;
@property (readonly) int direction;
@property int mode;
@property int protocol;
@property (retain) NWAddressEndpoint *localAddress;
@property (retain) NWAddressEndpoint *remoteAddress;
@property (retain) NSString *boundInterfaceName;
@property (retain) NSString *tunnelInterfaceName;
@property unsigned int replayWindowSize;
@property unsigned long long lifetimeSeconds;
@property int encryptionAlgorithm;
@property (retain) NSData *encryptionKey;
@property int authenticationAlgorithm;
@property (retain) NSData *authenticationKey;
@property BOOL natTraversalEnabled;
@property BOOL natDetectedOnPeer;
@property BOOL natKeepaliveEnabled;
@property BOOL natKeepaliveOffloadEnabled;
@property unsigned long long natKeepaliveIntervalSeconds;
@property unsigned long long natKeepaliveOffloadIntervalSeconds;
@property unsigned short natTraversalPort;
@property unsigned short natTraversalSrcPort;
@property BOOL sequencePerTrafficClass;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initInboundSA;
- (id)initInboundSAWithSPI:(unsigned int)a0;
- (id)initOutboundSAWithSPI:(unsigned int)a0;

@end
