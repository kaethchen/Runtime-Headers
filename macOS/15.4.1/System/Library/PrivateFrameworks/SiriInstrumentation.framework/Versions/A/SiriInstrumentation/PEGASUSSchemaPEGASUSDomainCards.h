@class NSData;

@interface PEGASUSSchemaPEGASUSDomainCards : SISchemaInstrumentationMessage {
    struct { unsigned char clockCount : 1; unsigned char dictionaryCount : 1; unsigned char kgCount : 1; unsigned char mapsCount : 1; unsigned char mathCount : 1; unsigned char mediaCount : 1; unsigned char moviesCount : 1; unsigned char newsCount : 1; unsigned char precomputedWebanswersCount : 1; unsigned char sportsCount : 1; unsigned char stocksCount : 1; unsigned char tvCount : 1; unsigned char videoCount : 1; unsigned char weatherCount : 1; unsigned char webCount : 1; unsigned char webImagesCount : 1; unsigned char ampVideoCount : 1; unsigned char appsCount : 1; unsigned char conversionsCount : 1; unsigned char edutainmentCount : 1; unsigned char kgcnCount : 1; unsigned char webVideoCount : 1; unsigned char writingsCount : 1; unsigned char flightsCount : 1; unsigned char ampMusicCount : 1; } _has;
}

@property (nonatomic) unsigned int clockCount;
@property (nonatomic) BOOL hasClockCount;
@property (nonatomic) unsigned int dictionaryCount;
@property (nonatomic) BOOL hasDictionaryCount;
@property (nonatomic) unsigned int kgCount;
@property (nonatomic) BOOL hasKgCount;
@property (nonatomic) unsigned int mapsCount;
@property (nonatomic) BOOL hasMapsCount;
@property (nonatomic) unsigned int mathCount;
@property (nonatomic) BOOL hasMathCount;
@property (nonatomic) unsigned int mediaCount;
@property (nonatomic) BOOL hasMediaCount;
@property (nonatomic) unsigned int moviesCount;
@property (nonatomic) BOOL hasMoviesCount;
@property (nonatomic) unsigned int newsCount;
@property (nonatomic) BOOL hasNewsCount;
@property (nonatomic) unsigned int precomputedWebanswersCount;
@property (nonatomic) BOOL hasPrecomputedWebanswersCount;
@property (nonatomic) unsigned int sportsCount;
@property (nonatomic) BOOL hasSportsCount;
@property (nonatomic) unsigned int stocksCount;
@property (nonatomic) BOOL hasStocksCount;
@property (nonatomic) unsigned int tvCount;
@property (nonatomic) BOOL hasTvCount;
@property (nonatomic) unsigned int videoCount;
@property (nonatomic) BOOL hasVideoCount;
@property (nonatomic) unsigned int weatherCount;
@property (nonatomic) BOOL hasWeatherCount;
@property (nonatomic) unsigned int webCount;
@property (nonatomic) BOOL hasWebCount;
@property (nonatomic) unsigned int webImagesCount;
@property (nonatomic) BOOL hasWebImagesCount;
@property (nonatomic) unsigned int ampVideoCount;
@property (nonatomic) BOOL hasAmpVideoCount;
@property (nonatomic) unsigned int appsCount;
@property (nonatomic) BOOL hasAppsCount;
@property (nonatomic) unsigned int conversionsCount;
@property (nonatomic) BOOL hasConversionsCount;
@property (nonatomic) unsigned int edutainmentCount;
@property (nonatomic) BOOL hasEdutainmentCount;
@property (nonatomic) unsigned int kgcnCount;
@property (nonatomic) BOOL hasKgcnCount;
@property (nonatomic) unsigned int webVideoCount;
@property (nonatomic) BOOL hasWebVideoCount;
@property (nonatomic) unsigned int writingsCount;
@property (nonatomic) BOOL hasWritingsCount;
@property (nonatomic) unsigned int flightsCount;
@property (nonatomic) BOOL hasFlightsCount;
@property (nonatomic) unsigned int ampMusicCount;
@property (nonatomic) BOOL hasAmpMusicCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteKgcnCount;
- (void)deleteMapsCount;
- (void)deleteMathCount;
- (void)deleteAppsCount;
- (void)deleteNewsCount;
- (void)deleteAmpMusicCount;
- (void)deleteAmpVideoCount;
- (void)deleteClockCount;
- (void)deleteConversionsCount;
- (void)deleteDictionaryCount;
- (void)deleteEdutainmentCount;
- (void)deleteFlightsCount;
- (void)deleteKgCount;
- (void)deleteMediaCount;
- (void)deleteMoviesCount;
- (void)deletePrecomputedWebanswersCount;
- (void)deleteSportsCount;
- (void)deleteStocksCount;
- (void)deleteTvCount;
- (void)deleteVideoCount;
- (void)deleteWeatherCount;
- (void)deleteWebCount;
- (void)deleteWebImagesCount;
- (void)deleteWebVideoCount;
- (void)deleteWritingsCount;
- (id)suppressMessageUnderConditions;

@end
