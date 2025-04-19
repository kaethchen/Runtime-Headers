@interface PodcastsKit.ProxyPlayerController : NSObject <PKPlayerController>

- (id)init;
- (void)pauseWithCompletion:(id /* block */)a0;
- (void)playWithCompletion:(id /* block */)a0;
- (void)playWithDetailedCompletion:(id /* block */)a0;
- (void)setManifest:(id)a0 startPlayback:(BOOL)a1 completion:(id /* block */)a2;
- (void)startPlayback:(id)a0 completion:(id /* block */)a1;

@end
