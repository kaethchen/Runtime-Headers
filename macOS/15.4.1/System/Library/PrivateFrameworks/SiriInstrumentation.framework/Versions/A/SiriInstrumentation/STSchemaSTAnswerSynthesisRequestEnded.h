@class NSArray, NSData;

@interface STSchemaSTAnswerSynthesisRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)resultAtIndex:(unsigned long long)a0;
- (unsigned long long)resultCount;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addResult:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearResult;
- (void)deleteResult;
- (id)suppressMessageUnderConditions;

@end
