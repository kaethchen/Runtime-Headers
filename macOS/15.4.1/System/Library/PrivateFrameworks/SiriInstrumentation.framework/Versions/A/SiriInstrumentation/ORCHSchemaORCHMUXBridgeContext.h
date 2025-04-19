@class ORCHSchemaORCHMUXEphemeralToAggregationIdentifierMapContext, ORCHSchemaORCHMUXRequestEnded, NSData, ORCHSchemaORCHMUXRequestStarted;

@interface ORCHSchemaORCHMUXBridgeContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHMUXRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHMUXRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) ORCHSchemaORCHMUXEphemeralToAggregationIdentifierMapContext *ephemeralToAggregationIdentifierMap;
@property (nonatomic) BOOL hasEphemeralToAggregationIdentifierMap;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEnded;
- (void)deleteEphemeralToAggregationIdentifierMap;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
