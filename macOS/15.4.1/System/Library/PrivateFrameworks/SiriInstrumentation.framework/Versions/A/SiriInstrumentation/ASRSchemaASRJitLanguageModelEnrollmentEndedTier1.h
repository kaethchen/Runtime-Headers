@class NSArray, NSData, SISchemaUUID;

@interface ASRSchemaASRJitLanguageModelEnrollmentEndedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *dialogContexts;
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
- (void)addDialogContext:(id)a0;
- (void)clearDialogContext;
- (void)deleteDialogContext;
- (void)deleteLinkId;
- (id)dialogContextAtIndex:(unsigned long long)a0;
- (unsigned long long)dialogContextCount;
- (id)suppressMessageUnderConditions;

@end
