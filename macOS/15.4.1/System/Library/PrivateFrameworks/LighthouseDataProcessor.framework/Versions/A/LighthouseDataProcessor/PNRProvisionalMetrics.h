@class NSString, NSData;

@interface PNRProvisionalMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char metricsValue : 1; unsigned char startTimestamp : 1; unsigned char endTimestamp : 1; } _has;
}

@property (nonatomic) double metricsValue;
@property (nonatomic) BOOL hasMetricsValue;
@property (nonatomic) long long startTimestamp;
@property (nonatomic) BOOL hasStartTimestamp;
@property (copy, nonatomic) NSString *startTimestampEventName;
@property (nonatomic) BOOL hasStartTimestampEventName;
@property (nonatomic) long long endTimestamp;
@property (nonatomic) BOOL hasEndTimestamp;
@property (copy, nonatomic) NSString *endTimestampEventName;
@property (nonatomic) BOOL hasEndTimestampEventName;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteStartTimestamp;
- (void)deleteEndTimestamp;
- (void)deleteEndTimestampEventName;
- (void)deleteMetricsValue;
- (void)deleteStartTimestampEventName;

@end
