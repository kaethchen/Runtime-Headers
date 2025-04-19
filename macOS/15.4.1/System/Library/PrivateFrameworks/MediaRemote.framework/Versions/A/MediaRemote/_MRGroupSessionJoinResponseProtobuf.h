@class NSData, NSString;

@interface _MRGroupSessionJoinResponseProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPublicSigningKeyData;
@property (retain, nonatomic) NSData *publicSigningKeyData;
@property (readonly, nonatomic) BOOL hasJoinURL;
@property (retain, nonatomic) NSString *joinURL;

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
