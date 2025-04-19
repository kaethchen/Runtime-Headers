@class NSArray, NSData;

@interface JRSchemaJRAnonymizedHistoryAndContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tuples;
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
- (void)addTuples:(id)a0;
- (void)clearTuples;
- (void)deleteTuples;
- (id)suppressMessageUnderConditions;
- (id)tuplesAtIndex:(unsigned long long)a0;
- (unsigned long long)tuplesCount;

@end
