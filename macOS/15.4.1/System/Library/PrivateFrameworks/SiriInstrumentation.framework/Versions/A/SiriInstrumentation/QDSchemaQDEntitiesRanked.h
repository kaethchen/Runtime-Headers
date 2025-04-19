@class NSArray, NSData;

@interface QDSchemaQDEntitiesRanked : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *retrievedTools;
@property (copy, nonatomic) NSArray *spanMatchedEntities;
@property (copy, nonatomic) NSArray *utteranceContexts;
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
- (void)addRetrievedTools:(id)a0;
- (void)addSpanMatchedEntities:(id)a0;
- (void)addUtteranceContext:(id)a0;
- (void)clearRetrievedTools;
- (void)clearSpanMatchedEntities;
- (void)clearUtteranceContext;
- (void)deleteRetrievedTools;
- (void)deleteSpanMatchedEntities;
- (void)deleteUtteranceContext;
- (id)retrievedToolsAtIndex:(unsigned long long)a0;
- (unsigned long long)retrievedToolsCount;
- (id)spanMatchedEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)spanMatchedEntitiesCount;
- (id)suppressMessageUnderConditions;
- (id)utteranceContextAtIndex:(unsigned long long)a0;
- (unsigned long long)utteranceContextCount;

@end
