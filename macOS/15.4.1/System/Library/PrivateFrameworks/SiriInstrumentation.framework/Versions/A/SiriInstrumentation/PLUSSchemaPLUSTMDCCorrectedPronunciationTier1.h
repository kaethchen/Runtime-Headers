@class NSString, NSData;

@interface PLUSSchemaPLUSTMDCCorrectedPronunciationTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *firstNamePhonemes;
@property (nonatomic) BOOL hasFirstNamePhonemes;
@property (copy, nonatomic) NSString *lastNamePhonemes;
@property (nonatomic) BOOL hasLastNamePhonemes;
@property (copy, nonatomic) NSString *nicknamePhonemes;
@property (nonatomic) BOOL hasNicknamePhonemes;
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
- (void)deleteFirstNamePhonemes;
- (void)deleteLastNamePhonemes;
- (void)deleteNicknamePhonemes;
- (id)suppressMessageUnderConditions;

@end
