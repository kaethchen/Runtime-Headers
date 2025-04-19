@class NSArray, NSData;

@interface JRSchemaIntervalUntilStartTime : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *candidateBooleanMasks;
@property (copy, nonatomic) NSArray *candidateTimeIntervalMatrixs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addCandidateTimeIntervalMatrix:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addCandidateBooleanMask:(id)a0;
- (id)candidateBooleanMaskAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateBooleanMaskCount;
- (id)candidateTimeIntervalMatrixAtIndex:(unsigned long long)a0;
- (unsigned long long)candidateTimeIntervalMatrixCount;
- (void)clearCandidateBooleanMask;
- (void)clearCandidateTimeIntervalMatrix;
- (void)deleteCandidateBooleanMask;
- (void)deleteCandidateTimeIntervalMatrix;
- (id)suppressMessageUnderConditions;

@end
