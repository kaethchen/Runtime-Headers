@class NSMutableArray;

@interface GEOCoarseLocationTileData : PBCodable <NSCopying> {
    NSMutableArray *_territorys;
}

@property (retain, nonatomic) NSMutableArray *territorys;

+ (BOOL)isValid:(id)a0;
+ (Class)territoryType;

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
- (void)clearTerritorys;
- (unsigned long long)territorysCount;
- (void)addTerritory:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)territoryAtIndex:(unsigned long long)a0;

@end
