@class PBUnknownFields;

@interface GEONavigabilityInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _isBlocked;
    BOOL _isEvFeasible;
    struct { unsigned char has_isBlocked : 1; unsigned char has_isEvFeasible : 1; } _flags;
}

@property (nonatomic) BOOL hasIsEvFeasible;
@property (nonatomic) BOOL isEvFeasible;
@property (nonatomic) BOOL hasIsBlocked;
@property (nonatomic) BOOL isBlocked;
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
