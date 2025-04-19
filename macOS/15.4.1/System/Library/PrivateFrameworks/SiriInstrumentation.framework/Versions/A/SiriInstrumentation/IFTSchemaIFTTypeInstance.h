@class IFTSchemaIFTCollectionValue, IFTSchemaIFTTypeIdentifier, NSData;

@interface IFTSchemaIFTTypeInstance : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTTypeIdentifier *typeIdentifier;
@property (nonatomic) BOOL hasTypeIdentifier;
@property (retain, nonatomic) IFTSchemaIFTCollectionValue *collection;
@property (nonatomic) BOOL hasCollection;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichItemtype;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCollection;
- (void)deleteTypeIdentifier;
- (id)suppressMessageUnderConditions;

@end
