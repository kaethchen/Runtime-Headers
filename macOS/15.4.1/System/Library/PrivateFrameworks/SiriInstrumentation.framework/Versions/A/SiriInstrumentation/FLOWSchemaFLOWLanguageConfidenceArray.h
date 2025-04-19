@class NSArray, NSData;

@interface FLOWSchemaFLOWLanguageConfidenceArray : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *languageConfidences;
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
- (void)addLanguageConfidences:(id)a0;
- (void)clearLanguageConfidences;
- (void)deleteLanguageConfidences;
- (id)languageConfidencesAtIndex:(unsigned long long)a0;
- (unsigned long long)languageConfidencesCount;
- (id)suppressMessageUnderConditions;

@end
