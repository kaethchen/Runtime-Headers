@class NSData, SISchemaUUID;

@interface ODBATCHSiriSchemaODBATCHTurnRestatementScore : SISchemaInstrumentationMessage {
    struct { unsigned char utteranceRestatementScore : 1; unsigned char semanticSimilarityScore : 1; unsigned char isCrossDevice : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *currentTurnId;
@property (nonatomic) BOOL hasCurrentTurnId;
@property (retain, nonatomic) SISchemaUUID *nextTurnId;
@property (nonatomic) BOOL hasNextTurnId;
@property (nonatomic) double utteranceRestatementScore;
@property (nonatomic) BOOL hasUtteranceRestatementScore;
@property (nonatomic) double semanticSimilarityScore;
@property (nonatomic) BOOL hasSemanticSimilarityScore;
@property (nonatomic) BOOL isCrossDevice;
@property (nonatomic) BOOL hasIsCrossDevice;
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
- (void)deleteUtteranceRestatementScore;
- (void)deleteCurrentTurnId;
- (void)deleteIsCrossDevice;
- (void)deleteNextTurnId;
- (void)deleteSemanticSimilarityScore;
- (id)suppressMessageUnderConditions;

@end
