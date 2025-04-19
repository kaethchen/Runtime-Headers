@class NSData;

@interface POMMESSchemaPOMMESCacheMaintenanceStarted : SISchemaInstrumentationMessage {
    struct { unsigned char timeSinceLastMaintenanceInSeconds : 1; } _has;
}

@property (nonatomic) unsigned int timeSinceLastMaintenanceInSeconds;
@property (nonatomic) BOOL hasTimeSinceLastMaintenanceInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTimeSinceLastMaintenanceInSeconds;
- (id)suppressMessageUnderConditions;

@end
