@class NSData;

@interface IFTSchemaASTPickType : SISchemaInstrumentationMessage

@property (nonatomic) long long index;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) BOOL none;
@property (nonatomic) BOOL hasNone;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Astpicktype;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIndex;
- (void)deleteNone;
- (id)suppressMessageUnderConditions;

@end
