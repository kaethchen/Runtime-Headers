@class NSData;

@interface CNVSchemaCNVFlowPluginLoadContextEnded : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char hasPluginCached : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) BOOL hasPluginCached;
@property (nonatomic) BOOL hasHasPluginCached;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExists;
- (void)deleteHasPluginCached;
- (id)suppressMessageUnderConditions;

@end
