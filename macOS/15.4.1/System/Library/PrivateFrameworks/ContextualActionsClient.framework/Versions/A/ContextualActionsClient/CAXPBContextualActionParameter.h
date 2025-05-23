@class NSString, NSData;

@interface CAXPBContextualActionParameter : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *parameterType;
@property (readonly, nonatomic) BOOL hasParameterMetadata;
@property (retain, nonatomic) NSData *parameterMetadata;

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
