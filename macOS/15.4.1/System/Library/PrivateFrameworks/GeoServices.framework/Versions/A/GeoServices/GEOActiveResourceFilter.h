@class NSString, PBUnknownFields;

@interface GEOActiveResourceFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _lastTimestamp;
    NSString *_name;
    int _scale;
    int _scenario;
    struct { unsigned char has_lastTimestamp : 1; } _flags;
}

@property (readonly, nonatomic, getter=_isFilterStaleThresholdExpired) BOOL _filterStaleThresholdExpired;
@property (nonatomic) BOOL hasLastTimestamp;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) int scale;
@property (nonatomic) int scenario;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long whichFilter;
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
- (int)StringAsScale:(id)a0;
- (int)StringAsScenario:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)resetFilter;
- (id)scaleAsString:(int)a0;
- (id)scenarioAsString:(int)a0;

@end
