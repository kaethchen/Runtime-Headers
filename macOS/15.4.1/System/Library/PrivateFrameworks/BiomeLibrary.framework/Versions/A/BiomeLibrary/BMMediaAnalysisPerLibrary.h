@class NSString;

@interface BMMediaAnalysisPerLibrary : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *libraryType;
@property (readonly, nonatomic) int imageAssetCount;
@property (nonatomic) BOOL hasImageAssetCount;
@property (readonly, nonatomic) int livePhotoAssetCount;
@property (nonatomic) BOOL hasLivePhotoAssetCount;
@property (readonly, nonatomic) int movieAssetCount;
@property (nonatomic) BOOL hasMovieAssetCount;
@property (readonly, nonatomic) int movieAssetDurations;
@property (nonatomic) BOOL hasMovieAssetDurations;
@property (readonly, nonatomic) int editedMovieCount;
@property (nonatomic) BOOL hasEditedMovieCount;
@property (readonly, nonatomic) int sharedMovieCount;
@property (nonatomic) BOOL hasSharedMovieCount;
@property (readonly, nonatomic) int favoritedMovieCount;
@property (nonatomic) BOOL hasFavoritedMovieCount;
@property (readonly, nonatomic) int spatialMoviePercentage;
@property (nonatomic) BOOL hasSpatialMoviePercentage;
@property (readonly, nonatomic) int cinematicMoviePercentage;
@property (nonatomic) BOOL hasCinematicMoviePercentage;
@property (readonly, nonatomic) int slomoMoviePercentage;
@property (nonatomic) BOOL hasSlomoMoviePercentage;
@property (readonly, nonatomic) int timelapsePercentage;
@property (nonatomic) BOOL hasTimelapsePercentage;
@property (readonly, nonatomic) int portraitModePercentage;
@property (nonatomic) BOOL hasPortraitModePercentage;
@property (readonly, nonatomic) int landscapeModePercentage;
@property (nonatomic) BOOL hasLandscapeModePercentage;
@property (readonly, nonatomic) int withHighlightsPercentage;
@property (nonatomic) BOOL hasWithHighlightsPercentage;
@property (readonly, nonatomic) int withPeoplePercentage;
@property (nonatomic) BOOL hasWithPeoplePercentage;
@property (readonly, nonatomic) int withPetsPercentage;
@property (nonatomic) BOOL hasWithPetsPercentage;
@property (readonly, nonatomic) int withNatureOrNaturalLandmarksPercentage;
@property (nonatomic) BOOL hasWithNatureOrNaturalLandmarksPercentage;
@property (readonly, nonatomic) int withSkylinePercentage;
@property (nonatomic) BOOL hasWithSkylinePercentage;
@property (readonly, nonatomic) int wthLandmarksPercentage;
@property (nonatomic) BOOL hasWthLandmarksPercentage;
@property (readonly, nonatomic) int withActionPercentage;
@property (nonatomic) BOOL hasWithActionPercentage;
@property (readonly, nonatomic) int withHighMotionPercentage;
@property (nonatomic) BOOL hasWithHighMotionPercentage;
@property (readonly, nonatomic) int highlightsWithPeoplePercentage;
@property (nonatomic) BOOL hasHighlightsWithPeoplePercentage;
@property (readonly, nonatomic) int highlightsWithPetsPercentage;
@property (nonatomic) BOOL hasHighlightsWithPetsPercentage;
@property (readonly, nonatomic) int highlightsWithNatureOrNaturalLandmarksPercentage;
@property (nonatomic) BOOL hasHighlightsWithNatureOrNaturalLandmarksPercentage;
@property (readonly, nonatomic) int highlightsWithSkylinePercentage;
@property (nonatomic) BOOL hasHighlightsWithSkylinePercentage;
@property (readonly, nonatomic) int highlightsWithLandmarksPercentage;
@property (nonatomic) BOOL hasHighlightsWithLandmarksPercentage;
@property (readonly, nonatomic) int highlightsWithActionPercentage;
@property (nonatomic) BOOL hasHighlightsWithActionPercentage;
@property (readonly, nonatomic) int highlightsWithHighMotionPercentage;
@property (nonatomic) BOOL hasHighlightsWithHighMotionPercentage;
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
- (id)initByReadFrom:(id)a0;
- (id)initWithLibraryType:(id)a0 imageAssetCount:(id)a1 livePhotoAssetCount:(id)a2 movieAssetCount:(id)a3 movieAssetDurations:(id)a4 editedMovieCount:(id)a5 sharedMovieCount:(id)a6 favoritedMovieCount:(id)a7 spatialMoviePercentage:(id)a8 cinematicMoviePercentage:(id)a9 slomoMoviePercentage:(id)a10 timelapsePercentage:(id)a11 portraitModePercentage:(id)a12 landscapeModePercentage:(id)a13 withHighlightsPercentage:(id)a14 withPeoplePercentage:(id)a15 withPetsPercentage:(id)a16 withNatureOrNaturalLandmarksPercentage:(id)a17 withSkylinePercentage:(id)a18 wthLandmarksPercentage:(id)a19 withActionPercentage:(id)a20 withHighMotionPercentage:(id)a21 highlightsWithPeoplePercentage:(id)a22 highlightsWithPetsPercentage:(id)a23 highlightsWithNatureOrNaturalLandmarksPercentage:(id)a24 highlightsWithSkylinePercentage:(id)a25 highlightsWithLandmarksPercentage:(id)a26 highlightsWithActionPercentage:(id)a27 highlightsWithHighMotionPercentage:(id)a28;

@end
