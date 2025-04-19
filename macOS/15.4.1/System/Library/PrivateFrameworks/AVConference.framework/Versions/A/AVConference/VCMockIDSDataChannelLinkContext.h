@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext {
    BOOL _forceNetworkCellular;
    unsigned short _localLinkFlags;
    unsigned short _estimatedPerPacketConstantOverhead;
    char _linkID;
}

@property (nonatomic) BOOL idsUPlusOneMode;
@property unsigned char networkType;
@property unsigned char remoteNetworkType;

- (long long)connectionType;
- (unsigned int)RATType;
- (unsigned short)estimatedPerPacketConstantOverhead;
- (BOOL)isVirtualRelayLink;
- (char)linkID;
- (unsigned short)localLinkFlags;
- (unsigned int)remoteRATType;
- (id)initWithSourcePort:(short)a0;

@end
