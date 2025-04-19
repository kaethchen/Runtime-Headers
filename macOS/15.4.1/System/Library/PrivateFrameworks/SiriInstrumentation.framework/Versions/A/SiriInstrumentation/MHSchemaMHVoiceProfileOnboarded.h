@class NSArray, NSData;

@interface MHSchemaMHVoiceProfileOnboarded : SISchemaInstrumentationMessage {
    struct { unsigned char voiceProfilePitchInHz : 1; } _has;
}

@property (nonatomic) unsigned int voiceProfilePitchInHz;
@property (nonatomic) BOOL hasVoiceProfilePitchInHz;
@property (copy, nonatomic) NSArray *confusionScoresForEnrollmentUtterances;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addConfusionScoresForEnrollmentUtterance:(id)a0;
- (void)clearConfusionScoresForEnrollmentUtterance;
- (id)confusionScoresForEnrollmentUtteranceAtIndex:(unsigned long long)a0;
- (unsigned long long)confusionScoresForEnrollmentUtteranceCount;
- (void)deleteConfusionScoresForEnrollmentUtterance;
- (void)deleteVoiceProfilePitchInHz;
- (id)suppressMessageUnderConditions;

@end
