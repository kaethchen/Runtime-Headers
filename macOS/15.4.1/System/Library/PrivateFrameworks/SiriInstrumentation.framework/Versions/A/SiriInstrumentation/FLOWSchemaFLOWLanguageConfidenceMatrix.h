@class NSArray, NSData;

@interface FLOWSchemaFLOWLanguageConfidenceMatrix : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *languageConfidenceArrays;
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
- (void)addLanguageConfidenceArrays:(id)a0;
- (void)clearLanguageConfidenceArrays;
- (void)deleteLanguageConfidenceArrays;
- (id)languageConfidenceArraysAtIndex:(unsigned long long)a0;
- (unsigned long long)languageConfidenceArraysCount;
- (id)suppressMessageUnderConditions;

@end
