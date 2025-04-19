@class NSData;

@interface INFERENCESchemaINFERENCEEuclidScoreStatistics : SISchemaInstrumentationMessage {
    struct { unsigned char minScore : 1; unsigned char maxScore : 1; unsigned char medianScore : 1; unsigned char meanScore : 1; } _has;
}

@property (nonatomic) float minScore;
@property (nonatomic) BOOL hasMinScore;
@property (nonatomic) float maxScore;
@property (nonatomic) BOOL hasMaxScore;
@property (nonatomic) float medianScore;
@property (nonatomic) BOOL hasMedianScore;
@property (nonatomic) float meanScore;
@property (nonatomic) BOOL hasMeanScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMeanScore;
- (void)deleteMaxScore;
- (void)deleteMedianScore;
- (void)deleteMinScore;
- (id)suppressMessageUnderConditions;

@end
