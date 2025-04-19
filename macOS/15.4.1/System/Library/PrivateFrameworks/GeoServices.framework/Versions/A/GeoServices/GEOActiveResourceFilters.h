@class NSMutableArray, PBUnknownFields;

@interface GEOActiveResourceFilters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_filters;
}

@property (retain, nonatomic) NSMutableArray *filters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)filterType;
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
- (void)addFilter:(id)a0;
- (void)clearFilters;
- (void)clearUnknownFields:(BOOL)a0;
- (id)filterAtIndex:(unsigned long long)a0;
- (unsigned long long)filtersCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
