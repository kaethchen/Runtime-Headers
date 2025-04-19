@class FLOWSchemaFLOWSmsAttachmentMetadata, NSData, FLOWSchemaFLOWSmsTextContentMetadata;

@interface FLOWSchemaFLOWSmsTextContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWSchemaFLOWSmsTextContentMetadata *smsTextContentMetadata;
@property (nonatomic) BOOL hasSmsTextContentMetadata;
@property (retain, nonatomic) FLOWSchemaFLOWSmsAttachmentMetadata *smsAttachmentMetadata;
@property (nonatomic) BOOL hasSmsAttachmentMetadata;
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
- (void)deleteSmsAttachmentMetadata;
- (void)deleteSmsTextContentMetadata;
- (id)suppressMessageUnderConditions;

@end
