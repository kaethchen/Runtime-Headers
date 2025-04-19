@class NSData, SISchemaUUID;

@interface JRSchemaJREntitySimilarityRow : SISchemaInstrumentationMessage {
    struct { unsigned char similarityScore : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *candidateA;
@property (nonatomic) BOOL hasCandidateA;
@property (retain, nonatomic) SISchemaUUID *candidateB;
@property (nonatomic) BOOL hasCandidateB;
@property (nonatomic) float similarityScore;
@property (nonatomic) BOOL hasSimilarityScore;
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
- (void)deleteCandidateA;
- (void)deleteCandidateB;
- (void)deleteSimilarityScore;
- (id)suppressMessageUnderConditions;

@end
