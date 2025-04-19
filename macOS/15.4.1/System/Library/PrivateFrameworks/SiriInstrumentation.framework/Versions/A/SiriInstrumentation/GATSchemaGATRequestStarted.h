@class NSData, SISchemaUUID;

@interface GATSchemaGATRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char appIntentName : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *clientTraceId;
@property (nonatomic) BOOL hasClientTraceId;
@property (nonatomic) int appIntentName;
@property (nonatomic) BOOL hasAppIntentName;
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
- (void)deleteAppIntentName;
- (void)deleteClientTraceId;
- (id)suppressMessageUnderConditions;

@end
