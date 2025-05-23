@class NSArray, NSData, SISchemaUUID;

@interface TTMSchemaTTMOverrideTCUFailure : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *tcuId;
@property (nonatomic) BOOL hasTcuId;
@property (copy, nonatomic) NSArray *failures;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)failuresCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addFailures:(id)a0;
- (void)clearFailures;
- (void)deleteFailures;
- (void)deleteTcuId;
- (id)failuresAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end
