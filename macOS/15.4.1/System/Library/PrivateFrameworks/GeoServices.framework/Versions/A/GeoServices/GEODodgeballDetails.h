@class PBUnknownFields;

@interface GEODodgeballDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _dodgeballAction;
    struct { unsigned char has_dodgeballAction : 1; } _flags;
}

@property (nonatomic) BOOL hasDodgeballAction;
@property (nonatomic) int dodgeballAction;
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
- (int)StringAsDodgeballAction:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)dodgeballActionAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
