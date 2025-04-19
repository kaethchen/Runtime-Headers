@class NSData, SISchemaUUID;

@interface FLOWSchemaFLOWMediaPlayerRadioStationContext : SISchemaInstrumentationMessage {
    struct { unsigned char radioStationSubtype : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) int radioStationSubtype;
@property (nonatomic) BOOL hasRadioStationSubtype;
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
- (void)deleteRadioStationSubtype;
- (id)suppressMessageUnderConditions;

@end
