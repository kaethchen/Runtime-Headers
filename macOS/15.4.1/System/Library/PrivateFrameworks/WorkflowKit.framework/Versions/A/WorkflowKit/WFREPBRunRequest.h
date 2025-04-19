@class NSData;

@interface WFREPBRunRequest : PBRequest <NSCopying>

@property (nonatomic) int payloadType;
@property (retain, nonatomic) NSData *payload;

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
- (int)StringAsPayloadType:(id)a0;
- (id)payloadTypeAsString:(int)a0;

@end
