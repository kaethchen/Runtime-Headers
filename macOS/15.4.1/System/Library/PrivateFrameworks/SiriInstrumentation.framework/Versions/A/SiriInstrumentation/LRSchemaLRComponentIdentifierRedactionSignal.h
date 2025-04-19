@class NSData, SISchemaRequestLinkInfo;

@interface LRSchemaLRComponentIdentifierRedactionSignal : SISchemaInstrumentationMessage {
    struct { unsigned char redactConnectedEvents : 1; } _has;
}

@property (retain, nonatomic) SISchemaRequestLinkInfo *componentId;
@property (nonatomic) BOOL hasComponentId;
@property (nonatomic) BOOL redactConnectedEvents;
@property (nonatomic) BOOL hasRedactConnectedEvents;
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
- (void)deleteComponentId;
- (void)deleteRedactConnectedEvents;
- (id)suppressMessageUnderConditions;

@end
