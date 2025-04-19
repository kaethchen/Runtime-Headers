@class NSData, ORCHSchemaORCHNLRouterBridgeRoutingDecision;

@interface ORCHSchemaORCHNLRouterBridgeFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorDomain : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) int errorDomain;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (retain, nonatomic) ORCHSchemaORCHNLRouterBridgeRoutingDecision *routingDecision;
@property (nonatomic) BOOL hasRoutingDecision;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteErrorDomain;
- (void)deleteRoutingDecision;
- (id)suppressMessageUnderConditions;

@end
