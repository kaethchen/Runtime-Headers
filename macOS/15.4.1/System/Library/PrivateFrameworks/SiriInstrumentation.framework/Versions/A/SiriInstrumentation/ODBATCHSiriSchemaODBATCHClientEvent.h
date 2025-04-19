@class ODBATCHSiriSchemaODBATCHDataReported, SISchemaInstrumentationMessage, ODBATCHSiriSchemaODBATCHTurnRestatementScoresReported, NSData, ODBATCHSiriSchemaODBATCHClientEventMetadata;

@interface ODBATCHSiriSchemaODBATCHClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ODBATCHSiriSchemaODBATCHClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ODBATCHSiriSchemaODBATCHDataReported *odbatchDataReported;
@property (nonatomic) BOOL hasOdbatchDataReported;
@property (retain, nonatomic) ODBATCHSiriSchemaODBATCHTurnRestatementScoresReported *turnRestatementScoresReported;
@property (nonatomic) BOOL hasTurnRestatementScoresReported;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)clockIsolationLevel;
- (void)deleteEventMetadata;
- (void)deleteOdbatchDataReported;
- (void)deleteTurnRestatementScoresReported;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
