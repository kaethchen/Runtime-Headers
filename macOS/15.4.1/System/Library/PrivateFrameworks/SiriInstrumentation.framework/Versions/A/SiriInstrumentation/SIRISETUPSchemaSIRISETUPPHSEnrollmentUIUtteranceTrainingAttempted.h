@class SISchemaISOLocale, NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentUIUtteranceTrainingAttempted : SISchemaInstrumentationMessage {
    struct { unsigned char pageNumber : 1; unsigned char enrollmentMode : 1; unsigned char isRetry : 1; unsigned char trainingOutcome : 1; unsigned char wasAudioHintNeeded : 1; unsigned char wasAudioHintSpokenSuccessfully : 1; } _has;
}

@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) BOOL hasPageNumber;
@property (nonatomic) int enrollmentMode;
@property (nonatomic) BOOL hasEnrollmentMode;
@property (retain, nonatomic) SISchemaISOLocale *locale;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL isRetry;
@property (nonatomic) BOOL hasIsRetry;
@property (nonatomic) int trainingOutcome;
@property (nonatomic) BOOL hasTrainingOutcome;
@property (nonatomic) BOOL wasAudioHintNeeded;
@property (nonatomic) BOOL hasWasAudioHintNeeded;
@property (nonatomic) BOOL wasAudioHintSpokenSuccessfully;
@property (nonatomic) BOOL hasWasAudioHintSpokenSuccessfully;
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
- (void)deleteEnrollmentMode;
- (void)deleteIsRetry;
- (void)deleteLocale;
- (void)deletePageNumber;
- (void)deleteTrainingOutcome;
- (void)deleteWasAudioHintNeeded;
- (void)deleteWasAudioHintSpokenSuccessfully;
- (id)suppressMessageUnderConditions;

@end
