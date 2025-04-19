@class NSArray, NSData;

@interface IFTSchemaIFTResolveToolExpression : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *toolIds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)toolIdsAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addToolIds:(id)a0;
- (void)clearToolIds;
- (void)deleteToolIds;
- (id)suppressMessageUnderConditions;
- (unsigned long long)toolIdsCount;

@end
