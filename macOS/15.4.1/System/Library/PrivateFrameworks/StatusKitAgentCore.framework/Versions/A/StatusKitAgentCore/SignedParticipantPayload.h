@class NSData, DecryptedParticipantPayload;

@interface SignedParticipantPayload : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPayload;
@property (retain, nonatomic) DecryptedParticipantPayload *payload;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;

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
