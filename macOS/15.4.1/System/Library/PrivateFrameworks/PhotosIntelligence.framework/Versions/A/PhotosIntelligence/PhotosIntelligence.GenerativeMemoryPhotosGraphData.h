@interface PhotosIntelligence.GenerativeMemoryPhotosGraphData : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ storyChapters;
    void /* unknown type, empty encoding */ storyMusicCuration;
    void /* unknown type, empty encoding */ promptInformation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_storyTitleCategory;
}

+ (id)getCuratedAssetPlaybackTimeRangesFor:(id)a0;
+ (id)parsePromptInformationAsDictionaryWithMemory:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;

@end
