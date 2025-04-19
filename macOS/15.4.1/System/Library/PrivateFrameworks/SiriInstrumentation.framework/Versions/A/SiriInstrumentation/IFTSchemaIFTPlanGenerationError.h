@class NSData, IFTSchemaIFTPlanGenerationModelOutputError;

@interface IFTSchemaIFTPlanGenerationError : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTPlanGenerationModelOutputError *planGenerationModelOutputError;
@property (nonatomic) BOOL hasPlanGenerationModelOutputError;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Plangenerationerror;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePlanGenerationModelOutputError;
- (id)suppressMessageUnderConditions;

@end
