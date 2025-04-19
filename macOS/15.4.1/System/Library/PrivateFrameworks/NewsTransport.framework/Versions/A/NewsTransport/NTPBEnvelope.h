@class NSData;

@interface NTPBEnvelope : PBCodable <NSCopying> {
    struct { unsigned char contentTypeMinorVersion : 1; unsigned char contentTypePatchVersion : 1; } _has;
}

@property (nonatomic) int contentTypeVersion;
@property (nonatomic) int contentType;
@property (retain, nonatomic) NSData *content;
@property (nonatomic) BOOL hasContentTypeMinorVersion;
@property (nonatomic) int contentTypeMinorVersion;
@property (nonatomic) BOOL hasContentTypePatchVersion;
@property (nonatomic) int contentTypePatchVersion;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSData *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
