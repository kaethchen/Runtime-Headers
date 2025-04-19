@class NSString, NSData, IFTSchemaIFTTypedValue;

@interface IFTSchemaIFTParameterNotAllowed : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (copy, nonatomic) NSString *parameterId;
@property (nonatomic) BOOL hasParameterId;
@property (retain, nonatomic) IFTSchemaIFTTypedValue *value;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteExists;
- (void)deleteParameterId;
- (void)deleteValue;
- (id)suppressMessageUnderConditions;

@end
