@class NSArray, NSData;

@interface GRRSchemaGRRHypothesisRanked : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *rankings;
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
- (void)addRankings:(id)a0;
- (void)clearRankings;
- (void)deleteRankings;
- (id)rankingsAtIndex:(unsigned long long)a0;
- (unsigned long long)rankingsCount;
- (id)suppressMessageUnderConditions;

@end
