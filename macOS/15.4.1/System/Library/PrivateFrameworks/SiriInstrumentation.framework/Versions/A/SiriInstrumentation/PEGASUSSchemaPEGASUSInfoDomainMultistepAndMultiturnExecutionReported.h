@class PEGASUSSchemaPEGASUSMultistepSubSearchExecution, PEGASUSSchemaPEGASUSMultiturnExecution, PEGASUSSchemaPEGASUSMultistepGatingExecution, NSArray, NSData;

@interface PEGASUSSchemaPEGASUSInfoDomainMultistepAndMultiturnExecutionReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) PEGASUSSchemaPEGASUSMultistepGatingExecution *multistepGatingExecution;
@property (nonatomic) BOOL hasMultistepGatingExecution;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSMultistepSubSearchExecution *multistepSubSearchExecution;
@property (nonatomic) BOOL hasMultistepSubSearchExecution;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSMultiturnExecution *multiturnExecution;
@property (nonatomic) BOOL hasMultiturnExecution;
@property (copy, nonatomic) NSArray *multistepSubSearchExecutions;
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
- (void)addMultistepSubSearchExecutions:(id)a0;
- (void)clearMultistepSubSearchExecutions;
- (void)deleteMultistepGatingExecution;
- (void)deleteMultistepSubSearchExecution;
- (void)deleteMultistepSubSearchExecutions;
- (void)deleteMultiturnExecution;
- (id)multistepSubSearchExecutionsAtIndex:(unsigned long long)a0;
- (unsigned long long)multistepSubSearchExecutionsCount;
- (id)suppressMessageUnderConditions;

@end
