@class NSData;

@interface ODDSiriSchemaODDReliabilityCounts : SISchemaInstrumentationMessage {
    struct { unsigned char reliabilityRequestCount : 1; unsigned char reliabilityTurnCount : 1; unsigned char clientErrorCount : 1; unsigned char undesiredResponseCount : 1; unsigned char fatalResponseCount : 1; unsigned char failureResponseCount : 1; unsigned char siriUnavailableResponseCount : 1; } _has;
}

@property (nonatomic) unsigned int reliabilityRequestCount;
@property (nonatomic) BOOL hasReliabilityRequestCount;
@property (nonatomic) unsigned int reliabilityTurnCount;
@property (nonatomic) BOOL hasReliabilityTurnCount;
@property (nonatomic) unsigned int clientErrorCount;
@property (nonatomic) BOOL hasClientErrorCount;
@property (nonatomic) unsigned int undesiredResponseCount;
@property (nonatomic) BOOL hasUndesiredResponseCount;
@property (nonatomic) unsigned int fatalResponseCount;
@property (nonatomic) BOOL hasFatalResponseCount;
@property (nonatomic) unsigned int failureResponseCount;
@property (nonatomic) BOOL hasFailureResponseCount;
@property (nonatomic) unsigned int siriUnavailableResponseCount;
@property (nonatomic) BOOL hasSiriUnavailableResponseCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteClientErrorCount;
- (void)deleteFailureResponseCount;
- (void)deleteFatalResponseCount;
- (void)deleteReliabilityRequestCount;
- (void)deleteReliabilityTurnCount;
- (void)deleteSiriUnavailableResponseCount;
- (void)deleteUndesiredResponseCount;
- (id)suppressMessageUnderConditions;

@end
