@class NSString, NSData;

@interface IFTSchemaIFTToolDefinition : SISchemaInstrumentationMessage {
    struct { unsigned char toolType : 1; } _has;
}

@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) BOOL hasToolId;
@property (nonatomic) int toolType;
@property (nonatomic) BOOL hasToolType;
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
- (void)deleteToolId;
- (void)deleteToolType;
- (id)suppressMessageUnderConditions;

@end
