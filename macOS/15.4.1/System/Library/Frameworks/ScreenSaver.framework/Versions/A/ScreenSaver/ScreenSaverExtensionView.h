@class NSRemoteViewController, ScreenSaverExtensionModule;

@interface ScreenSaverExtensionView : ScreenSaverView {
    NSRemoteViewController *_remoteViewController;
    ScreenSaverExtensionModule *_module;
}

- (void).cxx_destruct;
- (void)startAnimation;
- (void)stopAnimation;
- (void)setRemoteViewController:(id)a0;
- (void)setScreenSaverModule:(id)a0;

@end
