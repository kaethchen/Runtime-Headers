@class NSArray, NSData;

@interface JRSchemaJRAction : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addActions:(unsigned int)a0;
- (unsigned int)actionsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionsCount;
- (void)clearActions;
- (void)deleteActions;
- (id)suppressMessageUnderConditions;

@end
