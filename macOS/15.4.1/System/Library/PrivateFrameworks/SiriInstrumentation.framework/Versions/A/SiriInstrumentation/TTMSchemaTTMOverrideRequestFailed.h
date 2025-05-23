@class NSArray, NSData;

@interface TTMSchemaTTMOverrideRequestFailed : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (copy, nonatomic) NSArray *tcuFailures;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (void)addTcuFailures:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearTcuFailures;
- (void)deleteTcuFailures;
- (id)suppressMessageUnderConditions;
- (id)tcuFailuresAtIndex:(unsigned long long)a0;
- (unsigned long long)tcuFailuresCount;

@end
