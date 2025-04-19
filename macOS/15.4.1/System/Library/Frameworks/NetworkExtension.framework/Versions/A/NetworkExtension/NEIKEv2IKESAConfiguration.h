@class NSString, NWAddressEndpoint, NSArray, NWEndpoint, NSSet;

@interface NEIKEv2IKESAConfiguration : NSObject <NEPrettyDescription, NSCopying> {
    NSArray *_proposals;
}

@property (retain) NWEndpoint *localEndpoint;
@property (retain) NWEndpoint *remoteEndpoint;
@property (retain) NSString *outgoingInterfaceName;
@property BOOL randomizeLocalPort;
@property BOOL serverMode;
@property BOOL allowRedirect;
@property BOOL disableSwitchToNATTPorts;
@property BOOL allowTCPEncapsulation;
@property BOOL useTLSForTCPEncapsulation;
@property BOOL forceUDPEncapsulation;
@property BOOL preferInitiatorProposalOrder;
@property unsigned short tcpEncapsulationPort;
@property unsigned int nonceSize;
@property BOOL strictNonceSizeChecks;
@property (retain) NWAddressEndpoint *redirectedFromServer;
@property (copy, nonatomic) NSArray *proposals;
@property (retain) NSArray *customIKESAInitPayloads;
@property (retain) NSArray *customIKESAInitVendorPayloads;
@property unsigned int maximumPacketSize;
@property unsigned int headerOverhead;
@property BOOL requestChildlessSA;
@property BOOL requestPPK;
@property (retain) NSSet *extraSupportedSignatureHashes;
@property (retain) NSSet *supportedSecurePasswordMethods;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
