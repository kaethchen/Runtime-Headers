@class SISchemaAnyEvent, NSData, SISchemaCommonEventMetadata;

@interface SISchemaOrderedAnyEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaCommonEventMetadata *metadata;
@property (nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) SISchemaAnyEvent *event;
@property (nonatomic) BOOL hasEvent;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEvent;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteMetadata;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;

@end
