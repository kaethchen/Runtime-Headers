@class PFSceneTaxonomy, NSObject;
@protocol OS_dispatch_queue;

@interface SSPommesPhotosRanker : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serial_queue;
@property (nonatomic) float estimatedMaxPommesL1Score;
@property (retain, nonatomic) PFSceneTaxonomy *sceneTaxonomy;

+ (id)sharedInstance;
+ (id)PhotosRankingRequiredAttributes;
+ (long long)PhotosL1Compare:(id)a0 to:(id)a1;
+ (long long)PhotosL2Compare:(id)a0 to:(id)a1;

- (void).cxx_destruct;
- (void)updateScoresForItems:(id)a0 withSectionBundle:(id)a1 userQuery:(id)a2 queryID:(long long)a3 currentTime:(double)a4 collectL2Signals:(BOOL)a5 keyboardLanguage:(id)a6 onlyEmbeddingResults:(BOOL)a7 isCardSearch:(BOOL)a8;
- (void)sortAndFilterRankedPhotosItemsFilterFromSet:(id)a0 maxCount:(unsigned long long)a1 userQuery:(id)a2 currentTime:(double)a3;
- (void)donateFeatureDictionaries:(id)a0 sessionId:(id)a1 metadata:(id)a2;
- (void)sortAndFilterRankedPhotosItems:(id)a0 maxCount:(unsigned long long)a1 userQuery:(id)a2 currentTime:(double)a3;
- (void)sortAndFilterRankedPhotosItemsFilter:(id)a0 maxCount:(unsigned long long)a1 userQuery:(id)a2 currentTime:(double)a3;
- (void)updatePhotosRankingItemScore:(id)a0 userQuery:(id)a1 currentTime:(double)a2 collectL2Signals:(BOOL)a3 keyboardLanguage:(id)a4 uniqueSessionID:(id)a5 onlyEmbeddingResults:(BOOL)a6 amlInputs:(id)a7 isCardSearch:(BOOL)a8;

@end
