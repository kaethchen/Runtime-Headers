@class PBUnknownFields;

@interface GEONavCameraState : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _distanceToManeuver;
    int _speedBucket;
    int _upcomingManeuverType;
    BOOL _isGroupedManeuver;
    struct { unsigned char has_distanceToManeuver : 1; unsigned char has_speedBucket : 1; unsigned char has_upcomingManeuverType : 1; unsigned char has_isGroupedManeuver : 1; } _flags;
}

@property (nonatomic) BOOL hasUpcomingManeuverType;
@property (nonatomic) int upcomingManeuverType;
@property (nonatomic) BOOL hasDistanceToManeuver;
@property (nonatomic) int distanceToManeuver;
@property (nonatomic) BOOL hasIsGroupedManeuver;
@property (nonatomic) BOOL isGroupedManeuver;
@property (nonatomic) BOOL hasSpeedBucket;
@property (nonatomic) int speedBucket;
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
- (int)StringAsUpcomingManeuverType:(id)a0;
- (int)StringAsDistanceToManeuver:(id)a0;
- (int)StringAsSpeedBucket:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)distanceToManeuverAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)speedBucketAsString:(int)a0;
- (id)upcomingManeuverTypeAsString:(int)a0;

@end
