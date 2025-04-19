@class NSData, SISchemaUUID;

@interface ORCHSchemaORCHIntelligenceFlowSubRequestFallback : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originSubRequestId;
@property (nonatomic) BOOL hasOriginSubRequestId;
@property (retain, nonatomic) SISchemaUUID *fallbackSubRequestId;
@property (nonatomic) BOOL hasFallbackSubRequestId;
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
- (void)deleteFallbackSubRequestId;
- (void)deleteOriginSubRequestId;
- (id)suppressMessageUnderConditions;

@end
