@interface GEOPDPlaceSummaryLayoutUnitCuratedGuides : PBCodable <NSCopying> {
    unsigned int _minNumGuides;
    struct { unsigned char has_minNumGuides : 1; } _flags;
}

@property (nonatomic) BOOL hasMinNumGuides;
@property (nonatomic) unsigned int minNumGuides;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
