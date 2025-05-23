@interface GEOPDPlaceSummaryLayoutUnitHours : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _allowedHoursStates;
    int _type;
    struct { unsigned char has_type : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) unsigned long long allowedHoursStatesCount;
@property (readonly, nonatomic) int *allowedHoursStates;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsAllowedHoursStates:(id)a0;
- (void)addAllowedHoursState:(int)a0;
- (int)allowedHoursStateAtIndex:(unsigned long long)a0;
- (id)allowedHoursStatesAsString:(int)a0;
- (void)clearAllowedHoursStates;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)setAllowedHoursStates:(int *)a0 count:(unsigned long long)a1;

@end
