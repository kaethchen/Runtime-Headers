@class NSArray, QDSchemaQDToolOutputDefinition, NSString, NSData;

@interface QDSchemaQDToolDefinition : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *parameters;
@property (retain, nonatomic) QDSchemaQDToolOutputDefinition *output;
@property (nonatomic) BOOL hasOutput;
@property (copy, nonatomic) NSString *description;
@property (nonatomic) BOOL hasDescription;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDescription;
- (void)deleteOutput;
- (void)deleteParameters;
- (id)suppressMessageUnderConditions;

@end
