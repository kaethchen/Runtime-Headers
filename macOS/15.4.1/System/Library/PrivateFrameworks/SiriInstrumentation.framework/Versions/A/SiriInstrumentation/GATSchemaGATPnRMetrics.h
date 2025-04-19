@class NSData;

@interface GATSchemaGATPnRMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char startSiriSessionDurationInSeconds : 1; unsigned char generativeRequestDurationInSeconds : 1; unsigned char loadScreenContentDurationInSeconds : 1; unsigned char imageResizingDurationInSeconds : 1; unsigned char registerMediaDurationInSeconds : 1; unsigned char loadScreenContentRateKBsPerSecond : 1; unsigned char registerMediaRateKBsPerSecond : 1; unsigned char generativeResultCharactersCount : 1; unsigned char imageResizingRateKBsPerSecond : 1; } _has;
}

@property (nonatomic) double startSiriSessionDurationInSeconds;
@property (nonatomic) BOOL hasStartSiriSessionDurationInSeconds;
@property (nonatomic) double generativeRequestDurationInSeconds;
@property (nonatomic) BOOL hasGenerativeRequestDurationInSeconds;
@property (nonatomic) double loadScreenContentDurationInSeconds;
@property (nonatomic) BOOL hasLoadScreenContentDurationInSeconds;
@property (nonatomic) double imageResizingDurationInSeconds;
@property (nonatomic) BOOL hasImageResizingDurationInSeconds;
@property (nonatomic) double registerMediaDurationInSeconds;
@property (nonatomic) BOOL hasRegisterMediaDurationInSeconds;
@property (nonatomic) double loadScreenContentRateKBsPerSecond;
@property (nonatomic) BOOL hasLoadScreenContentRateKBsPerSecond;
@property (nonatomic) double registerMediaRateKBsPerSecond;
@property (nonatomic) BOOL hasRegisterMediaRateKBsPerSecond;
@property (nonatomic) unsigned int generativeResultCharactersCount;
@property (nonatomic) BOOL hasGenerativeResultCharactersCount;
@property (nonatomic) double imageResizingRateKBsPerSecond;
@property (nonatomic) BOOL hasImageResizingRateKBsPerSecond;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteGenerativeRequestDurationInSeconds;
- (void)deleteGenerativeResultCharactersCount;
- (void)deleteImageResizingDurationInSeconds;
- (void)deleteImageResizingRateKBsPerSecond;
- (void)deleteLoadScreenContentDurationInSeconds;
- (void)deleteLoadScreenContentRateKBsPerSecond;
- (void)deleteRegisterMediaDurationInSeconds;
- (void)deleteRegisterMediaRateKBsPerSecond;
- (void)deleteStartSiriSessionDurationInSeconds;
- (id)suppressMessageUnderConditions;

@end
