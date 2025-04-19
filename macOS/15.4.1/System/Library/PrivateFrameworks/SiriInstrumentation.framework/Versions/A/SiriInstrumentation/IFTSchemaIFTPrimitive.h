@class NSData;

@interface IFTSchemaIFTPrimitive : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char primitiveType : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) int primitiveType;
@property (nonatomic) BOOL hasPrimitiveType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExists;
- (void)deletePrimitiveType;
- (id)suppressMessageUnderConditions;

@end
