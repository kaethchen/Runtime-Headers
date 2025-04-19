@class NSData, SISchemaUUID;

@interface MTSchemaMTFrameworkRequestResponseReceived : SISchemaInstrumentationMessage {
    struct { unsigned char requestRoute : 1; unsigned char numSentences : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *frameworkRequestId;
@property (nonatomic) BOOL hasFrameworkRequestId;
@property (nonatomic) int requestRoute;
@property (nonatomic) BOOL hasRequestRoute;
@property (nonatomic) unsigned int numSentences;
@property (nonatomic) BOOL hasNumSentences;
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
- (void)deleteFrameworkRequestId;
- (void)deleteNumSentences;
- (void)deleteRequestRoute;
- (id)suppressMessageUnderConditions;

@end
