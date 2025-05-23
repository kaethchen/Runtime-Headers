@class GEOTraitsTransitScheduleTimeRange, PBUnknownFields;

@interface GEOTraitsTransitScheduleModeFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOTraitsTransitScheduleTimeRange *_timeRange;
    unsigned int _numAdditionalDepartures;
    struct { unsigned char has_numAdditionalDepartures : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTimeRange;
@property (retain, nonatomic) GEOTraitsTransitScheduleTimeRange *timeRange;
@property (nonatomic) BOOL hasNumAdditionalDepartures;
@property (nonatomic) unsigned int numAdditionalDepartures;
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
- (void)configureWithDefaultStartTime:(double)a0 duration:(double)a1 numAdditionalDepartures:(unsigned int)a2;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
