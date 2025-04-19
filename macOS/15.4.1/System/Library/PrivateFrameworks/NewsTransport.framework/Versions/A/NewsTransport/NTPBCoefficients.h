@interface NTPBCoefficients : PBCodable <NSCopying> {
    struct { unsigned char articleEmbeddingScoreCoefficient : 1; unsigned char autofavoritedScoreCoefficient : 1; unsigned char clientScoreCoefficient : 1; unsigned char conversionCoefficient : 1; unsigned char halfLifeCoefficient : 1; unsigned char serverScoreCoefficient : 1; unsigned char subscribedChannelScoreCoefficent : 1; unsigned char subscribedTopicScoreCoefficient : 1; unsigned char tabiScoreCoefficient : 1; } _has;
}

@property (nonatomic) BOOL hasServerScoreCoefficient;
@property (nonatomic) double serverScoreCoefficient;
@property (nonatomic) BOOL hasClientScoreCoefficient;
@property (nonatomic) double clientScoreCoefficient;
@property (nonatomic) BOOL hasSubscribedTopicScoreCoefficient;
@property (nonatomic) double subscribedTopicScoreCoefficient;
@property (nonatomic) BOOL hasSubscribedChannelScoreCoefficent;
@property (nonatomic) double subscribedChannelScoreCoefficent;
@property (nonatomic) BOOL hasAutofavoritedScoreCoefficient;
@property (nonatomic) double autofavoritedScoreCoefficient;
@property (nonatomic) BOOL hasArticleEmbeddingScoreCoefficient;
@property (nonatomic) double articleEmbeddingScoreCoefficient;
@property (nonatomic) BOOL hasTabiScoreCoefficient;
@property (nonatomic) double tabiScoreCoefficient;
@property (nonatomic) BOOL hasConversionCoefficient;
@property (nonatomic) double conversionCoefficient;
@property (nonatomic) BOOL hasHalfLifeCoefficient;
@property (nonatomic) double halfLifeCoefficient;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
