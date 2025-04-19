@class NSString, NSData, IFTSchemaIFTTypedValue;

@interface IFTSchemaIFTParameterConfirmation : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char parameterIndex : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSString *parameterId;
@property (nonatomic) BOOL hasParameterId;
@property (nonatomic) long long parameterIndex;
@property (nonatomic) BOOL hasParameterIndex;
@property (retain, nonatomic) IFTSchemaIFTTypedValue *item;
@property (nonatomic) BOOL hasItem;
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
- (void)deleteExists;
- (void)deleteItem;
- (void)deleteParameterId;
- (void)deleteParameterIndex;
- (id)suppressMessageUnderConditions;

@end
