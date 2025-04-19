@class NSString, NSData, SISchemaUUID;

@interface ASRSchemaASRRescoringDeliberationResultTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *originalTranscript;
@property (nonatomic) BOOL hasOriginalTranscript;
@property (copy, nonatomic) NSString *modifiedTranscript;
@property (nonatomic) BOOL hasModifiedTranscript;
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
- (void)deleteModifiedTranscript;
- (void)deleteOriginalTranscript;
- (id)suppressMessageUnderConditions;

@end
