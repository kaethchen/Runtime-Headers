@class NSString;

@interface ATXPBAppModeEntityScoreMetrics : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasActivityState;
@property (retain, nonatomic) NSString *activityState;
@property (readonly, nonatomic) BOOL hasModelVersion;
@property (retain, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) BOOL hasNumDaysSinceStartOfMetricsLogging;
@property (retain, nonatomic) NSString *numDaysSinceStartOfMetricsLogging;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
