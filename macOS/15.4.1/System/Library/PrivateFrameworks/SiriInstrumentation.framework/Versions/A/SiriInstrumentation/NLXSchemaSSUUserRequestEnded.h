@class NSArray, NSData;

@interface NLXSchemaSSUUserRequestEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *triggeredCacheEntryInfos;
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
- (void)addTriggeredCacheEntryInfos:(id)a0;
- (void)clearTriggeredCacheEntryInfos;
- (void)deleteTriggeredCacheEntryInfos;
- (id)suppressMessageUnderConditions;
- (id)triggeredCacheEntryInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)triggeredCacheEntryInfosCount;

@end
