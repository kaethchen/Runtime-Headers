@class NSString, GEOMapRegion, NSMutableArray, PBDataReader;

@interface GEORPResolution : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOMapRegion *_displayRegion;
    NSString *_localizedAlertText;
    NSMutableArray *_localizedChangeLists;
    NSString *_localizedDescription;
    double _resolutionDate;
    unsigned long long _transitLineMuid;
    NSMutableArray *_updatedPlaces;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _displayStyle;
    struct { unsigned char has_resolutionDate : 1; unsigned char has_transitLineMuid : 1; unsigned char has_displayStyle : 1; unsigned char read_displayRegion : 1; unsigned char read_localizedAlertText : 1; unsigned char read_localizedChangeLists : 1; unsigned char read_localizedDescription : 1; unsigned char read_updatedPlaces : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasResolutionDate;
@property (nonatomic) double resolutionDate;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (retain, nonatomic) GEOMapRegion *displayRegion;
@property (retain, nonatomic) NSMutableArray *localizedChangeLists;
@property (retain, nonatomic) NSMutableArray *updatedPlaces;
@property (nonatomic) BOOL hasTransitLineMuid;
@property (nonatomic) unsigned long long transitLineMuid;
@property (readonly, nonatomic) BOOL hasLocalizedDescription;
@property (retain, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) BOOL hasLocalizedAlertText;
@property (retain, nonatomic) NSString *localizedAlertText;
@property (nonatomic) BOOL hasDisplayStyle;
@property (nonatomic) int displayStyle;

+ (BOOL)isValid:(id)a0;
+ (Class)localizedChangeListType;
+ (Class)updatedPlaceType;

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
- (int)StringAsDisplayStyle:(id)a0;
- (void)addLocalizedChangeList:(id)a0;
- (void)addUpdatedPlace:(id)a0;
- (void)clearLocalizedChangeLists;
- (void)clearUpdatedPlaces;
- (id)displayStyleAsString:(int)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)localizedChangeListAtIndex:(unsigned long long)a0;
- (unsigned long long)localizedChangeListsCount;
- (void)readAll:(BOOL)a0;
- (id)updatedPlaceAtIndex:(unsigned long long)a0;
- (unsigned long long)updatedPlacesCount;

@end
