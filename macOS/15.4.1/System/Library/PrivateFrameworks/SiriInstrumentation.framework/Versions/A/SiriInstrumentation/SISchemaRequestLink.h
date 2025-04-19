@class NSData, SISchemaRequestLinkInfo;

@interface SISchemaRequestLink : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaRequestLinkInfo *source;
@property (nonatomic) BOOL hasSource;
@property (retain, nonatomic) SISchemaRequestLinkInfo *target;
@property (nonatomic) BOOL hasTarget;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteSource;
- (void)deleteTarget;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;

@end
