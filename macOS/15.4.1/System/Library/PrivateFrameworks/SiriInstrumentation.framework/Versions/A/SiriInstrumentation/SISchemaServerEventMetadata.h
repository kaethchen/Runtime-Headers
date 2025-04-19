@class NSData, NSString;

@interface SISchemaServerEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char timestampNs : 1; } _has;
}

@property (copy, nonatomic) NSData *turnID;
@property (nonatomic) BOOL hasTurnID;
@property (nonatomic) long long timestampNs;
@property (nonatomic) BOOL hasTimestampNs;
@property (copy, nonatomic) NSData *siriDeviceID;
@property (nonatomic) BOOL hasSiriDeviceID;
@property (copy, nonatomic) NSString *serverPod;
@property (nonatomic) BOOL hasServerPod;
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
- (void)deleteServerPod;
- (void)deleteSiriDeviceID;
- (void)deleteTimestampNs;
- (void)deleteTurnID;
- (id)suppressMessageUnderConditions;

@end
