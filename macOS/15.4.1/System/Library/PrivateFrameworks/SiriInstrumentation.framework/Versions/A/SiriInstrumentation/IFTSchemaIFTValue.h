@class IFTSchemaIFTEnumerationValue, IFTSchemaIFTQueryValue, IFTSchemaIFTPrimitiveValue, NSData, IFTSchemaIFTEntityValue;

@interface IFTSchemaIFTValue : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTPrimitiveValue *primitive;
@property (nonatomic) BOOL hasPrimitive;
@property (retain, nonatomic) IFTSchemaIFTEnumerationValue *enumeration;
@property (nonatomic) BOOL hasEnumeration;
@property (retain, nonatomic) IFTSchemaIFTEntityValue *entity;
@property (nonatomic) BOOL hasEntity;
@property (retain, nonatomic) IFTSchemaIFTQueryValue *query;
@property (nonatomic) BOOL hasQuery;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Value;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePrimitive;
- (void)deleteEntity;
- (void)deleteEnumeration;
- (void)deleteQuery;
- (id)suppressMessageUnderConditions;

@end
