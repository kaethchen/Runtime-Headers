@class NSString, NSData;

@interface SISchemaVerticalLayoutCardSectionInvocationContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) BOOL hasResultIdentifier;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteResultIdentifier;
- (id)suppressMessageUnderConditions;

@end
