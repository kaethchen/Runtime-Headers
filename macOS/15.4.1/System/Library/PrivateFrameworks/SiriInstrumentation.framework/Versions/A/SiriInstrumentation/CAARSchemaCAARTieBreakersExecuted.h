@class NSArray, NSData;

@interface CAARSchemaCAARTieBreakersExecuted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tiebreakers;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addTiebreakers:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearTiebreakers;
- (void)deleteTiebreakers;
- (id)suppressMessageUnderConditions;
- (id)tiebreakersAtIndex:(unsigned long long)a0;
- (unsigned long long)tiebreakersCount;

@end
