@class PBUnknownFields, GEOTouristInfo;

@interface GEOLogMsgStateMapViewLocation : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOTouristInfo *_touristInfo;
    int _locationBucket;
    BOOL _isCurrentLocationInViewport;
    struct { unsigned char has_locationBucket : 1; unsigned char has_isCurrentLocationInViewport : 1; } _flags;
}

@property (nonatomic) BOOL hasLocationBucket;
@property (nonatomic) int locationBucket;
@property (nonatomic) BOOL hasIsCurrentLocationInViewport;
@property (nonatomic) BOOL isCurrentLocationInViewport;
@property (readonly, nonatomic) BOOL hasTouristInfo;
@property (retain, nonatomic) GEOTouristInfo *touristInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (int)StringAsLocationBucket:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)locationBucketAsString:(int)a0;
- (void)readAll:(BOOL)a0;

@end
