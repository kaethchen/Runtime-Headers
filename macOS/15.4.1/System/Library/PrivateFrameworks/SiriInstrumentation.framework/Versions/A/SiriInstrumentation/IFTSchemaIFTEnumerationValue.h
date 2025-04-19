@class IFTSchemaIFTDisplayRepresentation, IFTSchemaIFTTypeIdentifier, NSData;

@interface IFTSchemaIFTEnumerationValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTTypeIdentifier *typeIdentifier;
@property (nonatomic) BOOL hasTypeIdentifier;
@property (retain, nonatomic) IFTSchemaIFTDisplayRepresentation *displayRepresentation;
@property (nonatomic) BOOL hasDisplayRepresentation;
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
- (void)deleteDisplayRepresentation;
- (void)deleteTypeIdentifier;
- (id)suppressMessageUnderConditions;

@end
