@class PFAClockEnvelopeStatistics, PFARepackagingExecutionResult, NSData, SISchemaUUID;

@interface PFARepackagingExecution : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *clockIdentifier;
@property (nonatomic) BOOL hasClockIdentifier;
@property (retain, nonatomic) PFAClockEnvelopeStatistics *envelopeStatistics;
@property (nonatomic) BOOL hasEnvelopeStatistics;
@property (retain, nonatomic) PFARepackagingExecutionResult *result;
@property (nonatomic) BOOL hasResult;
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
- (void)deleteClockIdentifier;
- (void)deleteEnvelopeStatistics;
- (void)deleteResult;
- (id)suppressMessageUnderConditions;

@end
