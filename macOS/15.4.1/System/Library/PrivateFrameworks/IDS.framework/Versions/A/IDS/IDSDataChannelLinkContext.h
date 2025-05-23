@class NSUUID, NSString, NSData, NSDictionary, _IDSDataChannelLinkConnections, _IDSDataChannelLinkContext;

@interface IDSDataChannelLinkContext : NSObject {
    _IDSDataChannelLinkContext *_internal;
}

@property (readonly) unsigned short channelNumber;
@property (readonly) NSData *hbhEncryptionkey;
@property (readonly) NSData *hbhDecryptionkey;
@property (readonly) char delegatedLinkID;
@property (readonly) unsigned short localRelayLinkID;
@property (readonly) unsigned short remoteRelayLinkID;
@property BOOL directConnectionReady;
@property (readonly) char linkID;
@property (readonly) NSUUID *linkUUID;
@property (readonly) NSUUID *QRSessionID;
@property (readonly) unsigned char networkType;
@property (readonly) long long connectionType;
@property (readonly) unsigned int RATType;
@property (readonly) unsigned short maxMTU;
@property (readonly) long long relayServerProvider;
@property (readonly) NSData *relaySessionToken;
@property (readonly) NSData *relaySessionKey;
@property (readonly) unsigned char remoteNetworkType;
@property (readonly) long long remoteConnectionType;
@property (readonly) unsigned int remoteRATType;
@property (readonly) unsigned int maxBitrate;
@property (readonly) BOOL serverIsDegraded;
@property (readonly) unsigned short localLinkFlags;
@property (readonly) unsigned short remoteLinkFlags;
@property (readonly) unsigned int localDataSoMask;
@property (readonly) unsigned int remoteDataSoMask;
@property (readonly) BOOL isVirtualRelayLink;
@property (readonly) NSString *localInterfaceName;
@property (readonly) long long dataPathType;
@property unsigned int totalPacketsSentOnLink;
@property unsigned int totalPacketsReceivedOnLink;
@property (readonly) _IDSDataChannelLinkConnections *connections;
@property (readonly) BOOL isQUICPod;
@property (readonly) NSString *relayProtocolStackDescription;
@property (readonly) NSString *channelDataBaseProtocolStackDescription;
@property (readonly) NSDictionary *qrExperiments;
@property (readonly) unsigned short estimatedPerPacketConstantOverhead;
@property BOOL hasReceivedPacket;
@property double lastPacketReceivedTime;
@property double lastPacketSentTime;
@property double lastPacketReportedTime;
@property BOOL hasSentPacket;

- (id)description;
- (void).cxx_destruct;
- (id)_connection;
- (void)setMaxBitrate:(unsigned int)a0;
- (void)setMTU:(unsigned short)a0;
- (id)initWithAttributes:(struct { unsigned char x0[16]; unsigned char x1[16]; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned short x10; unsigned short x11; unsigned int x12; unsigned int x13; unsigned short x14; unsigned short x15; unsigned short x16; unsigned short x17; BOOL x18; unsigned char x19[16]; unsigned char x20; char x21[16]; unsigned short x22; unsigned char x23; } *)a0 maxBitrate:(unsigned int)a1 relayServerProvider:(long long)a2 relaySessionToken:(id)a3 relaySessionKey:(id)a4 hbhEncryptionkey:(id)a5 hbhDecryptionkey:(id)a6 relayProtocolStackDescription:(id)a7 qrExperiments:(id)a8 estimatedPerPacketConstantOverhead:(unsigned short)a9;
- (id)initWithDummyInformation;
- (void)setDelegateLinkID:(unsigned char)a0;
- (void)setIsVirtualRelayLink:(BOOL)a0;
- (void)setQrExperiments:(id)a0;
- (void)setRATType:(unsigned int)a0;

@end
