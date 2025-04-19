@interface PGFlexMusicCurationParameters : NSObject {
    void /* unknown type, empty encoding */ mood;
    void /* unknown type, empty encoding */ moodKeywords;
    void /* unknown type, empty encoding */ recentlyUsedSongs;
    void /* unknown type, empty encoding */ entityUUID;
    void /* unknown type, empty encoding */ useMoodKeywords;
    void /* unknown type, empty encoding */ features;
    void /* unknown type, empty encoding */ flexMusicSongs;
    void /* unknown type, empty encoding */ genre;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithMood:(unsigned long long)a0 moodKeywords:(id)a1 recentlyUsedSongs:(id)a2 entityUUID:(id)a3 useMoodKeywords:(BOOL)a4 features:(id)a5 musicCuratorContext:(id)a6;
- (id)initWithMood:(unsigned long long)a0 moodKeywords:(id)a1 recentlyUsedSongs:(id)a2 entityUUID:(id)a3 useMoodKeywords:(BOOL)a4 features:(id)a5 musicCuratorContext:(id)a6 genre:(id)a7;

@end
