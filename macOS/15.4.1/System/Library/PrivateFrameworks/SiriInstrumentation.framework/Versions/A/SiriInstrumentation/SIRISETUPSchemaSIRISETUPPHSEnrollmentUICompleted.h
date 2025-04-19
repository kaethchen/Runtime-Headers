@class SISchemaISOLocale, NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentUICompleted : SISchemaInstrumentationMessage {
    struct { unsigned char enrollmentMode : 1; unsigned char enrollmentOutcome : 1; unsigned char pageNumber : 1; } _has;
}

@property (nonatomic) int enrollmentMode;
@property (nonatomic) BOOL hasEnrollmentMode;
@property (retain, nonatomic) SISchemaISOLocale *locale;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) int enrollmentOutcome;
@property (nonatomic) BOOL hasEnrollmentOutcome;
@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) BOOL hasPageNumber;
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
- (void)deleteEnrollmentOutcome;
- (void)deleteLocale;
- (void)deletePageNumber;
- (id)suppressMessageUnderConditions;

@end
