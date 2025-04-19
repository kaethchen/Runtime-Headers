@class NSData, SISchemaUUID;

@interface ORCHSchemaORCHIntelligenceFlowQuerySent : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *plannerQueryId;
@property (nonatomic) BOOL hasPlannerQueryId;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) BOOL hasSubRequestId;
@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) BOOL hasTraceId;
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
- (void)deletePlannerQueryId;
- (void)deleteSubRequestId;
- (void)deleteTraceId;
- (void)deleteTrpId;
- (id)suppressMessageUnderConditions;

@end
