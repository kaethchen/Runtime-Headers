@class NSString, NSArray, NSData;

@interface NLXSchemaSSUBackgroundUpdateEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *modelEncoderLocale;
@property (nonatomic) BOOL hasModelEncoderLocale;
@property (copy, nonatomic) NSArray *appInfos;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)appInfoAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addAppInfo:(id)a0;
- (unsigned long long)appInfoCount;
- (void)clearAppInfo;
- (void)deleteAppInfo;
- (void)deleteModelEncoderLocale;
- (id)suppressMessageUnderConditions;

@end
