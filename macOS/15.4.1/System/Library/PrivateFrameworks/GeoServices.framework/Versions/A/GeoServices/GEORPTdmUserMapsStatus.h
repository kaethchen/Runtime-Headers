@class PBUnknownFields;

@interface GEORPTdmUserMapsStatus : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _version;
    BOOL _isBlocked;
    BOOL _isTrusted;
    struct { unsigned char has_version : 1; unsigned char has_isBlocked : 1; unsigned char has_isTrusted : 1; } _flags;
}

@property (nonatomic) BOOL hasIsBlocked;
@property (nonatomic) BOOL isBlocked;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned long long version;
@property (nonatomic) BOOL hasIsTrusted;
@property (nonatomic) BOOL isTrusted;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
