@class NSString, NSData;

@interface _MRRemoteArtworkProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL hasArtworkURLString;
@property (retain, nonatomic) NSString *artworkURLString;
@property (readonly, nonatomic) BOOL hasArtworkURLTemplateData;
@property (retain, nonatomic) NSData *artworkURLTemplateData;

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
