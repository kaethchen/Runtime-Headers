@class NSString, NSDictionary, NSMutableSet;

@interface CESRSpeechItemRanker_Media : CESRSpeechItemRanker {
    NSString *_trialMediaRankingStrategy;
    NSDictionary *_itemIdToRank;
    unsigned long long _playableLimit;
    unsigned long long _artistLimit;
    NSMutableSet *_codepathIds;
}

+ (BOOL)_isArtistItem:(id)a0;
+ (BOOL)_isPlayableItem:(id)a0;
+ (id)_itemIdsFromMediaEntities:(id)a0;
+ (id)_performMediaCollectionsQuery:(id)a0 limit:(unsigned long long)a1 orderingProperties:(id)a2 orderingDirectionMappings:(id)a3;
+ (id)_performMediaItemsQuery:(id)a0 limit:(unsigned long long)a1 orderingProperties:(id)a2 orderingDirectionMappings:(id)a3;
+ (id)_rankedItemIdsFromTopPlayables:(id)a0 topArtists:(id)a1 playableLimit:(unsigned long long)a2 artistLimit:(unsigned long long)a3;
+ (id)queryRecentMediaEntities;
+ (id)queryTopPlayableIds;

- (void).cxx_destruct;
- (BOOL)addSet:(id)a0;
- (void)_activateEnrolledTrialExperiments;
- (int)_dataProtectionClass;
- (BOOL)_loadRankedItemCache;
- (id)_queryAndRankMediaItems;
- (id)_rankedItemCacheFile;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)getActivatedCodepathIds;
- (id)getAllCodepathIds;
- (id)initWithInstance:(id)a0 speechProfileSite:(id)a1 categoryGroup:(id)a2;
- (id)initWithInstance:(id)a0 speechProfileSite:(id)a1 categoryGroup:(id)a2 playableLimit:(unsigned long long)a3 artistLimit:(unsigned long long)a4 itemIdToRank:(id)a5;
- (BOOL)refreshRankedItemCache:(id *)a0;

@end
