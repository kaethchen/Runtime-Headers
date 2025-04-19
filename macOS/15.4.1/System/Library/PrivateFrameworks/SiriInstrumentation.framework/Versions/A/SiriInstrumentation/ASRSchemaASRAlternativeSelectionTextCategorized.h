@class NSString, NSData, SISchemaUUID;

@interface ASRSchemaASRAlternativeSelectionTextCategorized : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalAsrId;
@property (nonatomic) BOOL hasOriginalAsrId;
@property (copy, nonatomic) NSString *fullCorrectedText;
@property (nonatomic) BOOL hasFullCorrectedText;
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
- (void)deleteFullCorrectedText;
- (void)deleteOriginalAsrId;
- (id)suppressMessageUnderConditions;

@end
