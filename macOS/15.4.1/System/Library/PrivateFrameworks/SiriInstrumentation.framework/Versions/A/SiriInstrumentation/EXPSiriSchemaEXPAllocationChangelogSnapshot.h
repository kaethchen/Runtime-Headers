@class NSArray, NSData;

@interface EXPSiriSchemaEXPAllocationChangelogSnapshot : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *allocations;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addAllocations:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)allocationsAtIndex:(unsigned long long)a0;
- (unsigned long long)allocationsCount;
- (void)clearAllocations;
- (void)deleteAllocations;
- (id)suppressMessageUnderConditions;

@end
