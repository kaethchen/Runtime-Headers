@class NSData;

@interface POMMESSchemaPOMMESCacheMaintenanceEnded : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfEntriesUpdated : 1; unsigned char totalCacheEntries : 1; unsigned char timeSinceMaintenanceStartedInSeconds : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) unsigned int numberOfEntriesUpdated;
@property (nonatomic) BOOL hasNumberOfEntriesUpdated;
@property (nonatomic) unsigned int totalCacheEntries;
@property (nonatomic) BOOL hasTotalCacheEntries;
@property (nonatomic) unsigned int timeSinceMaintenanceStartedInSeconds;
@property (nonatomic) BOOL hasTimeSinceMaintenanceStartedInSeconds;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (void)deleteNumberOfEntriesUpdated;
- (void)deleteTimeSinceMaintenanceStartedInSeconds;
- (void)deleteTotalCacheEntries;
- (id)suppressMessageUnderConditions;

@end
