@class NSData;

@interface TPPBSecureElementIdentity : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPeerIdentifier;
@property (retain, nonatomic) NSData *peerIdentifier;
@property (readonly, nonatomic) BOOL hasPeerData;
@property (retain, nonatomic) NSData *peerData;

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
