@class PBDataReader, GEOPDMapsIdentifier, GEOTimezone, GEOLatLng, NSMutableArray, PBUnknownFields;

@interface GEOPDSpatialEventLookupResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _categorys;
    GEOLatLng *_center;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    GEOPDMapsIdentifier *_poiId;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_categorys : 1; unsigned char read_center : 1; unsigned char read_eventDateTimes : 1; unsigned char read_eventId : 1; unsigned char read_poiId : 1; unsigned char read_timezone : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasEventId;
@property (retain, nonatomic) GEOPDMapsIdentifier *eventId;
@property (readonly, nonatomic) BOOL hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (readonly, nonatomic) unsigned long long categorysCount;
@property (readonly, nonatomic) int *categorys;
@property (retain, nonatomic) NSMutableArray *eventDateTimes;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (retain, nonatomic) GEOTimezone *timezone;
@property (readonly, nonatomic) BOOL hasPoiId;
@property (retain, nonatomic) GEOPDMapsIdentifier *poiId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)eventDateTimeType;
+ (BOOL)isValid:(id)a0;

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
- (int)StringAsCategorys:(id)a0;
- (void)addCategory:(int)a0;
- (void)addEventDateTime:(id)a0;
- (int)categoryAtIndex:(unsigned long long)a0;
- (id)categorysAsString:(int)a0;
- (void)clearCategorys;
- (void)clearEventDateTimes;
- (void)clearUnknownFields:(BOOL)a0;
- (id)eventDateTimeAtIndex:(unsigned long long)a0;
- (unsigned long long)eventDateTimesCount;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)setCategorys:(int *)a0 count:(unsigned long long)a1;

@end
