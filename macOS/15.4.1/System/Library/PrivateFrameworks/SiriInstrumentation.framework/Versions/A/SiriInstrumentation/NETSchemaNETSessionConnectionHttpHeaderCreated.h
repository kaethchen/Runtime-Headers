@class NSString, NSData;

@interface NETSchemaNETSessionConnectionHttpHeaderCreated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *userAgent;
@property (nonatomic) BOOL hasUserAgent;
@property (copy, nonatomic) NSString *aceHost;
@property (nonatomic) BOOL hasAceHost;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUserAgent;
- (void)deleteAceHost;
- (id)suppressMessageUnderConditions;

@end
