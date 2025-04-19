@class NSData, SISchemaUUID;

@interface JRSchemaHistoricalLocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char logOfTimeElapsedInSeconds : 1; unsigned char bucketedDistance : 1; } _has;
}

@property (nonatomic) float logOfTimeElapsedInSeconds;
@property (nonatomic) BOOL hasLogOfTimeElapsedInSeconds;
@property (retain, nonatomic) SISchemaUUID *anonymizedLocationNameId;
@property (nonatomic) BOOL hasAnonymizedLocationNameId;
@property (retain, nonatomic) SISchemaUUID *anonymizedLocationTypeId;
@property (nonatomic) BOOL hasAnonymizedLocationTypeId;
@property (nonatomic) int bucketedDistance;
@property (nonatomic) BOOL hasBucketedDistance;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLogOfTimeElapsedInSeconds;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAnonymizedLocationNameId;
- (void)deleteAnonymizedLocationTypeId;
- (void)deleteBucketedDistance;
- (id)suppressMessageUnderConditions;

@end
