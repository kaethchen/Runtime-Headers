@class NSString;

@interface CLPLocationConsumptionScoreInfo : PBCodable <NSCopying> {
    struct { unsigned char startTime : 1; unsigned char stopTime : 1; unsigned char score : 1; } _has;
}

@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasStopTime;
@property (nonatomic) double stopTime;
@property (readonly, nonatomic) BOOL hasClientKey;
@property (retain, nonatomic) NSString *clientKey;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) int score;

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
