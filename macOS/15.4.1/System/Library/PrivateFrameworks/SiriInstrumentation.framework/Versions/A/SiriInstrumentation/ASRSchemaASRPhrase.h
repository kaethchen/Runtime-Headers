@class NSArray, NSData;

@interface ASRSchemaASRPhrase : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *interpretations;
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
- (void)addInterpretations:(id)a0;
- (void)clearInterpretations;
- (void)deleteInterpretations;
- (id)interpretationsAtIndex:(unsigned long long)a0;
- (unsigned long long)interpretationsCount;
- (id)suppressMessageUnderConditions;

@end
