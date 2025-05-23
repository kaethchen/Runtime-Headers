@class NSArray, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSContactSuggestion : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; unsigned char confidence : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *suggestionId;
@property (nonatomic) BOOL hasSuggestionId;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasConfidence;
@property (copy, nonatomic) NSArray *contributingGroundTruths;
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
- (id)contributingGroundTruthAtIndex:(unsigned long long)a0;
- (void)addContributingGroundTruth:(id)a0;
- (void)clearContributingGroundTruth;
- (unsigned long long)contributingGroundTruthCount;
- (void)deleteConfidence;
- (void)deleteContributingGroundTruth;
- (void)deleteSource;
- (void)deleteSuggestionId;
- (id)suppressMessageUnderConditions;

@end
