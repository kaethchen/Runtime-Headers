@class NSData;

@interface SRSchemaSRCheckErrorResponse : SISchemaInstrumentationMessage {
    struct { unsigned char predictedErrorType : 1; unsigned char selectedRecoveryStrategy : 1; } _has;
}

@property (nonatomic) int predictedErrorType;
@property (nonatomic) BOOL hasPredictedErrorType;
@property (nonatomic) int selectedRecoveryStrategy;
@property (nonatomic) BOOL hasSelectedRecoveryStrategy;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePredictedErrorType;
- (void)deleteSelectedRecoveryStrategy;
- (id)suppressMessageUnderConditions;

@end
