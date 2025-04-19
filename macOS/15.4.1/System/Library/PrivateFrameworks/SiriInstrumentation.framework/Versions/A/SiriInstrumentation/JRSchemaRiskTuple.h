@class NSArray, NSData;

@interface JRSchemaRiskTuple : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *risks;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addRisks:(unsigned int)a0;
- (void)clearRisks;
- (void)deleteRisks;
- (unsigned int)risksAtIndex:(unsigned long long)a0;
- (unsigned long long)risksCount;
- (id)suppressMessageUnderConditions;

@end
