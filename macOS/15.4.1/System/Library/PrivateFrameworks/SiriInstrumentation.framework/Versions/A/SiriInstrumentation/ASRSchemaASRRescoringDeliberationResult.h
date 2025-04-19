@class NSArray, NSData, SISchemaUUID;

@interface ASRSchemaASRRescoringDeliberationResult : SISchemaInstrumentationMessage {
    struct { unsigned char rescoringResultDuration : 1; unsigned char rescoringFinalizeDuration : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *rescoringLinkId;
@property (nonatomic) BOOL hasRescoringLinkId;
@property (nonatomic) float rescoringResultDuration;
@property (nonatomic) BOOL hasRescoringResultDuration;
@property (nonatomic) float rescoringFinalizeDuration;
@property (nonatomic) BOOL hasRescoringFinalizeDuration;
@property (copy, nonatomic) NSArray *rescoringEvents;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRescoringFinalizeDuration;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addRescoringEvents:(id)a0;
- (void)clearRescoringEvents;
- (void)deleteRescoringEvents;
- (void)deleteRescoringLinkId;
- (void)deleteRescoringResultDuration;
- (id)rescoringEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)rescoringEventsCount;
- (id)suppressMessageUnderConditions;

@end
