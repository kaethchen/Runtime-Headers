@class PBUnknownFields;

@interface GEOLogMsgStateRoutingWaypoints : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _finalWaypointId;
    unsigned int _originalNumberOfStops;
    unsigned int _originalWaypointId;
    struct { unsigned char has_finalWaypointId : 1; unsigned char has_originalNumberOfStops : 1; unsigned char has_originalWaypointId : 1; } _flags;
}

@property (nonatomic) BOOL hasOriginalNumberOfStops;
@property (nonatomic) unsigned int originalNumberOfStops;
@property (nonatomic) BOOL hasOriginalWaypointId;
@property (nonatomic) unsigned int originalWaypointId;
@property (nonatomic) BOOL hasFinalWaypointId;
@property (nonatomic) unsigned int finalWaypointId;
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
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
