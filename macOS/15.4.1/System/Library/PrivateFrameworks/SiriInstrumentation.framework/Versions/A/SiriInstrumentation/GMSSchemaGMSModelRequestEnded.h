@class NSData;

@interface GMSSchemaGMSModelRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char tokensPerSecond : 1; unsigned char responseTokensCount : 1; unsigned char kbPerSecond : 1; unsigned char responseKbCount : 1; unsigned char imagePerSecond : 1; unsigned char imageCount : 1; unsigned char timeToFirstTokenInSeconds : 1; unsigned char timeToLastTokenInSeconds : 1; unsigned char responseCharactersCount : 1; unsigned char responseTimeInMilliseconds : 1; } _has;
}

@property (nonatomic) double tokensPerSecond;
@property (nonatomic) BOOL hasTokensPerSecond;
@property (nonatomic) unsigned int responseTokensCount;
@property (nonatomic) BOOL hasResponseTokensCount;
@property (nonatomic) double kbPerSecond;
@property (nonatomic) BOOL hasKbPerSecond;
@property (nonatomic) unsigned int responseKbCount;
@property (nonatomic) BOOL hasResponseKbCount;
@property (nonatomic) float imagePerSecond;
@property (nonatomic) BOOL hasImagePerSecond;
@property (nonatomic) unsigned int imageCount;
@property (nonatomic) BOOL hasImageCount;
@property (nonatomic) double timeToFirstTokenInSeconds;
@property (nonatomic) BOOL hasTimeToFirstTokenInSeconds;
@property (nonatomic) double timeToLastTokenInSeconds;
@property (nonatomic) BOOL hasTimeToLastTokenInSeconds;
@property (nonatomic) unsigned int responseCharactersCount;
@property (nonatomic) BOOL hasResponseCharactersCount;
@property (nonatomic) unsigned int responseTimeInMilliseconds;
@property (nonatomic) BOOL hasResponseTimeInMilliseconds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTimeToFirstTokenInSeconds;
- (void)deleteImageCount;
- (void)deleteImagePerSecond;
- (void)deleteKbPerSecond;
- (void)deleteResponseCharactersCount;
- (void)deleteResponseKbCount;
- (void)deleteResponseTimeInMilliseconds;
- (void)deleteResponseTokensCount;
- (void)deleteTimeToLastTokenInSeconds;
- (void)deleteTokensPerSecond;
- (id)suppressMessageUnderConditions;

@end
