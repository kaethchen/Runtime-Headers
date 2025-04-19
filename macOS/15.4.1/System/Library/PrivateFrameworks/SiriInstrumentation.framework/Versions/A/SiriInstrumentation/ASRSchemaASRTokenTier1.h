@class NSString, NSData;

@interface ASRSchemaASRTokenTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *phoneSequence;
@property (nonatomic) BOOL hasPhoneSequence;
@property (copy, nonatomic) NSString *ipaPhoneSequence;
@property (nonatomic) BOOL hasIpaPhoneSequence;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteText;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteIpaPhoneSequence;
- (void)deletePhoneSequence;
- (id)suppressMessageUnderConditions;

@end
