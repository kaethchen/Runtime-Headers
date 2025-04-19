@class NSWindow;

@interface UINSFullScreenWindowZoomController : NSObject {
    NSWindow *_window;
    struct _UINSDisplayConfig { struct CGSize { double width; double height; } screenSize; double screenScale; } _launchDisplayConfig;
    struct _UINSDisplayConfig { struct CGSize { double width; double height; } screenSize; double screenScale; } _lastDisplayConfig;
}

- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (void)_displayConfigurationMayHaveChangedNotification:(id)a0;
- (void)_updateWindowScalingBehaviorWithPreferredScaleFactor:(double)a0;
- (void)toggleWindowZoom;

@end
