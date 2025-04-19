@class NSString, NSData;

@interface LCServiceBlackListedField : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *fullyQualifiedPath;
@property (nonatomic) BOOL hasFullyQualifiedPath;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFullyQualifiedPath;
- (id)suppressMessageUnderConditions;

@end
