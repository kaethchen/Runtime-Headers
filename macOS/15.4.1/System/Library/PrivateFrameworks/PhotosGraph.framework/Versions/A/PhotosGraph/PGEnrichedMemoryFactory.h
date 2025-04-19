@class PGMoodKeywordComputer, PGMemoryCurationSession, PGTitleGenerationContext, PGGraph, NSObject;
@protocol OS_os_log;

@interface PGEnrichedMemoryFactory : NSObject {
    PGMoodKeywordComputer *_moodKeywordComputer;
    NSObject<OS_os_log> *_loggingConnection;
    PGMemoryCurationSession *_memoryCurationSession;
    PGTitleGenerationContext *_titleGenerationContext;
    PGGraph *_graph;
}

+ (void)requestFlexMusicCurationForEnrichedMemories:(id)a0 context:(id)a1 photoLibrary:(id)a2 graph:(id)a3 progressReporter:(id)a4 resultHandler:(id /* block */)a5;
+ (void)requestMusicCurationForEnrichedMemories:(id)a0 context:(id)a1 graph:(id)a2 progressReporter:(id)a3 resultHandler:(id /* block */)a4;
+ (long long)notificationLevelForTriggeredMemory:(id)a0 withLocalDate:(id)a1 graph:(id)a2;
+ (double)notificationScoreForNotificationLevel:(long long)a0 electionScore:(double)a1;

- (void).cxx_destruct;
- (id)_curatedAssetsWithFeeder:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (id)_extendedCuratedAssetsWithFeeder:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (id)_keyAssetWithFeeder:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (id)_memoryEnricherFromTriggeredMemory:(id)a0;
- (unsigned long long)_numberOfGuestAssetInAssets:(id)a0;
- (id)curatedAssetUUIDsWithTriggeredMemory:(id)a0 keyAsset:(id)a1 extendedCuratedAssetUUIDs:(id)a2 targetCurationDuration:(double)a3 allowGuestAsset:(BOOL)a4 progressReporter:(id)a5;
- (id)debugEnrichedMemoryWithTriggeredMemory:(id)a0 withConfiguration:(id)a1 progressReporter:(id)a2;
- (id)enrichedMemoryWithTriggeredMemory:(id)a0 withConfiguration:(id)a1 progressReporter:(id)a2;
- (id)enrichedMemoryWithTriggeredMemory:(id)a0 withConfiguration:(id)a1 progressReporter:(id)a2 debug:(BOOL)a3;
- (id)initWithMemoryCurationSession:(id)a0 graph:(id)a1 serviceManager:(id)a2;

@end
