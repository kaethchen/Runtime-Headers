@class IFTSchemaIFTIntelligenceFlowError, IFTSchemaIFTPlannerError, NSData, IFTSchemaIFTSessionCoordinatorError, IFTSchemaIFTExecutorError;

@interface IFTSchemaIFTSessionError : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *other;
@property (nonatomic) BOOL hasOther;
@property (retain, nonatomic) IFTSchemaIFTSessionCoordinatorError *sessionCoordinatorError;
@property (nonatomic) BOOL hasSessionCoordinatorError;
@property (retain, nonatomic) IFTSchemaIFTPlannerError *plannerError;
@property (nonatomic) BOOL hasPlannerError;
@property (retain, nonatomic) IFTSchemaIFTExecutorError *executorError;
@property (nonatomic) BOOL hasExecutorError;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Sessionerror;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteExecutorError;
- (void)deleteOther;
- (void)deletePlannerError;
- (void)deleteSessionCoordinatorError;
- (id)suppressMessageUnderConditions;

@end
