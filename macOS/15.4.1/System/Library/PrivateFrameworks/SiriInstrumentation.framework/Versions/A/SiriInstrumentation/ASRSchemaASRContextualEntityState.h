@class NSData, QDSchemaQDEntityType;

@interface ASRSchemaASRContextualEntityState : SISchemaInstrumentationMessage {
    struct { unsigned char contextType : 1; unsigned char enrollmentResult : 1; unsigned char rejectReason : 1; } _has;
}

@property (nonatomic) int contextType;
@property (nonatomic) BOOL hasContextType;
@property (retain, nonatomic) QDSchemaQDEntityType *entityType;
@property (nonatomic) BOOL hasEntityType;
@property (nonatomic) int enrollmentResult;
@property (nonatomic) BOOL hasEnrollmentResult;
@property (nonatomic) int rejectReason;
@property (nonatomic) BOOL hasRejectReason;
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
- (void)deleteContextType;
- (void)deleteEnrollmentResult;
- (void)deleteEntityType;
- (void)deleteRejectReason;
- (id)suppressMessageUnderConditions;

@end
