@class NSArray, NSData, IFTSchemaIFTTypeInstance;

@interface IFTSchemaIFTStructuredSearchExpression : SISchemaInstrumentationMessage {
    struct { unsigned char isExpanded : 1; } _has;
}

@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL hasIsExpanded;
@property (copy, nonatomic) NSArray *properties;
@property (retain, nonatomic) IFTSchemaIFTTypeInstance *returnType;
@property (nonatomic) BOOL hasReturnType;
@property (copy, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)clearProperties;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)propertiesCount;
- (void)addProperties:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteIsExpanded;
- (void)deleteParameters;
- (void)deleteProperties;
- (void)deleteReturnType;
- (id)suppressMessageUnderConditions;

@end
