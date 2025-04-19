@class NSArray, NSData;

@interface MHSchemaMHAssistantDaemonAudioStartRecordingEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *activeSessionDisplayIds;
@property (copy, nonatomic) NSArray *fanInfos;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)activeSessionDisplayIdsAtIndex:(unsigned long long)a0;
- (id)fanInfoAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (unsigned long long)activeSessionDisplayIdsCount;
- (void)addActiveSessionDisplayIds:(id)a0;
- (void)addFanInfo:(id)a0;
- (void)clearActiveSessionDisplayIds;
- (void)clearFanInfo;
- (void)deleteActiveSessionDisplayIds;
- (void)deleteFanInfo;
- (unsigned long long)fanInfoCount;
- (id)suppressMessageUnderConditions;

@end
