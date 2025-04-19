@class NSArray, NSData;

@interface MHSchemaMHVoiceProfileConfusionScoresForEnrollmentUtterance : SISchemaInstrumentationMessage {
    struct { unsigned char enrollmentUtteranceNumber : 1; } _has;
}

@property (nonatomic) unsigned int enrollmentUtteranceNumber;
@property (nonatomic) BOOL hasEnrollmentUtteranceNumber;
@property (copy, nonatomic) NSArray *voiceProfileConfusionScores;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addVoiceProfileConfusionScores:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEnrollmentUtteranceNumber;
- (void)clearVoiceProfileConfusionScores;
- (void)deleteVoiceProfileConfusionScores;
- (id)suppressMessageUnderConditions;
- (id)voiceProfileConfusionScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)voiceProfileConfusionScoresCount;

@end
