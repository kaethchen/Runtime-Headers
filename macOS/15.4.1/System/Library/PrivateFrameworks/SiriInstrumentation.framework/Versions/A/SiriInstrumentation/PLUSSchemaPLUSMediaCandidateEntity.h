@class NSString, NSArray, NSData;

@interface PLUSSchemaPLUSMediaCandidateEntity : SISchemaInstrumentationMessage {
    struct { unsigned char nominated : 1; unsigned char confidence : 1; } _has;
}

@property (copy, nonatomic) NSString *entityAdamId;
@property (nonatomic) BOOL hasEntityAdamId;
@property (nonatomic) BOOL nominated;
@property (nonatomic) BOOL hasNominated;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasConfidence;
@property (copy, nonatomic) NSArray *entityFeedbackHistorys;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNominated;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addEntityFeedbackHistory:(id)a0;
- (void)clearEntityFeedbackHistory;
- (void)deleteConfidence;
- (void)deleteEntityAdamId;
- (void)deleteEntityFeedbackHistory;
- (id)entityFeedbackHistoryAtIndex:(unsigned long long)a0;
- (unsigned long long)entityFeedbackHistoryCount;
- (id)suppressMessageUnderConditions;

@end
