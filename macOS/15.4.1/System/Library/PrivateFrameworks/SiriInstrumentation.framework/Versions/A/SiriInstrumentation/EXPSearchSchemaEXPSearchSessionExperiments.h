@class NSArray, NSData, SISchemaUUID;

@interface EXPSearchSchemaEXPSearchSessionExperiments : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *searchSessionId;
@property (nonatomic) BOOL hasSearchSessionId;
@property (copy, nonatomic) NSArray *activeExperiments;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)activeExperimentsAtIndex:(unsigned long long)a0;
- (unsigned long long)activeExperimentsCount;
- (void)addActiveExperiments:(id)a0;
- (void)clearActiveExperiments;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteActiveExperiments;
- (void)deleteSearchSessionId;
- (id)suppressMessageUnderConditions;

@end
