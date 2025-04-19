@class NSData;

@interface IFTSchemaIFTSearchExpression : SISchemaInstrumentationMessage {
    struct { unsigned char pickOne : 1; } _has;
}

@property (nonatomic) BOOL pickOne;
@property (nonatomic) BOOL hasPickOne;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePickOne;
- (id)suppressMessageUnderConditions;

@end
