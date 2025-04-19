@class NSMutableArray, PBUnknownFields;

@interface GEOPDPlacecardLayoutConfiguration : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_entries;
}

@property (retain, nonatomic) NSMutableArray *entries;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)entriesType;
+ (BOOL)isValid:(id)a0;
+ (id)placecardLayoutConfigurationPlaceData:(id)a0;

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
- (id)entriesAtIndex:(unsigned long long)a0;
- (void)addEntries:(id)a0;
- (void)clearEntries;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)entriesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
