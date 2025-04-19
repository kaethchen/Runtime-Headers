@class NSString, NSArray, NSData, SIServiceBatchInfo;

@interface SIServiceInstrumentationBatch : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) BOOL hasApp_id;
@property (retain, nonatomic) SIServiceBatchInfo *batch_info;
@property (nonatomic) BOOL hasBatch_info;
@property (copy, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEvent:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)eventCount;
- (id)initWithJSON:(id)a0;
- (id)eventAtIndex:(unsigned long long)a0;
- (void)deleteEvent;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearEvent;
- (void)deleteApp_id;
- (void)deleteBatch_info;
- (id)suppressMessageUnderConditions;

@end
