@class NSArray, NSData;

@interface STSchemaSTHallucinationDetectionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char hallucinationDetectionLatencyMs : 1; } _has;
}

@property (nonatomic) int hallucinationDetectionLatencyMs;
@property (nonatomic) BOOL hasHallucinationDetectionLatencyMs;
@property (copy, nonatomic) NSArray *hallucinationDetectedRules;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearHallucinationDetectedRules;
- (unsigned long long)hallucinationDetectedRulesCount;
- (void)addHallucinationDetectedRules:(int)a0;
- (void)deleteHallucinationDetectedRules;
- (void)deleteHallucinationDetectionLatencyMs;
- (int)hallucinationDetectedRulesAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end
