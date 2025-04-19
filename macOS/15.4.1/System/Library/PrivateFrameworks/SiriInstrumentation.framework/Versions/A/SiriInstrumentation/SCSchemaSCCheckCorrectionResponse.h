@class NSArray, NSData;

@interface SCSchemaSCCheckCorrectionResponse : SISchemaInstrumentationMessage {
    struct { unsigned char candidateCount : 1; } _has;
}

@property (copy, nonatomic) NSArray *results;
@property (nonatomic) unsigned int candidateCount;
@property (nonatomic) BOOL hasCandidateCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addResults:(id)a0;
- (void)clearResults;
- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCandidateCount;
- (void)deleteResults;
- (id)suppressMessageUnderConditions;

@end
