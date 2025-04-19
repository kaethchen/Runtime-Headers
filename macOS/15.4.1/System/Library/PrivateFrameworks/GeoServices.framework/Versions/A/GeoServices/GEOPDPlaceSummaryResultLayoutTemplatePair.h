@class NSArray, GEOPDPlaceSummaryLayoutTemplate, NSMutableArray, PBDataReader;

@interface GEOPDPlaceSummaryResultLayoutTemplatePair : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _placeTypes;
    GEOPDPlaceSummaryLayoutTemplate *_layoutTemplate;
    NSMutableArray *_mapsIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_placeTypes : 1; unsigned char read_layoutTemplate : 1; unsigned char read_mapsIds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) NSArray *mapItemIdentifiers;
@property (readonly, nonatomic) NSArray *geoMapItemPlaceTypes;
@property (retain, nonatomic) NSMutableArray *mapsIds;
@property (readonly, nonatomic) BOOL hasLayoutTemplate;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutTemplate *layoutTemplate;
@property (readonly, nonatomic) unsigned long long placeTypesCount;
@property (readonly, nonatomic) int *placeTypes;

+ (BOOL)isValid:(id)a0;
+ (Class)mapsIdType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPlaceTypes:(id)a0;
- (void)clearPlaceTypes;
- (void)addMapsId:(id)a0;
- (void)addPlaceType:(int)a0;
- (void)clearMapsIds;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)mapsIdAtIndex:(unsigned long long)a0;
- (unsigned long long)mapsIdsCount;
- (int)placeTypeAtIndex:(unsigned long long)a0;
- (id)placeTypesAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (void)setPlaceTypes:(int *)a0 count:(unsigned long long)a1;

@end
