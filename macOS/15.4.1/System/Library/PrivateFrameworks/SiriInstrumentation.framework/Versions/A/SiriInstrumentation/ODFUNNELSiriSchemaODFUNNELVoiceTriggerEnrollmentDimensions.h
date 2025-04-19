@class NSData, ODFUNNELSiriSchemaODFUNNELCoreDimensions;

@interface ODFUNNELSiriSchemaODFUNNELVoiceTriggerEnrollmentDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char enrollmentMode : 1; unsigned char voiceTriggerType : 1; unsigned char enrollmentOutcome : 1; unsigned char pageNumberCompleted : 1; unsigned char trainingOutcome : 1; } _has;
}

@property (retain, nonatomic) ODFUNNELSiriSchemaODFUNNELCoreDimensions *coreDimensions;
@property (nonatomic) BOOL hasCoreDimensions;
@property (nonatomic) int enrollmentMode;
@property (nonatomic) BOOL hasEnrollmentMode;
@property (nonatomic) int voiceTriggerType;
@property (nonatomic) BOOL hasVoiceTriggerType;
@property (nonatomic) int enrollmentOutcome;
@property (nonatomic) BOOL hasEnrollmentOutcome;
@property (nonatomic) unsigned int pageNumberCompleted;
@property (nonatomic) BOOL hasPageNumberCompleted;
@property (nonatomic) int trainingOutcome;
@property (nonatomic) BOOL hasTrainingOutcome;
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
- (void)deleteCoreDimensions;
- (void)deleteEnrollmentMode;
- (void)deleteEnrollmentOutcome;
- (void)deletePageNumberCompleted;
- (void)deleteTrainingOutcome;
- (void)deleteVoiceTriggerType;
- (id)suppressMessageUnderConditions;

@end
