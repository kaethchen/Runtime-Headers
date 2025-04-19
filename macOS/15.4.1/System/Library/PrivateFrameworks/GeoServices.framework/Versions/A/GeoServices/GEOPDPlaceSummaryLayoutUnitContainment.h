@interface GEOPDPlaceSummaryLayoutUnitContainment : PBCodable <NSCopying> {
    int _containmentType;
    struct { unsigned char has_containmentType : 1; } _flags;
}

@property (nonatomic) BOOL hasContainmentType;
@property (nonatomic) int containmentType;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsContainmentType:(id)a0;
- (id)containmentTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
