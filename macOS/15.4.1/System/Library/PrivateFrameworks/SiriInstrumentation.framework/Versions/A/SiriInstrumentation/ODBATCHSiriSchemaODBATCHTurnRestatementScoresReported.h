@class NSArray, NSData;

@interface ODBATCHSiriSchemaODBATCHTurnRestatementScoresReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *turnRestatementScores;
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
- (void)addTurnRestatementScores:(id)a0;
- (void)clearTurnRestatementScores;
- (void)deleteTurnRestatementScores;
- (id)suppressMessageUnderConditions;
- (id)turnRestatementScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)turnRestatementScoresCount;

@end
