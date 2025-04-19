@class NSData, SISchemaUUID;

@interface NETSchemaNETClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char provider : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *netId;
@property (nonatomic) BOOL hasNetId;
@property (retain, nonatomic) SISchemaUUID *networkConnectionId;
@property (nonatomic) BOOL hasNetworkConnectionId;
@property (nonatomic) int provider;
@property (nonatomic) BOOL hasProvider;
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
- (void)deleteNetId;
- (void)deleteNetworkConnectionId;
- (void)deleteProvider;
- (id)suppressMessageUnderConditions;

@end
