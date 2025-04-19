@class NSData;

@interface IDSQRProtoQuicConnectionInfo : PBCodable <NSCopying>

@property (nonatomic) int quicConnectionType;
@property (retain, nonatomic) NSData *quicConnectionId;

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
- (int)StringAsQuicConnectionType:(id)a0;
- (id)quicConnectionTypeAsString:(int)a0;

@end
