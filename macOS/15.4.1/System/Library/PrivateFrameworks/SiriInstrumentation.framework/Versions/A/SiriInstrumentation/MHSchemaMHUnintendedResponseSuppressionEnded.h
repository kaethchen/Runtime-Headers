@class NSString, NSData;

@interface MHSchemaMHUnintendedResponseSuppressionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char threshold : 1; unsigned char speakerIDThreshold : 1; unsigned char speakerIdScoreThreshold : 1; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) float threshold;
@property (nonatomic) BOOL hasThreshold;
@property (copy, nonatomic) NSString *mitigationAssetVersion;
@property (nonatomic) BOOL hasMitigationAssetVersion;
@property (nonatomic) float speakerIDThreshold;
@property (nonatomic) BOOL hasSpeakerIDThreshold;
@property (nonatomic) float speakerIdScoreThreshold;
@property (nonatomic) BOOL hasSpeakerIdScoreThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteThreshold;
- (void)deleteMitigationAssetVersion;
- (void)deleteModelVersion;
- (void)deleteScore;
- (void)deleteSpeakerIDThreshold;
- (void)deleteSpeakerIdScoreThreshold;
- (id)suppressMessageUnderConditions;

@end
