@class NSString, NSData, SISchemaUUID;

@interface FLOWSchemaFLOWSmsAttachmentMetadataTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *foregroundAppBundleId;
@property (nonatomic) BOOL hasForegroundAppBundleId;
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
- (void)deleteForegroundAppBundleId;
- (void)deleteLinkId;
- (id)suppressMessageUnderConditions;

@end
