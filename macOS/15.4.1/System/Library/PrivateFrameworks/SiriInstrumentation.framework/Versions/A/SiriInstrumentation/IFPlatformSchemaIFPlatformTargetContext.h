@class IFPlatformSchemaIFPlatformTargetFailed, NSData, IFPlatformSchemaIFPlatformTargetEnded, SISchemaUUID, IFPlatformSchemaIFPlatformTargetStarted;

@interface IFPlatformSchemaIFPlatformTargetContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFPlatformSchemaIFPlatformTargetStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) IFPlatformSchemaIFPlatformTargetEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) IFPlatformSchemaIFPlatformTargetFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) BOOL hasTraceId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteTraceId;
- (id)suppressMessageUnderConditions;

@end
