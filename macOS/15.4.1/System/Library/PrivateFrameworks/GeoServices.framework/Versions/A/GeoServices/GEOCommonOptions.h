@class PBUnknownFields;

@interface GEOCommonOptions : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _excludeGuidance;
    BOOL _includeSnapScoreMetadataDebug;
    BOOL _includeSummaryForPredictedDestination;
    BOOL _includeTravelTimeAggressive;
    BOOL _includeTravelTimeConservative;
    BOOL _includeTravelTimeEstimate;
    BOOL _supportsArMode;
    struct { unsigned char has_excludeGuidance : 1; unsigned char has_includeSnapScoreMetadataDebug : 1; unsigned char has_includeSummaryForPredictedDestination : 1; unsigned char has_includeTravelTimeAggressive : 1; unsigned char has_includeTravelTimeConservative : 1; unsigned char has_includeTravelTimeEstimate : 1; unsigned char has_supportsArMode : 1; } _flags;
}

@property (nonatomic) BOOL hasIncludeTravelTimeAggressive;
@property (nonatomic) BOOL includeTravelTimeAggressive;
@property (nonatomic) BOOL hasIncludeTravelTimeEstimate;
@property (nonatomic) BOOL includeTravelTimeEstimate;
@property (nonatomic) BOOL hasIncludeTravelTimeConservative;
@property (nonatomic) BOOL includeTravelTimeConservative;
@property (nonatomic) BOOL hasExcludeGuidance;
@property (nonatomic) BOOL excludeGuidance;
@property (nonatomic) BOOL hasIncludeSummaryForPredictedDestination;
@property (nonatomic) BOOL includeSummaryForPredictedDestination;
@property (nonatomic) BOOL hasIncludeSnapScoreMetadataDebug;
@property (nonatomic) BOOL includeSnapScoreMetadataDebug;
@property (nonatomic) BOOL hasSupportsArMode;
@property (nonatomic) BOOL supportsArMode;
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
