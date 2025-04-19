@class NSData;

@interface POMMESSchemaPOMMESSearchRequestClassifierExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char isPegasusSearchPerformed : 1; unsigned char mitigationResponseDecision : 1; } _has;
}

@property (nonatomic) BOOL isPegasusSearchPerformed;
@property (nonatomic) BOOL hasIsPegasusSearchPerformed;
@property (nonatomic) int mitigationResponseDecision;
@property (nonatomic) BOOL hasMitigationResponseDecision;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsPegasusSearchPerformed;
- (void)deleteMitigationResponseDecision;
- (id)suppressMessageUnderConditions;

@end
