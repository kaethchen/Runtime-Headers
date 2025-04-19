@class NSString, NSData;

@interface MHSchemaMHApplicationPlaybackAttempted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *appBundleName;
@property (nonatomic) BOOL hasAppBundleName;
@property (copy, nonatomic) NSString *appBundleVersion;
@property (nonatomic) BOOL hasAppBundleVersion;
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
- (void)deleteAppBundleName;
- (void)deleteAppBundleVersion;
- (id)suppressMessageUnderConditions;

@end
