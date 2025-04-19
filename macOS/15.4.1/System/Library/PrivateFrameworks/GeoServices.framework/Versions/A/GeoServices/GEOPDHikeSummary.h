@class GEOFormattedString, PBUnknownFields;

@interface GEOPDHikeSummary : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_hikeTypeName;
    unsigned int _expectedDurationSeconds;
    unsigned int _lengthMeters;
    unsigned int _sumElevationGainCm;
    unsigned int _sumElevationLossCm;
    struct { unsigned char has_expectedDurationSeconds : 1; unsigned char has_lengthMeters : 1; unsigned char has_sumElevationGainCm : 1; unsigned char has_sumElevationLossCm : 1; } _flags;
}

@property (nonatomic) BOOL hasLengthMeters;
@property (nonatomic) unsigned int lengthMeters;
@property (nonatomic) BOOL hasExpectedDurationSeconds;
@property (nonatomic) unsigned int expectedDurationSeconds;
@property (nonatomic) BOOL hasSumElevationGainCm;
@property (nonatomic) unsigned int sumElevationGainCm;
@property (nonatomic) BOOL hasSumElevationLossCm;
@property (nonatomic) unsigned int sumElevationLossCm;
@property (readonly, nonatomic) BOOL hasHikeTypeName;
@property (retain, nonatomic) GEOFormattedString *hikeTypeName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)hikeSummaryWithPlaceData:(id)a0;
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
