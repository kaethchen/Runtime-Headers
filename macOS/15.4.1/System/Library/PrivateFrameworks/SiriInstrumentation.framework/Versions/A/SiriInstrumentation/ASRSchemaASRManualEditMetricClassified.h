@class NSData, SISchemaUUID;

@interface ASRSchemaASRManualEditMetricClassified : SISchemaInstrumentationMessage {
    struct { unsigned char numDeletions : 1; unsigned char numInsertions : 1; unsigned char numSubstitutions : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalAsrId;
@property (nonatomic) BOOL hasOriginalAsrId;
@property (nonatomic) int numDeletions;
@property (nonatomic) BOOL hasNumDeletions;
@property (nonatomic) int numInsertions;
@property (nonatomic) BOOL hasNumInsertions;
@property (nonatomic) int numSubstitutions;
@property (nonatomic) BOOL hasNumSubstitutions;
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
- (void)deleteNumDeletions;
- (void)deleteNumInsertions;
- (void)deleteNumSubstitutions;
- (void)deleteOriginalAsrId;
- (id)suppressMessageUnderConditions;

@end
