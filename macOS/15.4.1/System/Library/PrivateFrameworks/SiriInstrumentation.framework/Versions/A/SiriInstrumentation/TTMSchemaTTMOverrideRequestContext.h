@class TTMSchemaTTMOverrideRequestStarted, TTMSchemaTTMOverrideRequestFailed, NSData, TTMSchemaTTMOverrideRequestEnded;

@interface TTMSchemaTTMOverrideRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) TTMSchemaTTMOverrideRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) TTMSchemaTTMOverrideRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) TTMSchemaTTMOverrideRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
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
- (id)suppressMessageUnderConditions;

@end
