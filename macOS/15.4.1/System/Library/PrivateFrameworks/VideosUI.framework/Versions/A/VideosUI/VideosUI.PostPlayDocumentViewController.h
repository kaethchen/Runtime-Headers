@interface VideosUI.PostPlayDocumentViewController : VideosUI.DocumentRequestViewController <VUIPlaybackUpNextController> {
    void /* unknown type, empty encoding */ playbackUpNextDelegate;
    void /* unknown type, empty encoding */ postPlayContextData;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)playbackUpNextViewHeight;
- (void)setPlaybackUpNextContextData:(id)a0;
- (void)setPlaybackUpNextDelegate:(id)a0;
- (void)startAutoPlayAnimation;

@end
