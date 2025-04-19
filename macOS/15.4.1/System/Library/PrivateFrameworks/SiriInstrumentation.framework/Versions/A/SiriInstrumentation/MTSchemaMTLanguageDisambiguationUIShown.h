@class NSArray, NSData;

@interface MTSchemaMTLanguageDisambiguationUIShown : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *locales;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addLocale:(int)a0;
- (void)clearLocale;
- (void)deleteLocale;
- (int)localeAtIndex:(unsigned long long)a0;
- (unsigned long long)localeCount;
- (id)suppressMessageUnderConditions;

@end
