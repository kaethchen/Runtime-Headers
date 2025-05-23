@class NSArray, NSData, ASRSchemaASRToken;

@interface DODMLASRSchemaDODMLASRTokenInfo : SISchemaInstrumentationMessage {
    struct { unsigned char acousticCost : 1; unsigned char silenceAcousticCost : 1; } _has;
}

@property (retain, nonatomic) ASRSchemaASRToken *token;
@property (nonatomic) BOOL hasToken;
@property (nonatomic) float acousticCost;
@property (nonatomic) BOOL hasAcousticCost;
@property (nonatomic) float silenceAcousticCost;
@property (nonatomic) BOOL hasSilenceAcousticCost;
@property (copy, nonatomic) NSArray *numBackoffs;
@property (copy, nonatomic) NSArray *languageModelCosts;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteToken;
- (void)addNumBackoffs:(unsigned int)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addLanguageModelCosts:(float)a0;
- (void)clearLanguageModelCosts;
- (void)clearNumBackoffs;
- (void)deleteAcousticCost;
- (void)deleteLanguageModelCosts;
- (void)deleteNumBackoffs;
- (void)deleteSilenceAcousticCost;
- (float)languageModelCostsAtIndex:(unsigned long long)a0;
- (unsigned long long)languageModelCostsCount;
- (unsigned int)numBackoffsAtIndex:(unsigned long long)a0;
- (unsigned long long)numBackoffsCount;
- (id)suppressMessageUnderConditions;

@end
