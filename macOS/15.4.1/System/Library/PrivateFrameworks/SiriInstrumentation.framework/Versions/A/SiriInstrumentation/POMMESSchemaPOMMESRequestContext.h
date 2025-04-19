@class POMMESSchemaPOMMESRequestEnded, POMMESSchemaPOMMESRequestFailed, POMMESSchemaPOMMESRequestStarted, POMMESSchemaPOMMESRequestUnableToHandle, NSData;

@interface POMMESSchemaPOMMESRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) POMMESSchemaPOMMESRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) POMMESSchemaPOMMESRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) POMMESSchemaPOMMESRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) POMMESSchemaPOMMESRequestUnableToHandle *cancelled;
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
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
