@interface VideosUI.PlaybackWindowManager : NSObject <NSWindowDelegate, VUIPlaybackWindowManager> {
    void /* unknown type, empty encoding */ window;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ defaultAspectRatio;
    void /* unknown type, empty encoding */ minWidth;
}

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)windowWillClose:(id)a0;
- (void)presentWindowWithViewController:(id)a0;

@end
