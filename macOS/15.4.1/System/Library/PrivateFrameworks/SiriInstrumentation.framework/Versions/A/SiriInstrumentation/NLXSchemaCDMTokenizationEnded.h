@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMTokenizationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char inputType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (copy, nonatomic) NSArray *tokenChains;
@property (nonatomic) int inputType;
@property (nonatomic) BOOL hasInputType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addTokenChains:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteContextId;
- (void)deleteInputType;
- (void)clearTokenChains;
- (void)deleteTokenChains;
- (id)suppressMessageUnderConditions;
- (id)tokenChainsAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenChainsCount;

@end
