@interface TSKMoviePlaybackRegistry : NSObject

+ (id)sharedMoviePlaybackRegistry;

- (id)init;
- (void)objectDidEndMoviePlayback:(id)a0;
- (void)objectWillBeginMoviePlayback:(id)a0;

@end
