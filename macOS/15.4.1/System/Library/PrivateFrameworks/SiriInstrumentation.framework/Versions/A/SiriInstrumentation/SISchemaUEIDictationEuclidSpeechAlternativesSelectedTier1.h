@class SISchemaEuclidConfusionPair, NSData;

@interface SISchemaUEIDictationEuclidSpeechAlternativesSelectedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaEuclidConfusionPair *confusionPair;
@property (nonatomic) BOOL hasConfusionPair;
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
- (void)deleteConfusionPair;
- (id)suppressMessageUnderConditions;

@end
