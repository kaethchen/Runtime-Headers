@interface PGWrapperMusicForTopicCacher : NSObject

+ (void)prefetchCuratedSongLibraryAssetsWithProgressReporter:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)cacheMusicWithCache:(id)a0 progressReporter:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;

@end
