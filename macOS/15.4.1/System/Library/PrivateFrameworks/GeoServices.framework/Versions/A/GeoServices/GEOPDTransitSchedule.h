@class PBDataReader, GEOPDDeparturePredicate, NSMutableArray, PBUnknownFields;

@interface GEOPDTransitSchedule : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDDeparturePredicate *_departurePredicateCountdown;
    GEOPDDeparturePredicate *_departurePredicateStamp;
    NSMutableArray *_departureSequenceContainers;
    NSMutableArray *_departureSequences;
    struct GEOPDTimeRange { unsigned int _duration; unsigned int _startTime; struct { unsigned char duration : 1; unsigned char startTime : 1; } _has; } _operatingHoursRange;
    unsigned long long _ttlSeconds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_operatingHoursRange : 1; unsigned char has_ttlSeconds : 1; unsigned char read_unknownFields : 1; unsigned char read_departurePredicateCountdown : 1; unsigned char read_departurePredicateStamp : 1; unsigned char read_departureSequenceContainers : 1; unsigned char read_departureSequences : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)transitScheduleForPlaceData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
