@class NSData;

@interface PNRODSchemaPNRODMetricDuration : SISchemaInstrumentationMessage {
    struct { unsigned char metricValue : 1; unsigned char startTimestamp : 1; unsigned char startEventIndex : 1; unsigned char endEventIndex : 1; } _has;
}

@property (nonatomic) double metricValue;
@property (nonatomic) BOOL hasMetricValue;
@property (nonatomic) long long startTimestamp;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) long long startEventIndex;
@property (nonatomic) BOOL hasStartEventIndex;
@property (nonatomic) long long endEventIndex;
@property (nonatomic) BOOL hasEndEventIndex;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEndEventIndex;
- (void)deleteMetricValue;
- (void)deleteStartEventIndex;
- (void)deleteStartTimestamp;
- (id)suppressMessageUnderConditions;

@end
