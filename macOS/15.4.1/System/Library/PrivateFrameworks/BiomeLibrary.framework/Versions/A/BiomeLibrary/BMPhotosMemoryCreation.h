@class NSString, NSArray;

@interface BMPhotosMemoryCreation : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL queryContainsPersonEntity;
@property (nonatomic) BOOL hasQueryContainsPersonEntity;
@property (readonly, nonatomic) BOOL queryContainsActivityEntity;
@property (nonatomic) BOOL hasQueryContainsActivityEntity;
@property (readonly, nonatomic) BOOL queryContainsTimeEntity;
@property (nonatomic) BOOL hasQueryContainsTimeEntity;
@property (readonly, nonatomic) BOOL queryContainsLocationEntity;
@property (nonatomic) BOOL hasQueryContainsLocationEntity;
@property (readonly, nonatomic) BOOL queryContainsTripEntity;
@property (nonatomic) BOOL hasQueryContainsTripEntity;
@property (readonly, nonatomic) BOOL queryContainsMusicArtist;
@property (nonatomic) BOOL hasQueryContainsMusicArtist;
@property (readonly, nonatomic) BOOL queryContainsMusicSong;
@property (nonatomic) BOOL hasQueryContainsMusicSong;
@property (readonly, nonatomic) BOOL queryContainsMusicGenre;
@property (nonatomic) BOOL hasQueryContainsMusicGenre;
@property (readonly, nonatomic) BOOL queryContainsMusicMood;
@property (nonatomic) BOOL hasQueryContainsMusicMood;
@property (readonly, nonatomic) NSArray *globalTraits;
@property (readonly, nonatomic) BOOL memoryGenerated;
@property (nonatomic) BOOL hasMemoryGenerated;
@property (readonly, nonatomic) int memoryAssetCount;
@property (readonly, nonatomic) NSString *rawPrompt;
@property (readonly, nonatomic) NSArray *queryActivityEntities;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *region;
@property (readonly, nonatomic) int memoryPromptSuggestionSource;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 queryContainsPersonEntity:(id)a1 queryContainsActivityEntity:(id)a2 queryContainsTimeEntity:(id)a3 queryContainsLocationEntity:(id)a4 queryContainsTripEntity:(id)a5 queryContainsMusicArtist:(id)a6 queryContainsMusicSong:(id)a7 queryContainsMusicGenre:(id)a8 queryContainsMusicMood:(id)a9 globalTraits:(id)a10 memoryGenerated:(id)a11 memoryAssetCount:(int)a12 rawPrompt:(id)a13 queryActivityEntities:(id)a14 language:(id)a15 region:(id)a16 memoryPromptSuggestionSource:(int)a17;
- (id)initByReadFrom:(id)a0;
- (id)_queryActivityEntitiesJSONArray;
- (id)_globalTraitsJSONArray;
- (id)initWithIdentifier:(id)a0 queryContainsPersonEntity:(id)a1 queryContainsActivityEntity:(id)a2 queryContainsTimeEntity:(id)a3 queryContainsLocationEntity:(id)a4 queryContainsTripEntity:(id)a5 queryContainsMusicArtist:(id)a6 queryContainsMusicSong:(id)a7 queryContainsMusicGenre:(id)a8 queryContainsMusicMood:(id)a9 globalTraits:(id)a10 memoryGenerated:(id)a11 memoryAssetCount:(int)a12;

@end
