@class NSArray, NSData;

@interface ASRSchemaASRContextualEntityRetrievalEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *retrievedEntityStates;
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
- (void)addRetrievedEntityStates:(id)a0;
- (void)clearRetrievedEntityStates;
- (void)deleteRetrievedEntityStates;
- (id)retrievedEntityStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)retrievedEntityStatesCount;
- (id)suppressMessageUnderConditions;

@end
