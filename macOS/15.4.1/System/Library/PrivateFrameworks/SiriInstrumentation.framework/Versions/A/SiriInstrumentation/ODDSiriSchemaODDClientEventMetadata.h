@class ODDSiriSchemaODDTimeInterval, NSData, SISchemaUUID;

@interface ODDSiriSchemaODDClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char eventTimestampInMsSince1970 : 1; unsigned char userAggregationIdRotationTimestampMs : 1; unsigned char userAggregationIdExpirationTimestampMs : 1; unsigned char eventOrigin : 1; unsigned char isLongLivedIDUploadDisabled : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *oddId;
@property (nonatomic) BOOL hasOddId;
@property (nonatomic) unsigned long long eventTimestampInMsSince1970;
@property (nonatomic) BOOL hasEventTimestampInMsSince1970;
@property (retain, nonatomic) ODDSiriSchemaODDTimeInterval *aggregationInterval;
@property (nonatomic) BOOL hasAggregationInterval;
@property (retain, nonatomic) SISchemaUUID *deviceAggregationId;
@property (nonatomic) BOOL hasDeviceAggregationId;
@property (nonatomic) unsigned long long userAggregationIdRotationTimestampMs;
@property (nonatomic) BOOL hasUserAggregationIdRotationTimestampMs;
@property (nonatomic) unsigned long long userAggregationIdExpirationTimestampMs;
@property (nonatomic) BOOL hasUserAggregationIdExpirationTimestampMs;
@property (nonatomic) int eventOrigin;
@property (nonatomic) BOOL hasEventOrigin;
@property (retain, nonatomic) SISchemaUUID *userAggregationId;
@property (nonatomic) BOOL hasUserAggregationId;
@property (nonatomic) BOOL isLongLivedIDUploadDisabled;
@property (nonatomic) BOOL hasIsLongLivedIDUploadDisabled;
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
- (void)deleteAggregationInterval;
- (void)deleteDeviceAggregationId;
- (void)deleteEventOrigin;
- (void)deleteEventTimestampInMsSince1970;
- (void)deleteIsLongLivedIDUploadDisabled;
- (void)deleteOddId;
- (void)deleteUserAggregationId;
- (void)deleteUserAggregationIdExpirationTimestampMs;
- (void)deleteUserAggregationIdRotationTimestampMs;
- (id)suppressMessageUnderConditions;

@end
