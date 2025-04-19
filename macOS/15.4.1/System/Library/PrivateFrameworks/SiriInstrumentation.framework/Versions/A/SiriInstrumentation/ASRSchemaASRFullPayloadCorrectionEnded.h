@class NSData, SISchemaUUID;

@interface ASRSchemaASRFullPayloadCorrectionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char responseTimeInNs : 1; } _has;
}

@property (nonatomic) unsigned long long responseTimeInNs;
@property (nonatomic) BOOL hasResponseTimeInNs;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
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
- (void)deleteLinkId;
- (void)deleteResponseTimeInNs;
- (id)suppressMessageUnderConditions;

@end
