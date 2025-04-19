@class NSArray, NSData;

@interface JRSchemaJREntitySimilarityScores : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *rows;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRow:(id)a0;
- (id)rowAtIndex:(unsigned long long)a0;
- (unsigned long long)rowCount;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearRow;
- (void)deleteRow;
- (id)suppressMessageUnderConditions;

@end
