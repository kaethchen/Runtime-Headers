@class NSData;

@interface ORCHSchemaORCHNLRouterBridgeRoutingDecision : SISchemaInstrumentationMessage {
    struct { unsigned char routingDecisionSource : 1; unsigned char routerDecisionType : 1; } _has;
}

@property (nonatomic) int routingDecisionSource;
@property (nonatomic) BOOL hasRoutingDecisionSource;
@property (nonatomic) int routerDecisionType;
@property (nonatomic) BOOL hasRouterDecisionType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRouterDecisionType;
- (void)deleteRoutingDecisionSource;
- (id)suppressMessageUnderConditions;

@end
