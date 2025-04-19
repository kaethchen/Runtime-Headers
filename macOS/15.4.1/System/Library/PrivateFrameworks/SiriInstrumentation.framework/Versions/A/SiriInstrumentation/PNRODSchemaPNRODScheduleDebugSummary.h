@class NSData, SISchemaUUID;

@interface PNRODSchemaPNRODScheduleDebugSummary : SISchemaInstrumentationMessage {
    struct { unsigned char numRequestsRead : 1; unsigned char numRequestsWrite : 1; unsigned char processingWaitTimeInSecond : 1; unsigned char processingTimeInSecond : 1; unsigned char eventTimestampInMsSince1970 : 1; unsigned char delayFromLastBiomeBookmarkInSecond : 1; unsigned char failureReasonIndex : 1; unsigned char dataSourceIndex : 1; unsigned char workerIndex : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *scheduleId;
@property (nonatomic) BOOL hasScheduleId;
@property (nonatomic) unsigned int numRequestsRead;
@property (nonatomic) BOOL hasNumRequestsRead;
@property (nonatomic) unsigned int numRequestsWrite;
@property (nonatomic) BOOL hasNumRequestsWrite;
@property (nonatomic) double processingWaitTimeInSecond;
@property (nonatomic) BOOL hasProcessingWaitTimeInSecond;
@property (nonatomic) double processingTimeInSecond;
@property (nonatomic) BOOL hasProcessingTimeInSecond;
@property (nonatomic) unsigned long long eventTimestampInMsSince1970;
@property (nonatomic) BOOL hasEventTimestampInMsSince1970;
@property (nonatomic) double delayFromLastBiomeBookmarkInSecond;
@property (nonatomic) BOOL hasDelayFromLastBiomeBookmarkInSecond;
@property (nonatomic) long long failureReasonIndex;
@property (nonatomic) BOOL hasFailureReasonIndex;
@property (nonatomic) long long dataSourceIndex;
@property (nonatomic) BOOL hasDataSourceIndex;
@property (nonatomic) long long workerIndex;
@property (nonatomic) BOOL hasWorkerIndex;
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
- (void)deleteDataSourceIndex;
- (void)deleteDelayFromLastBiomeBookmarkInSecond;
- (void)deleteEventTimestampInMsSince1970;
- (void)deleteFailureReasonIndex;
- (void)deleteNumRequestsRead;
- (void)deleteNumRequestsWrite;
- (void)deleteProcessingTimeInSecond;
- (void)deleteProcessingWaitTimeInSecond;
- (void)deleteScheduleId;
- (void)deleteWorkerIndex;
- (id)suppressMessageUnderConditions;

@end
