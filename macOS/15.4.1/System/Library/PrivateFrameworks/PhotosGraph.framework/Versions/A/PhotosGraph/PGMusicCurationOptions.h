@class NSArray, NSString, NSDictionary, PGMusicCurationSpecificationOptions;

@interface PGMusicCurationOptions : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *recentlyUsedSongAdamIDs;
@property (readonly, nonatomic) NSArray *recentlyUsedBundledSongIDs;
@property (readonly, nonatomic) NSString *rootMemoryLocalIdentifier;
@property (readonly, nonatomic) BOOL useOnlyMusicForTopicInTopPickSuggestions;
@property (readonly, nonatomic) BOOL includeChillMixInMusicForYou;
@property (readonly, nonatomic) BOOL includeGetUpMixInMusicForYou;
@property (readonly, nonatomic) BOOL shouldRefreshSongMetadata;
@property (readonly, nonatomic) BOOL shouldForceShareableInBestSuggestions;
@property (readonly, nonatomic) BOOL shouldCurateUpNextMemories;
@property (readonly, nonatomic) BOOL shouldUseSpecificationOptionsForCuration;
@property (readonly, nonatomic) BOOL useMemoryCreationMusicCuratorConfiguration;
@property (readonly, nonatomic) NSDictionary *topicKeywordsAndWeights;
@property (readonly, nonatomic) unsigned long long suggestedMood;
@property (readonly, nonatomic) PGMusicCurationSpecificationOptions *musicCurationSpecificationOptions;
@property (readonly, nonatomic) NSString *assetCollectionLocalIdentifier;
@property (readonly, nonatomic) NSString *backingCollectionLocalIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithOptionsDictionary:(id)a0;
- (id)initForMemoryEnrichment;
- (id)initForUpNextMemoryRequestWithOptionsDictionary:(id)a0;
- (id)copyWithAssetCollectionLocalIdentifier:(id)a0;

@end
