@class NSString, NSDictionary;

@interface PGMusicCuratorContext : NSObject {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ blocklistConfiguration;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ musicBag;
    void /* unknown type, empty encoding */ adamIDsWithNegativeUserFeedback;
    void /* unknown type, empty encoding */ allowExplicitMusicContent;
    void /* unknown type, empty encoding */ musicCurationOverrideDictionary;
    void /* unknown type, empty encoding */ genre;
    void /* unknown type, empty encoding */ musicForTopicUseTopicOnly;
    void /* unknown type, empty encoding */ $__lazy_storage_$_keywordsByAdamID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_flexMusicSongs;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ cache;
@property (nonatomic) void /* unknown type, empty encoding */ useOnlyMusicForTopicInTopPickSuggestions;
@property (nonatomic) void /* unknown type, empty encoding */ allowChillMixElection;
@property (nonatomic) void /* unknown type, empty encoding */ allowGetUpMixElection;
@property (nonatomic) void /* unknown type, empty encoding */ refreshSongMetadata;
@property (nonatomic) void /* unknown type, empty encoding */ forceShareableInBestSuggestions;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ recentlyUsedSongs;
@property (nonatomic, copy) NSDictionary *musicCurationOverrideDictionary;
@property (nonatomic) void /* unknown type, empty encoding */ bypassMusicForTopicElection;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic) void /* unknown type, empty encoding */ isMemoryCreationCuration;

+ (id)contextWithPhotoLibrary:(id)a0 adamIDsWithNegativeUserFeedback:(id)a1 allowExplicitMusicContent:(id)a2 cache:(id)a3 musicBag:(id)a4 recentlyUsedSongs:(id)a5 genre:(id)a6 isMemoryCreationCuration:(id)a7 configuration:(id)a8 error:(id *)a9;

- (id)init;
- (void).cxx_destruct;

@end
