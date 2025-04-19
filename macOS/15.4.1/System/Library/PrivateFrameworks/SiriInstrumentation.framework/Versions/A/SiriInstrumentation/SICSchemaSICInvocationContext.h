@class SICSchemaSICInvocationCancelled, SICSchemaSICInvocationStarted, NSData, SICSchemaSICInvocationEnded;

@interface SICSchemaSICInvocationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SICSchemaSICInvocationStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) SICSchemaSICInvocationEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) SICSchemaSICInvocationCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
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
- (void)deleteCancelled;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEnded;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
