@class NSString, NSData;

@interface LTSchemaDisambiguationSpeechTranslationEvent : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL hasRequestID;
@property (copy, nonatomic) NSString *sourceLocale;
@property (nonatomic) BOOL hasSourceLocale;
@property (copy, nonatomic) NSString *senseID;
@property (nonatomic) BOOL hasSenseID;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestID;
- (void)deleteSenseID;
- (void)deleteSourceLocale;
- (id)suppressMessageUnderConditions;

@end
