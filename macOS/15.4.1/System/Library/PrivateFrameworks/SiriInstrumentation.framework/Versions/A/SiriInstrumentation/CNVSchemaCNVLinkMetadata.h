@class NSString, NSData, SISchemaUUID;

@interface CNVSchemaCNVLinkMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char systemProtocol : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *linkActionId;
@property (nonatomic) BOOL hasLinkActionId;
@property (nonatomic) int systemProtocol;
@property (nonatomic) BOOL hasSystemProtocol;
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
- (void)deleteLinkActionId;
- (void)deleteLinkId;
- (void)deleteSystemProtocol;
- (id)suppressMessageUnderConditions;

@end
