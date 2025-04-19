@class NSData;

@interface SUTSchemaTestOutcomeRecorded : SISchemaInstrumentationMessage {
    struct { unsigned char testOutcome : 1; } _has;
}

@property (nonatomic) int testOutcome;
@property (nonatomic) BOOL hasTestOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTestOutcome;
- (id)suppressMessageUnderConditions;

@end
