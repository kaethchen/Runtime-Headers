@class NSData;

@interface SharedChannelProvisionOffGridPacketInfo : PBCodable <NSCopying> {
    struct { unsigned char packetExpirationTimestampMillis : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPacketId;
@property (retain, nonatomic) NSData *packetId;
@property (readonly, nonatomic) BOOL hasEncryptedPacket;
@property (retain, nonatomic) NSData *encryptedPacket;
@property (nonatomic) BOOL hasPacketExpirationTimestampMillis;
@property (nonatomic) unsigned long long packetExpirationTimestampMillis;
@property (readonly, nonatomic) BOOL hasCommitmentSalt;
@property (retain, nonatomic) NSData *commitmentSalt;
@property (readonly, nonatomic) BOOL hasInitializationVector;
@property (retain, nonatomic) NSData *initializationVector;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
