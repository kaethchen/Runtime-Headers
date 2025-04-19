@class GATSchemaGATRequestEnded, GATSchemaGATRequestStarted, GATSchemaGATRequestHandoff, NSData, GATSchemaGATRequestFailed, GATSchemaGATRequestCanceled;

@interface GATSchemaGATRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) GATSchemaGATRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) GATSchemaGATRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) GATSchemaGATRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) GATSchemaGATRequestCanceled *canceled;
@property (nonatomic) BOOL hasCanceled;
@property (retain, nonatomic) GATSchemaGATRequestHandoff *handoff;
@property (nonatomic) BOOL hasHandoff;
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
- (void)deleteCanceled;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteHandoff;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
