@class NSData;

@interface CNVSchemaCNVIntentEagerExecutionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char plugin : 1; } _has;
}

@property (nonatomic) int plugin;
@property (nonatomic) BOOL hasPlugin;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePlugin;
- (id)suppressMessageUnderConditions;

@end
