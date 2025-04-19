@class SISchemaLogicalTimestamp, NSData, SISchemaUUID;

@interface SISchemaCommonEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char emitTimestamp : 1; } _has;
}

@property (retain, nonatomic) SISchemaLogicalTimestamp *timestamp;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) SISchemaUUID *testFingerprint;
@property (nonatomic) BOOL hasTestFingerprint;
@property (retain, nonatomic) SISchemaUUID *eventId;
@property (nonatomic) BOOL hasEventId;
@property (nonatomic) long long emitTimestamp;
@property (nonatomic) BOOL hasEmitTimestamp;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTimestamp;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEmitTimestamp;
- (void)deleteEventId;
- (void)deleteTestFingerprint;
- (id)suppressMessageUnderConditions;

@end
