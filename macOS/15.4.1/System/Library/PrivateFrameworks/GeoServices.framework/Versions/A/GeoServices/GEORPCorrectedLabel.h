@class NSString, GEOLatLng, GEOMapRegion, NSMutableArray, PBDataReader;

@interface GEORPCorrectedLabel : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOLatLng *_coordinate;
    NSString *_correctedValue;
    NSMutableArray *_featureHandles;
    GEOMapRegion *_featureRegion;
    NSString *_originalValue;
    unsigned long long _uid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _localizedLabels;
    struct { unsigned char has_uid : 1; unsigned char has_localizedLabels : 1; unsigned char read_coordinate : 1; unsigned char read_correctedValue : 1; unsigned char read_featureHandles : 1; unsigned char read_featureRegion : 1; unsigned char read_originalValue : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasOriginalValue;
@property (retain, nonatomic) NSString *originalValue;
@property (readonly, nonatomic) BOOL hasCorrectedValue;
@property (retain, nonatomic) NSString *correctedValue;
@property (readonly, nonatomic) BOOL hasFeatureRegion;
@property (retain, nonatomic) GEOMapRegion *featureRegion;
@property (retain, nonatomic) NSMutableArray *featureHandles;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (nonatomic) BOOL hasUid;
@property (nonatomic) unsigned long long uid;
@property (nonatomic) BOOL hasLocalizedLabels;
@property (nonatomic) BOOL localizedLabels;

+ (Class)featureHandleType;
+ (BOOL)isValid:(id)a0;

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
- (void)addFeatureHandle:(id)a0;
- (void)clearFeatureHandles;
- (id)featureHandleAtIndex:(unsigned long long)a0;
- (unsigned long long)featureHandlesCount;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
