@interface PGMusicAudioCacher : NSObject

+ (void)cacheSongAudioForAdamIDs:(id)a0 progressReporter:(id)a1 completionHandler:(id /* block */)a2;
+ (void)removeAllSongsCachedForPhotosWithProgressReporter:(id)a0 completionHandler:(id /* block */)a1;
+ (void)removeSongsCachedForPhotosWithAdamIDs:(id)a0 progressReporter:(id)a1 completionHandler:(id /* block */)a2;
+ (id)songPropertiesByAdamIDCachedForPhotosWithError:(id *)a0;

@end
